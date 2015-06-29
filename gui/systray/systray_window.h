
#ifndef SYSTEM_WINDOW_H
#define SYSTEM_WINDOW_H

#include <QSystemTrayIcon>
#include <QDialog>

class QAction;
class QPushButton;
class QTextEdit;

class SystrayWindow : public QDialog
{
	Q_OBJECT

	public:
		SystrayWindow();
                virtual ~SystrayWindow() {};

	protected:
		void closeEvent(QCloseEvent *event);

		void iconActivated(QSystemTrayIcon::ActivationReason reason);
		void convert();
		void converterClicked();

	private:
		void createIconGroupBox();
		void createActions();
		void createTrayIcon();

		QTextEdit *bodyEdit;
		QPushButton *converterButton;

		QAction *minimizeAction;
		QAction *maximizeAction;
		QAction *restoreAction;
		QAction *quitAction;

		QSystemTrayIcon *trayIcon;
		QMenu *trayIconMenu;
};

#endif
