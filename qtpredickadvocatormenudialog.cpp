#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include "qtpredickadvocatormenudialog.h"

#include "qtaboutdialog.h"
#include "predickadvocatormenudialog.h"
#include "qtpredickadvocatormaindialog.h"
#include "testtimer.h"
#include "ui_qtpredickadvocatormenudialog.h"
#include "trace.h"
#pragma GCC diagnostic pop

ribi::QtPreDickAdvocaTorMenuDialog::QtPreDickAdvocaTorMenuDialog(QWidget *parent) :
    QtHideAndShowDialog(parent),
    ui(new Ui::QtPreDickAdvocaTorMenuDialog)
{
  ui->setupUi(this);
}

ribi::QtPreDickAdvocaTorMenuDialog::~QtPreDickAdvocaTorMenuDialog() noexcept
{
  delete ui;
}

void ribi::QtPreDickAdvocaTorMenuDialog::on_button_start_clicked()
{
  const int seed = ui->box_number->value();
  QtPreDickAdvocaTorMainDialog d(seed);
  d.setStyleSheet(this->styleSheet());
  this->ShowChild(&d);
}

void ribi::QtPreDickAdvocaTorMenuDialog::on_button_about_clicked()
{
  QtAboutDialog d(PreDickAdvocaTorMenuDialog().GetAbout());
  d.setStyleSheet(
    "QDialog {"
    "background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1, stop: 0  #ff6500, stop: 1 #ffc500);"
    "}"
  );
  this->ShowChild(&d);
}

void ribi::QtPreDickAdvocaTorMenuDialog::on_button_quit_clicked()
{
  this->close();
}
