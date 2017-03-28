#ifndef QTPREDICKADVOCATORMAINDIALOG_H
#define QTPREDICKADVOCATORMAINDIALOG_H

#include <string>
#include <vector>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#include "predickadvocatormaindialog.h"
#include "qthideandshowdialog.h"
#pragma GCC diagnostic pop

namespace Ui {
  class QtPreDickAdvocaTorMainDialog;
}

namespace ribi {

class QtPreDickAdvocaTorMainDialog : public QtHideAndShowDialog
{
  Q_OBJECT //!OCLINT
public:
  QtPreDickAdvocaTorMainDialog(const int seed, QWidget *parent = 0);
  QtPreDickAdvocaTorMainDialog(const QtPreDickAdvocaTorMainDialog&) = delete;
  QtPreDickAdvocaTorMainDialog& operator=(const QtPreDickAdvocaTorMainDialog&) = delete;
  ~QtPreDickAdvocaTorMainDialog() noexcept;

private:
  Ui::QtPreDickAdvocaTorMainDialog *ui;
  const PreDickAdvocaTorMainDialog m_dialog;
private slots:
  void on_box_left_currentIndexChanged(int index);
  void on_box_right_currentIndexChanged(int index);
  void OnAnyChange();
};


} //~namespace ribi

#endif // QTPREDICKADVOCATORMAINDIALOG_H
