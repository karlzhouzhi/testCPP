aux_source_directory(. SRC_LIST)
include_directories(../include)
add_executable(second_cmake_demo ${SRC_LIST})

# EXECUTABLE_OUT_PATH和PROJECT_SOURCE_DIR是CMake自带的预定义变量
# EXECUTABLE_OUTPUT_PATH ：目标二进制可执行文件的存放位置
# PROJECT_SOURCE_DIR：工程根目录
# 这里set的意思是把存放elf文件的位置设置为工程根目录下的bin目录。（cmake有很多预定义变量，详细的可以网上搜索一下）
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)