# # CMakeのバージョンを設定
# cmake_minimum_required(VERSION 3.22)
# # プロジェクト名と使用する言語を設定
# project(test_cmake CXX)
# # a.outという実行ファイルをmain.cppとhello.cppから作成
# add_executable(a.out main.cpp hello.cpp)
# 研究室で使っているCMakeLists
cmake_minimum_required(VERSION 3.22)
project(src)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)


file( GLOB APP_SOURCES src/*.cpp )
foreach( testsourcefile ${APP_SOURCES} )
    # I used a simple string replace, to cut off .cpp.
    get_filename_component(testname ${testsourcefile} NAME)
    string( REPLACE ".cpp" "" testname ${testname} )
    add_executable( ${testname} ${testsourcefile} )
    # Make sure YourLib is linked to each app
    #target_link_libraries( ${testname} YourLib )
endforeach( testsourcefile ${APP_SOURCES} )




# find_package(OpenCV REQUIRED)
# if(OpenCV_FOUND)
#     include_directories(${OpenCV_INCLUDE_DIRS} ${EIGEN3_INCLUDE_DIRS})
#     target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
# endif(OpenCV_FOUND)
