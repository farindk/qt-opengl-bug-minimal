//
// Created by farindk on 14.05.19.
//

#include "MainWindow.h"
#include "FileBrowserWidget.h"
#include "EditorWidget.h"

#include <QApplication>


MainWindow::MainWindow() {
  auto fileBrowserWidget = new FileBrowserWidget();

  QDockWidget* dockWidget = new QDockWidget(tr("Selector"), this);
  dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea |
                              Qt::RightDockWidgetArea);
  dockWidget->setWidget(fileBrowserWidget);
  addDockWidget(Qt::LeftDockWidgetArea, dockWidget);


  mMdiArea = new QMdiArea();
  setCentralWidget(mMdiArea);

  connect(fileBrowserWidget, &FileBrowserWidget::onDialogOpened,
          [=]() {

            // Note: I tried also with a plain, non-modal QDialog -> same problem
            QMessageBox errorDialog(this);
            errorDialog.exec();
          });

  connect(fileBrowserWidget, &FileBrowserWidget::onEditorOpened,
          [=]() {

            EditorWidget* editor = new EditorWidget();
            mMdiArea->addSubWindow(editor);
            editor->setAttribute(Qt::WA_DeleteOnClose);
            editor->show();
            mMdiArea->tileSubWindows();
          });
}


int main(int argc, char** argv) {
  QApplication app(argc, argv);

  MainWindow mainWin;
  mainWin.show();

  return QApplication::exec();
}
