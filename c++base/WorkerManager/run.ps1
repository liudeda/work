# 转到项目目录，如果必要的话
#  Set-Location $PSScriptRoot


# 执行CMake配置步骤
 &  cmake -S . -B ..\build

# 检查上一步是否成功，可选
if ($LastExitCode -ne 0) {
    Write-Host "CMake configuration failed."
    & rm -r ../build/*
    &  cmake -S . -B ..\build
}

# 使用CMake构建项目
& cmake --build ..\build

# 检查构建是否成功，可选
if ($LastExitCode -ne 0) {
    Write-Host "Build failed."
    return $LastExitCode
}

# 运行生成的可执行文件
& ..\build\WorkerManager\Debug\WorkerManager.exe

# 注意：PowerShell脚本默认不会等待像CMD那样的"pause"命令，
# 如果需要暂停，可以手动添加类似`Read-Host 'Press any key to continue...'`的命令。