
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>


int start_qt(int argc, char** argv);


class MainWindow : public QMainWindow {
Q_OBJECT

public:
  MainWindow();

private:
  QMdiArea* mMdiArea;
};


#endif
