#include "predickadvocatormenudialog.h"

#include <cassert>
#include <iostream>

int ribi::PreDickAdvocaTorMenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  const int argc = static_cast<int>(argv.size());
  if (argc == 1)
  {
    std::cout << GetHelp() << '\n';
    return 0;
  }
  assert(!"TODO");
  return 0;
}

ribi::About ribi::PreDickAdvocaTorMenuDialog::GetAbout() const noexcept
{
  About a(
    "Richel Bilderbeek",
    "PreDickAdvocaTor",
    "tool to correctly predict WC scores", //if the lucky number is correct and the truth becomes reality
    "the November 20th of 2015",
    "20010-2015",
    "http://www.richelbilderbeek.nl/ToolPreDickAdvocaTor.htm",
    GetVersion(),
    GetVersionHistory()
  );
  return a;
}

ribi::Help ribi::PreDickAdvocaTorMenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    this->GetAbout().GetFileTitle(),
    this->GetAbout().GetFileDescription(),
    {

    },
    {

    }
  );
}

std::string ribi::PreDickAdvocaTorMenuDialog::GetVersion() const noexcept
{
  return "3.0";
}

std::vector<std::string> ribi::PreDickAdvocaTorMenuDialog::GetVersionHistory() const noexcept
{
  return {
    "2010-xx-xx: version 1.0: initial version",
    "2013-12-03: version 2.0: improved user experience, prepare for next WC",
    "2013-12-27: version 2.1: put 2014 WC teams in",
    "2015-11-20: version 3.0: moved to own GitHub"
  };
}
