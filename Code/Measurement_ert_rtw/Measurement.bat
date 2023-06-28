
set MATLAB=E:\Matlab_2021awin00\MATLAB

cd .

if "%1"=="" ("E:\Matlab_2021awin00\MATLAB\bin\win64\gmake"  -f Measurement.mk all) else ("E:\Matlab_2021awin00\MATLAB\bin\win64\gmake"  -f Measurement.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1