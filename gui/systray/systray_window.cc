
#include "systray_SystrayWindow.h"
#include <QtGui>

#include <QAction>
#include <QCheckBox>
#include <QComboBox>
#include <QGroupBox>
#include <QLabel>
#include <QLineEdit>
#include <QMenu>
#include <QPushButton>
#include <QSpinBox>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QMessageBox>

SystrayWindow::SystrayWindow()
{
	createIconGroupBox();
	
	iconLabel->setMinimumWidth(durationLabel->sizeHint().width());

	createActions();
	createTrayIcon();

	connect(converterButton, SIGNAL(clicked()), this, SLOT(showMessage()));
	connect(showIconCheckBox, SIGNAL(toggled(bool)),
			trayIcon, SLOT(setVisible(bool)));
	connect(iconComboBox, SIGNAL(currentIndexChanged(int)),
			this, SLOT(setIcon(int)));
	connect(trayIcon, SIGNAL(messageClicked()), this, SLOT(messageClicked()));
	connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
			this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(iconGroupBox);
	mainLayout->addWidget(messageGroupBox);
	setLayout(mainLayout);

	iconComboBox->setCurrentIndex(1);
	trayIcon->show();

	setSystrayWindowTitle(tr("Systray"));
	resize(400, 300);
}

void SystrayWindow::setVisible(bool visible)
{
	minimizeAction->setEnabled(visible);
	maximizeAction->setEnabled(!isMaximized());
	restoreAction->setEnabled(isMaximized() || !visible);
	QDialog::setVisible(visible);
}

void SystrayWindow::closeEvent(QCloseEvent *event)
{
	if (trayIcon->isVisible()) {
		QMessageBox::information(this, tr("Systray"),
				tr("The program will keep running in the "
					"system tray. To terminate the program, "
					"choose <b>Quit</b> in the context menu "
					"of the system tray entry."));
		hide();
		event->ignore();
	}
}

void SystrayWindow::setIcon(int index)
{
	QIcon icon = iconComboBox->itemIcon(index);
	trayIcon->setIcon(icon);
	setSystrayWindowIcon(icon);

	trayIcon->setToolTip(iconComboBox->itemText(index));
}

void SystrayWindow::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
	switch (reason) {
		case QSystemTrayIcon::Trigger:
		case QSystemTrayIcon::DoubleClick:
			iconComboBox->setCurrentIndex((iconComboBox->currentIndex() + 1)
					% iconComboBox->count());
			break;
		case QSystemTrayIcon::MiddleClick:
			showMessage();
			break;
		default:
			;
	}
}

void SystrayWindow::showMessage()
{
	QSystemTrayIcon::MessageIcon icon = QSystemTrayIcon::MessageIcon(
			typeComboBox->itemData(typeComboBox->currentIndex()).toInt());
	trayIcon->showMessage(titleEdit->text(), bodyEdit->toPlainText(), icon,
			durationSpinBox->value() * 1000);
}

void SystrayWindow::messageClicked()
{
	QMessageBox::information(0, tr("Systray"),
			tr("Sorry, I already gave what help I could.\n"
				"Maybe you should try asking a human?"));
}

void SystrayWindow::createMessageGroupBox()
{
	messageGroupBox = new QGroupBox(tr("Balloon Message"));

	typeLabel = new QLabel(tr("Type:"));

	typeComboBox = new QComboBox;
	typeComboBox->addItem(tr("None"), QSystemTrayIcon::NoIcon);
	typeComboBox->addItem(style()->standardIcon(
				QStyle::SP_MessageBoxInformation), tr("Information"),
			QSystemTrayIcon::Information);
	typeComboBox->addItem(style()->standardIcon(
				QStyle::SP_MessageBoxWarning), tr("Warning"),
			QSystemTrayIcon::Warning);
	typeComboBox->addItem(style()->standardIcon(
				QStyle::SP_MessageBoxCritical), tr("Critical"),
			QSystemTrayIcon::Critical);
	typeComboBox->setCurrentIndex(1);

	durationLabel = new QLabel(tr("Duration:"));

	durationSpinBox = new QSpinBox;
	durationSpinBox->setRange(5, 60);
	durationSpinBox->setSuffix(" s");
	durationSpinBox->setValue(15);

	durationWarningLabel = new QLabel(tr("(some systems might ignore this "
				"hint)"));
	durationWarningLabel->setIndent(10);

	titleLabel = new QLabel(tr("Title:"));

	titleEdit = new QLineEdit(tr("Cannot connect to network"));

	bodyLabel = new QLabel(tr("Body:"));

	bodyEdit = new QTextEdit;
	bodyEdit->setPlainText(tr("Don't believe me. Honestly, I don't have a "
				"clue.\nClick this balloon for details."));

	showMessageButton = new QPushButton(tr("Show Message"));
	showMessageButton->setDefault(true);

	QGridLayout *messageLayout = new QGridLayout;
	messageLayout->addWidget(typeLabel, 0, 0);
	messageLayout->addWidget(typeComboBox, 0, 1, 1, 2);
	messageLayout->addWidget(durationLabel, 1, 0);
	messageLayout->addWidget(durationSpinBox, 1, 1);
	messageLayout->addWidget(durationWarningLabel, 1, 2, 1, 3);
	messageLayout->addWidget(titleLabel, 2, 0);
	messageLayout->addWidget(titleEdit, 2, 1, 1, 4);
	messageLayout->addWidget(bodyLabel, 3, 0);
	messageLayout->addWidget(bodyEdit, 3, 1, 2, 4);
	messageLayout->addWidget(showMessageButton, 5, 4);
	messageLayout->setColumnStretch(3, 1);
	messageLayout->setRowStretch(4, 1);
	messageGroupBox->setLayout(messageLayout);
}

void SystrayWindow::createActions()
{
	minimizeAction = new QAction(tr("Mi&nimize"), this);
	connect(minimizeAction, SIGNAL(triggered()), this, SLOT(hide()));

	maximizeAction = new QAction(tr("Ma&ximize"), this);
	connect(maximizeAction, SIGNAL(triggered()), this, SLOT(showMaximized()));

	restoreAction = new QAction(tr("&Restore"), this);
	connect(restoreAction, SIGNAL(triggered()), this, SLOT(showNormal()));

	quitAction = new QAction(tr("&Quit"), this);
	connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
}

void SystrayWindow::createTrayIcon()
{
	trayIconMenu = new QMenu(this);
	trayIconMenu->addAction(minimizeAction);
	trayIconMenu->addAction(maximizeAction);
	trayIconMenu->addAction(restoreAction);
	

	trayIcon = new QSystemTrayIcon(this);
	trayIcon->setContextMenu(trayIconMenu);
}
