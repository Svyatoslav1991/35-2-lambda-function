set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add source to this project's executable.
add_executable (35-2-lambda-function "main.cpp" "${CMAKE_SOURCE_DIR}/include/functions.h")

target_include_directories(35-2-lambda-function PUBLIC ${CMAKE_SOURCE_DIR}/include)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 35-2-lambda-function PROPERTY CXX_STANDARD 20)
endif()