#include <boost/test/unit_test.hpp>
#include "predickadvocatormaindialog.h"

BOOST_AUTO_TEST_CASE(PreDickAdvocaTorMainDialog_test)
{
  ribi::PreDickAdvocaTorMainDialog d(12);
  BOOST_CHECK(!d.GetTeamNames().empty());
  BOOST_CHECK(!d.GetTeamScores().empty());
}
