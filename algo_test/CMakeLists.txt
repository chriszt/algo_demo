cmake_minimum_required(VERSION 3.0.0)
project(algo_test)

# message(DEBUG=${DEBUG})

if(DEBUG)
    set(CMAKE_BUILD_TYPE "Debug")
    set(CMAKE_C_FLAGS_DEBUG "${CFLAGS} -Wall -g")
else()
    set(CMAKE_BUILD_TYPE "Release")
    set(CMAKE_C_FLAGS_RELEASE "${CFLAGS} -Wall")
endif()

aux_source_directory(. SRCS)  # *.c
# set (SRCS algo_test.c)  # *.c
include_directories(../algo/include)  # -I../algo/include
link_directories(../algo/bin)  # -L../algo
link_libraries(algo) # -lalgo
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(${PROJECT_NAME} ${SRCS})
#target_link_libraries(${PROJECT_NAME} algo) # -lalgo
