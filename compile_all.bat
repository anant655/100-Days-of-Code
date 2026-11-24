@echo off
setlocal
where gcc >nul 2>nul
if errorlevel 1 (
    echo GCC was not found. Install MinGW-w64 and add its bin folder to PATH.
    pause
    exit /b 1
)
set "FAILED=0"
for /r %%F in (Q*.c) do (
    echo Compiling "%%F"
    gcc "%%F" -o "%%~dpnF.exe"
    if errorlevel 1 (
        echo FAILED: %%F
        set "FAILED=1"
    )
)
if "%FAILED%"=="0" (
    echo All C files compiled successfully.
) else (
    echo Some files could not be compiled. Check the messages above.
)
pause
