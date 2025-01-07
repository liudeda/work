通过本文你将学习到，在esp32中怎么进行单元测试。

你写了一个函数，你想测试，单独运行它，你该怎么操作？

本例程怎么编译运行？



正常程序编译与执行

在tunit_test目录下执行编译后下载

 C:\work\esp32\sys\unit_test> idf.py.exe build

C:\work\esp32\sys\unit_test> idf.py.exe -p COM5 flash  monitor

收到log

5 3 7 9 11 13 15 17 19 21

Mean

测试程序编译与执行

在test目录下C:\work\esp32\sys\unit_test\test执行编译后下载
    

PS C:\work\esp32\sys\unit_test\test>idf.py.exe build
PS C:\work\esp32\sys\unit_test\test> idf.py.exe -p COM5  flash  monitor


 \#### Starting interactive test menu #####



Press ENTER to see the list of tests.



Here's the test menu, pick your combo:
(1)     "Mean of an empty array is zero" [mean]
(2)     "Mean of a test vector" [mean]
(3)     "Another test case which fails" [mean]

Enter test for running.
Running Mean of an empty array is zero...
C:/work/esp32/sys/unit_test/components/testable/test/test_mean.c:16:Mean of an empty array is zero:PASS
Test ran in 13ms

-----------------------
1 Tests 0 Failures 0 Ignored
OK
Enter next test, or 'enter' to see menu



```
C:\WORK\ESP32\SYS\UNIT_TEST
│  CMakeLists.txt
│  pytest_unittest.py
│  README.md
│  sdkconfig
│  sdkconfig.old
├─components                  //组件目录
│  └─testable				  //求平均数的组件				
│      │  CMakeLists.txt	 
│      │  mean.c
│      │
│      ├─include
│      │      testable.h
│      │
│      └─test				//求平均数组件的测试组件
│              CMakeLists.txt
│              test_mean.c
│
├─main                     //主程序，会用到求平均数据的组件
│      CMakeLists.txt           
│      example_unit_test_main.c
│
└─test					//程序，独立与主程序的程序。				
    │  CMakeLists.txt
    │  sdkconfig
    │  sdkconfig.defaults
    │  sdkconfig.old
    │
    └─main
            CMakeLists.txt
            example_unit_test_test.c
```

1. 写了一个求平均数的组件testable
2. 给testable给写了一个测试组件testable/test
3. 在main目录下调用testable组件计算平均数
4. 在unit_test\test目录下的example_unit_test_main.文件中调用`unity_run_menu();` 这段代码的功能是调用 `unity_run_menu` 函数。该函数通常用于启动 Unity 引擎的菜单系统，执行一系列与用户界面相关的操作，例如显示菜单、处理用户输入等。
5. ![image-20241126160636485](C:\work\esp32\sys\unit_test\images\image-20241126160636485.png)



C:\work\esp32\sys\unit_test\test\CMakeLists.txt

```cmake
# This is the project CMakeLists.txt file for the test subproject
cmake_minimum_required(VERSION 3.16)

# Include the components directory of the main application:
#
set(EXTRA_COMPONENT_DIRS "../components")

# Set the components to include the tests for.
# This can be overriden from CMake cache:
# - when invoking CMake directly: cmake -D TEST_COMPONENTS="xxxxx" ..
# - when using idf.py: idf.py -T xxxxx build
#
set(TEST_COMPONENTS "testable" CACHE STRING "List of components to test")

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(unit_test_test)

```

set(TEST_COMPONENTS "testable" CACHE STRING "List of components to test")

设置TEST_COMPONENTS等于testable，unity会执行testable组件下的test目录下的内容.

test依赖了cmock组件cmock依赖了 unity。unity组件会索引TEST_COMPONENTS变量，

