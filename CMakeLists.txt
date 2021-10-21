cmake_minimum_required(VERSION 3.16)
project(STLContainersDebug)

set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libstdc++")
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -gdwarf-4")

set(SOURCE_FILES
        main.cpp
        multiset.cpp
        multimap.cpp
        stack.cpp
        queue.cpp
        smart_ptr.cpp
        map.cpp
        list_set.cpp
        vector.cpp
        array.cpp
        others.cpp
        tuple.cpp
)

add_executable(STLContainersDebug ${SOURCE_FILES})