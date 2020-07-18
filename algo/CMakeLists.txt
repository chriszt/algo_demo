cmake_minimum_required(VERSION 3.0.0)
project(algo)

# message(DYN=${DYN})
# message(DEBUG=${DEBUG})

if(DEBUG)
   set(CMAKE_BUILD_TYPE "Debug")
   set(CMAKE_C_FLAGS_DEBUG "${CFLAGS} -Wall -g")
else()
    set(CMAKE_BUILD_TYPE "Release")
    set(CMAKE_C_FLAGS_RELEASE "${CFLAGS} -Wall")
endif()

aux_source_directory(. SRCS)
include_directories(include)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

if(DYN)
    add_library(${PROJECT_NAME} SHARED ${SRCS})
else()
    add_library(${PROJECT_NAME} STATIC ${SRCS})
endif()




