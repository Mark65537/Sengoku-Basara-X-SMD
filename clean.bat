@echo off

:: Clean
echo Starting clean...
cmd /c "%GDK%\bin\make clean -f %GDK%\makefile.gen"
echo Clean completed.

pause