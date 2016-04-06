#!/bin/bash
function clean {
  rm *.o
  rm *.gcov
  rm Makefile
  rm Makefile.Debug
  rm Makefile.Release
  rm *.pro.user
  rm -rf debug
  rm -rf release
  rm moc_*
  rm ui_*
  rm qrc_*
}

clean
cd src; clean; cd ..
cd cpp; clean; cd ..
rm -rf build-distancer_exe-Desktop-Debug
rm -rf build-distancer_exe-Desktop-Release
rm -rf build-distancer_test-Desktop-Debug
rm -rf build-distancer_test-Desktop-Release