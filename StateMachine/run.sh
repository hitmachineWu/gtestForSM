mkdir build



cd build
rm -rf * .*
cmake ..
make -j
./aeb_ut --gtest_output=xml:report.xml 
