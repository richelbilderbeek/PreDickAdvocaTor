#include <QApplication>
#include "qtpredickadvocatormenudialog.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ribi::QtPreDickAdvocaTorMenuDialog w;
  w.show();
  return a.exec();
}
