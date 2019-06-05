//
// Created by farindk on 14.05.19.
//

#ifndef FILEBROWSERWIDGET_H
#define FILEBROWSERWIDGET_H

#include <QtWidgets>


class FileBrowserWidget : public QWidget {
Q_OBJECT

public:
  FileBrowserWidget();

signals:
  void onEditorOpened();

  void onDialogOpened();

private:
  QPushButton* mButton_dialog;
  QPushButton* mButton_editor;
};


#endif
