# 明确列出源文件更安全可控（推荐替代 GLOB）
# set(SRC
#     calc.cpp
# )
file(GLOB SRC ./*.cpp)

# 添加可执行文件
add_executable(${SORT_EXE_NAME} ${SRC})

# 链接 calc 库（必须在 add_executable 之后）
target_link_libraries(${SORT_EXE_NAME} PRIVATE ${SORT_LIB_NAME})

# 设置 include 路径（仅影响当前 target）
target_include_directories(${SORT_EXE_NAME} PRIVATE ${HEAD_PATH})

# 设置可执行文件输出路径
set_target_properties(${SORT_EXE_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${EXEC_PATH})

