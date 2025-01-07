@ECHO OFF

:: Build
echo Starting build...
cmd /c "%GDK%\bin\make -f %GDK%\makefile.gen"
echo Build completed.

pause