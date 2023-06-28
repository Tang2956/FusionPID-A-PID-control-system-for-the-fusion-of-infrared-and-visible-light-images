@echo off
set COMPILER=D:\MinGW\mingw64\bin\gcc
                set CXXCOMPILER=D:\MinGW\mingw64\bin\g++
                set COMPFLAGS=-c -fexceptions -fno-omit-frame-pointer -m64 -DMATLAB_MEX_FILE  -DMATLAB_MEX_FILE 
                set CXXCOMPFLAGS=-c -fexceptions -fno-omit-frame-pointer -std=c++11 -m64 -DMATLAB_MEX_FILE  -DMATLAB_MEX_FILE 
                set OPTIMFLAGS=-O2 -fwrapv -DNDEBUG
                set DEBUGFLAGS=-g
                set LINKER=D:\MinGW\mingw64\bin\gcc
                set CXXLINKER=D:\MinGW\mingw64\bin\g++
                set LINKFLAGS=-m64 -Wl,--no-undefined -shared -static -L"D:\MATLAB2020a\extern\lib\win64\mingw64" -llibmx -llibmex -llibmat -lm -llibmwlapack -llibmwblas -Wl,"D:\MATLAB2020a/extern/lib/win64/mingw64/mexFunction.def"
                set LINKDEBUGFLAGS=-g
                set NAME_OUTPUT=-o "%OUTDIR%%MEX_NAME%%MEX_EXT%"
set PATH=D:\MinGW\mingw64\bin;D:\MATLAB2020a\extern\include\win64;D:\MATLAB2020a\extern\include;D:\MATLAB2020a\simulink\include;D:\MATLAB2020a\lib\win64;%MATLAB_BIN%;%PATH%
set INCLUDE=D:\MinGW\mingw64\include;;%INCLUDE%
set LIB=D:\MinGW\mingw64\lib;;%LIB%
set LIBPATH=D:\MATLAB2020a\extern\lib\win64;%LIBPATH%

gmake SHELL="cmd" -f untitled_restored_from_autosave_sfun.gmk
