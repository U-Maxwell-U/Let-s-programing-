# # CMakeのバージョンを設定
# cmake_minimum_required(VERSION 3.22)
# # プロジェクト名と使用する言語を設定
# project(test_cmake CXX)
# # a.outという実行ファイルをmain.cppとhello.cppから作成
# add_executable(a.out main.cpp hello.cpp)



#研究室で使っているCMakeLists
cmake_minimum_required(VERSION 3.22)
project(tes)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
add_executable(tes main.cpp)



find_package(OpenCV REQUIRED)
if(OpenCV_FOUND)
    include_directories(${OpenCV_INCLUDE_DIRS} ${EIGEN3_INCLUDE_DIRS})
    target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
endif(OpenCV_FOUND)