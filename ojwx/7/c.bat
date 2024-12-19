@echo off
setlocal enabledelayedexpansion
REM 指定要创建的文件数量
set /p count=请输入要创建的文件数量：

REM 循环创建文件
for /L %%i in (1,1,!count!) do (
    echo. > %%i.c
)

echo 文件创建完成。
pause
