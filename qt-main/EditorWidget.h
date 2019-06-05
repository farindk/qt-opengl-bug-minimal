
#ifndef EDITORWIDGET_H
#define EDITORWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>


class EditorWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
  Q_OBJECT

public:
  void initializeGL() override;
  void resizeGL(int w,int h) override;
  void paintGL() override;
};

#endif
