#!/bin/bash
cd ..
git clone https://github.com/richelbilderbeek/RibiClasses
git clone https://github.com/richelbilderbeek/RibiLibraries
cd PreDickAdvocaTor
qmake PreDickAdvocaTorConsole.pro
make
qmake PreDickAdvocaTorDesktop.pro
make
./clear.sh
qmake PreDickAdvocaTorConsoleTest.pro
make
