@echo off
SET PATH=;C:/Users/Duke/OpenModelica/bin/;%PATH%;
SET ERRORLEVEL=
CALL "%CD%/BuildingCase3.exe" %*
SET RESULT=%ERRORLEVEL%

EXIT /b %RESULT%
