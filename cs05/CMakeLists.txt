cmake_minimum_required(VERSION 2.8.9)
project (TestLibrary)

#For the shared library:
set ( PROJECT_LINK_LIBS libtestStudent.dylib )
link_directories( ~/Desktop/projects/cplus/cmake/cs03/build )

#For the static library:
#set ( PROJECT_LINK_LIBS libtestStudent.a )
#link_directories( ~/exploringBB/extras/cmake/studentlib_static/build )

include_directories(~/Desktop/projects/cplus/cmake/cs03/include)

add_executable(libtest libtest.cpp)
target_link_libraries(libtest ${PROJECT_LINK_LIBS} )

