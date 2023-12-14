# ipex_cxx_essential
## Guide:
```cmd
xu@xu-21HW:~/github/ipex_cxx_essential$ mkdir build
xu@xu-21HW:~/github/ipex_cxx_essential$ cd build/
xu@xu-21HW:~/github/ipex_cxx_essential/build$ cmake ..
-- The C compiler identification is GNU 12.3.0
-- The CXX compiler identification is GNU 12.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/xu/github/ipex_cxx_essential/build
xu@xu-21HW:~/github/ipex_cxx_essential/build$ make
/usr/bin/cmake -S/home/xu/github/ipex_cxx_essential -B/home/xu/github/ipex_cxx_essential/build --check-build-system CMakeFiles/Makefile.cmake 0
/usr/bin/cmake -E cmake_progress_start /home/xu/github/ipex_cxx_essential/build/CMakeFiles /home/xu/github/ipex_cxx_essential/build//CMakeFiles/progress.marks
make  -f CMakeFiles/Makefile2 all
make[1]: Entering directory '/home/xu/github/ipex_cxx_essential/build'
make  -f CMakeFiles/ipex_cxx_essential.dir/build.make CMakeFiles/ipex_cxx_essential.dir/depend
make[2]: Entering directory '/home/xu/github/ipex_cxx_essential/build'
cd /home/xu/github/ipex_cxx_essential/build && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /home/xu/github/ipex_cxx_essential /home/xu/github/ipex_cxx_essential /home/xu/github/ipex_cxx_essential/build /home/xu/github/ipex_cxx_essential/build /home/xu/github/ipex_cxx_essential/build/CMakeFiles/ipex_cxx_essential.dir/DependInfo.cmake --color=
make[2]: Leaving directory '/home/xu/github/ipex_cxx_essential/build'
make  -f CMakeFiles/ipex_cxx_essential.dir/build.make CMakeFiles/ipex_cxx_essential.dir/build
make[2]: Entering directory '/home/xu/github/ipex_cxx_essential/build'
[ 50%] Building CXX object CMakeFiles/ipex_cxx_essential.dir/src/main.cpp.o
/usr/bin/c++ -D_GLIBCXX_USE_CXX11_ABI=0   -MD -MT CMakeFiles/ipex_cxx_essential.dir/src/main.cpp.o -MF CMakeFiles/ipex_cxx_essential.dir/src/main.cpp.o.d -o CMakeFiles/ipex_cxx_essential.dir/src/main.cpp.o -c /home/xu/github/ipex_cxx_essential/src/main.cpp
[100%] Linking CXX executable ipex_cxx_essential
/usr/bin/cmake -E cmake_link_script CMakeFiles/ipex_cxx_essential.dir/link.txt --verbose=1
/usr/bin/c++ CMakeFiles/ipex_cxx_essential.dir/src/main.cpp.o -o ipex_cxx_essential
make[2]: Leaving directory '/home/xu/github/ipex_cxx_essential/build'
[100%] Built target ipex_cxx_essential
make[1]: Leaving directory '/home/xu/github/ipex_cxx_essential/build'
/usr/bin/cmake -E cmake_progress_start /home/xu/github/ipex_cxx_essential/build/CMakeFiles 0
xu@xu-21HW:~/github/ipex_cxx_essential/build$ ./ipex_cxx_essential
GNU libc compile-time version: 2.37
GNU libc runtime version:      2.37
check glibc status: failed.
_GLIBCXX_USE_CXX11_ABI: 0
check abi status: passed.
xu@xu-21HW:~/github/ipex_cxx_essential/build$
```