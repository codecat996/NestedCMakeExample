cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(MyProject)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)

# 定义变量
# 库的存储路径
set(LIB_PATH ${PROJECT_SOURCE_DIR}/lib)
# 头文件路径
set(HEAD_PATH ${PROJECT_SOURCE_DIR}/include)
# 可执行文件的存储目录
set(EXEC_PATH ${PROJECT_SOURCE_DIR}/bin)

# 库文件的名字
set(CALC_LIB_NAME calc_test1)
set(SORT_LIB_NAME sort_text2)

# 可执行文件的名字
set(CALC_EXE_NAME calc)
set(SORT_EXE_NAME sort)

# 添加子目录
add_subdirectory(calc)
add_subdirectory(sort)
add_subdirectory(test1)
add_subdirectory(test2)
