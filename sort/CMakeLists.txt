file(GLOB SRC ./*.cpp)

add_library(${SORT_LIB_NAME} STATIC ${SRC})

target_include_directories(${SORT_LIB_NAME} PUBLIC ${HEAD_PATH})

set_target_properties(${SORT_LIB_NAME} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${LIB_PATH})
