@echo off

@REM Path to SGDK
set GDK="H:\sega_mega_drive\programs\sgdk200"
:: Clean
echo Starting clean...
cmd /c "%GDK%\bin\make clean -f %GDK%\makefile.gen"
echo Clean completed.

pause