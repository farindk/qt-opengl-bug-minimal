//
// Created by farindk on 14.05.19.
//

#include "FileBrowserWidget.h"


FileBrowserWidget::FileBrowserWidget() {
  auto vBox = new QVBoxLayout;

  auto buttonBox = new QHBoxLayout;
  mButton_dialog = new QPushButton("dialog");
  mButton_editor = new QPushButton("OpenGL window");

  buttonBox->addWidget(mButton_dialog);
  buttonBox->addWidget(mButton_editor);

  vBox->addLayout(buttonBox);
  setLayout(vBox);

  connect(mButton_dialog, &QPushButton::clicked,
          [=]() {
            emit onDialogOpened();
          });

  connect(mButton_editor, &QPushButton::clicked,
          [=]() {
            emit onEditorOpened();
          });
}
