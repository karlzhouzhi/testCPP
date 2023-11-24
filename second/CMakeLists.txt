cmake_minimum_required(VERSION 3.5)
project(second_cmake_demo)

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
add_subdirectory(src)