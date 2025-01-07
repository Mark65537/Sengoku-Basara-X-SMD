@ECHO OFF

@REM Path to SGDK
set GDK="H:\sega_mega_drive\programs\sgdk200"
:: Build
echo Starting build...
cmd /c "%GDK%\bin\make -f %GDK%\makefile.gen"
echo Build completed.

pause