cmake_minimum_required(VERSION 3.20)
project(wsproject1)
set(CMAKE_CXX_STANDARD 20)

include_directories(~/development/axp/nextgen/3rdparty/include ~/development/axp/nextgen/3rdparty/include/uSockets/ /usr/local/include)
link_directories(~/development/axp/nextgen/3rdparty/lib)
link_directories(/usr/local/ssl)

add_executable(webservice_sample1 pradeepkws1.cpp)
target_link_libraries(webservice_sample1 uSockets pthread z ssl)
