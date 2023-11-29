cmake_minimum_required(VERSION 3.16)
project(four)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(SRC_LIST_PATH ${PROJECT_SOURCE_DIR}/src/main.cpp)
# aux_source_directory(src SRC_LIST)

include_directories(${PROJECT_SOURCE_DIR}/test/inc)

# find_library: 在指定目录下查找指定库，并把库的绝对路径存放到变量里，其第一个参数是变量名称，第二个参数是库名称，第三个参数是HINTS，第4个参数是路径，其它用法可以参考cmake文档
# 使用find_library的好处是在执行cmake ..时就会去查找库是否存在，这样可以提前发现错误，不用等到链接时。
# find_library(TEST_LIB third HINTS ${PROJECT_SOURCE_DIR}/test/lib)
find_library(TEST_LIB2  libthird.dylib HINTS ${PROJECT_SOURCE_DIR}/test/lib)

# 有时编译程序时想添加一些编译选项，如-Wall，-std=c++11等，就可以使用add_compile_options来进行操作
add_compile_options(-std=c++11 -Wall -g)

add_executable(four ${SRC_LIST_PATH})

# target_link_libraries: 把目标文件与库文件进行链接
target_link_libraries(four ${TEST_LIB2})