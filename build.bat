@echo off

if "%1" == "-clean" (
	rmdir /S /Q build-debug
	rmdir /S /Q build-release
)

call build_detail.bat -debug
call build_detail.bat -release

pause


