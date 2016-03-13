#!/bin/bash
cd ..
pwd
ls
git clone https://github.com/richelbilderbeek/RibiLibraries
cd PreDickAdvocaTor
ls
pwd
qmake PreDickAdvocaTorConsole.pro
make
qmake PreDickAdvocaTorConsole.pro
make
