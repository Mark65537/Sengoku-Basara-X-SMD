@echo off

:: Clean
echo Starting clean...
cmd /c "%GDK%\bin\make clean -f %GDK%\makefile.gen"
echo Clean completed.
echo

:: Build
echo Starting build...
cmd /c "%GDK%\bin\make -f %GDK%\makefile.gen"
echo Build completed.

pause