@echo off

set debug_mode="-debug"
set release_mode="-release"

set select_version=Debug
set select_version_suffix=debug
if "%1" == %release_mode% (
	set "select_version=Release"
	set "select_version_suffix=release"
)
if not exist "build-%select_version_suffix%" (mkdir "build-%select_version_suffix%")

:: set select_version_suffix=%select_version%
:: :toLower select_version_suffix
:: for %%i in ("%select_version%") do set "select_version_suffix=%%~sii"

cd "build-%select_version_suffix%"

cmake .. -DSELECT_VERSION="%select_version%"

cmake --build . --config "%select_version%"
cmake --install . --config "%select_version%" --prefix "../app-install/%select_version%"

cd ..

