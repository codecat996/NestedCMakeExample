file(GLOB SRC ./*.cpp)

add_library(${CALC_LIB_NAME} STATIC ${SRC})

target_include_directories(${CALC_LIB_NAME} PUBLIC ${HEAD_PATH})

set_target_properties(${CALC_LIB_NAME} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${LIB_PATH})
