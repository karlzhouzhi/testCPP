cmake_minimum_required(VERSION 3.5)
project(third_cmake_demo)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(src SRC_LIST)

# add_library: 生成动态库或静态库(第1个参数指定库的名字；第2个参数决定是动态还是静态，如果没有就默认静态；第3个参数指定生成库的源文件)
# set_target_properties: 设置最终生成的库的名称，还有其它功能，如设置库的版本号等等
# LIBRARY_OUTPUT_PATH: 库文件的默认输出路径，这里设置为工程目录下的lib目录
add_library(third_shared SHARED ${SRC_LIST})
add_library(third_static STATIC ${SRC_LIST})
set_target_properties(third_shared PROPERTIES OUTPUT_NAME "third")
set_target_properties(third_static PROPERTIES OUTPUT_NAME "third")
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(include)
# add_executable(third_cmake_demo ${SRC_LIST})

# 该命令是用来向工程添加多个指定头文件的搜索路径，路径之间用空格分隔
# include_directories(add_dir multiply_dir)
# include_directories(include)

# 使用aux_source_directory把当前目录下的源文件存列表存放到变量SRC_LIST里，然后在add_executable里调用SRC_LIST（注意调用变量时的写法）
# aux_source_directory()也存在弊端，它会把指定目录下的所有源文件都加进来，可能会加入一些我们不需要的文件，此时我们可以使用set命令去新建变量来存放需要的源文件
# aux_source_directory(. SRC_LIST)

# set(SRC_LIST
#     ./add.cpp
#     ./multiply.cpp
#     ./main.cpp)

# aux_source_directory(add_dir ADD_SRC_LIST)
# aux_source_directory(multiply_dir MULTIPLY_SRC_LIST)
# add_executable(second_cmake_demo main.cpp ${ADD_SRC_LIST} ${MULTIPLY_SRC_LIST})

# 这个命令可以向当前工程添加存放源文件的子目录
# 这里指定src目录下存放了源文件，当执行cmake时，就会进入src目录下去找src目录下的CMakeLists.txt，所以在src目录下也建立一个CMakeLists.txt
# add_subdirectory(src)