cmake_minimum_required(VERSION 3.16)
project(STLContainersDebug)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libstdc++")
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -gdwarf-4")

set(SOURCE_FILES
        main.cpp
        multiset.cpp
        multimap.cpp
        stack.cpp
        queue.cpp
        unique_ptr.cpp
        map_foo.cpp
        list_set_foo.cpp
        vector_foo.cpp
        array_foo.cpp
)

add_executable(STLContainersDebug ${SOURCE_FILES})