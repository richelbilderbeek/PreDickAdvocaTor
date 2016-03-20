#include <boost/test/unit_test.hpp>
#include "predickadvocatormenudialog.h"

BOOST_AUTO_TEST_CASE(PreDickAdvocaTorMenuDialog_test)
{
  ribi::PreDickAdvocaTorMenuDialog d;
  BOOST_CHECK(!d.GetVersion().empty()); //Stub
}
