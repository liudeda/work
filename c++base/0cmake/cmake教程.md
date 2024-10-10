 在命令行中执行 CMake 通常涉及两个主要步骤：配置和生成构建系统文件，然后使用这些构建系统文件来构建项目。以下是执行 CMake 的基本命令：

1. **生成构建系统文件**（配置阶段）

   在项目的根目录中（其中包含顶层的 `CMakeLists.txt` 文件），运行以下命令以生成构建系统文件：

   ```sh
   cmake -S . -B <build-directory>
   ```

   这里 `-S` 参数指定了源代码目录，`.` 表示当前目录。`-B` 参数指定了构建目录，`<build-directory>` 是你想要生成构建文件的目录。如果构建目录不存在，CMake 将会创建它。

   例如，要在名为 `build` 的子目录中生成构建系统文件，可以这样做：

   ```sh
   cmake -S . -B build
   ```

2. **构建项目**（构建阶段）

   一旦生成了构建系统文件，就可以使用 CMake 命令行工具或对应的构建系统（如 Make、Ninja、Visual Studio 等）来构建项目。如果使用 CMake 的命令行构建工具，可以运行：

   ```sh
   cmake --build <build-directory>
   ```

   这里 `<build-directory>` 是在配置阶段创建的构建目录。例如：

   ```sh
   cmake --build build
   ```

   这将在 `build` 目录中启动实际的编译过程。

   实例：

```
C:\work\c++base\0cmake>再此目录下执行以下命令
cmake -S . -B ..\build\
cmake --build ..\build\
..\build\Debug\MyProject.exe
log：
PS C:\work\c++base\0cmake> ..\build\Debug\MyProject.exe
Hello World!
name: zhangsan
PS C:\work\c++base\0cmake> 

```



**大德：** cmake 的基础指令

**Ai.小助手：** CMake 是一个跨平台的自动化构建系统，它使用 CMakeLists.txt 文件来定义构建过程。以下是一些基础的 CMake 指令，用于定义常见的构建任务：

1. `cmake_minimum_required(VERSION <min_version>)`
   指定项目所需的最低 CMake 版本。

2. `project(<project_name> [VERSION <version>] [LANGUAGES <languages>])`
   定义项目名称和可选的版本号以及使用的编程语言。

3. `add_executable(<name> [source1] [source2 ...])`
   创建一个可执行文件目标，名称为 `<name>`，源文件列表为后续参数。

4. `add_library(<name> [STATIC|SHARED|MODULE] [source1] [source2 ...])`
   创建一个库文件目标，可以是静态库（STATIC）、共享库（SHARED）或模块库（MODULE）。

5. `target_link_libraries(<target> [PRIVATE|PUBLIC|INTERFACE] <library>...)`
   指定 `<target>` 需要链接的库文件。

6. `find_package(<package> [version] [REQUIRED])`
   查找并加载外部项目或库的设置。

7. `include_directories([AFTER|BEFORE] [SYSTEM] <dir>...)`
   添加包含目录到编译器的头文件搜索路径。

8. `target_include_directories(<target> [SYSTEM] [AFTER|BEFORE] [PRIVATE|PUBLIC|INTERFACE] <dir>...)`
   为特定目标添加包含目录。

9. `set(<variable> <value>...)`
   设置一个变量及其值。

10. `option(<option_name> "description" [initial_value])`
    提供一个选项给用户，通常用于可选功能的开关。

11. `add_subdirectory(<source_dir> [binary_dir] [EXCLUDE_FROM_ALL])`
    添加子目录到构建，该子目录下应有它自己的 CMakeLists.txt 文件。

12. `install(TARGETS targets... [EXPORT <export_name>] [DESTINATION <dir>]...)`
    指定安装规则，用于将目标文件、库或可执行文件安装到适当位置。

13. `configure_file(<input> <output> [COPYONLY] [ESCAPE_QUOTES] [@ONLY])`
    复制一个文件到另一个位置，并可选地替换文件中的变量值。

14. `add_custom_target(<name> [ALL] [command1] [ARGS] [arg1] [arg2 ...] [DEPENDS] [dependencies])`
    创建一个自定义目标。

15. `add_custom_command(TARGET <target> PRE_BUILD|PRE_LINK|POST_BUILD COMMAND <command> [ARGS] [arg1] [arg2 ...] [WORKING_DIRECTORY <dir>] [COMMENT <comment>] [VERBATIM])`
    为特定目标添加自定义构建规则或步骤。

这些指令是 CMake 的基础，可以用来定义和控制编译和构建过程。实际项目中会根据具体需求使用更多高级功能和指令。

**大德：** 怎么执行，有哪些命令

2. 

3. **安装项目**（可选）

   如果在 `CMakeLists.txt` 中定义了安装规则，可以使用以下命令来执行安装：

   ```sh
   cmake --install <build-directory>
   ```

   这会将目标文件（如可执行文件和库）安装到指定的位置。

4. **测试项目**（可选）

   如果项目使用了 CTest（CMake 的测试驱动程序）定义了测试，可以使用以下命令来运行测试：

   ```sh
   ctest --test-dir <build-directory>
   ```

   这将在构建目录中运行所有定义的测试。

这些是使用 CMake 进行项目构建的基本命令。CMake 还支持许多其他命令和选项，可以用来定制构建过程，例如指定构建类型（如 Debug 或 Release），设置环境变量，或者传递自定义定义到 CMake 脚本等。

**大德：** add_subdirectory(../../lib_v5 a) a代表什么，有什么用

**Ai.小助手：** 在 CMake 中，`add_subdirectory` 命令用于向当前项目添加一个子目录，该子目录应该包含它自己的 `CMakeLists.txt` 文件。这样可以组织多目录或多项目的构建。

`add_subdirectory` 命令的基本语法是：

```cmake
add_subdirectory(source_dir [binary_dir] [EXCLUDE_FROM_ALL])
```

- `source_dir` 参数指定了子目录的源代码路径，这个路径是相对于当前 `CMakeLists.txt` 文件的路径。
- `binary_dir` 参数是可选的，它指定了子项目的二进制目录，即子项目构建产物的存放位置。如果不指定这个参数，CMake 会默认使用与 `source_dir` 相对应的构建目录。

在你提供的例子中：

```cmake
add_subdirectory(../../lib_v5 a)
```

`../../lib_v5` 是 `source_dir`，表示要添加的子目录位于当前 `CMakeLists.txt` 文件的父目录的父目录下的 `lib_v5` 文件夹中。

`a` 是 `binary_dir`，表示子目录的构建产物应该被放置在当前构建目录下的 `a` 文件夹中。如果 `a` 文件夹不存在，CMake 会在配置时自动创建它。

使用 `binary_dir` 参数的好处是，它允许你将构建产物与源代码分离，这样可以保持源代码目录的整洁，也使得不同构建类型（如 Debug 和 Release）的构建产物分开存放变得容易。此外，它还方便了在同一源代码基础上进行多种构建配置的管理。

