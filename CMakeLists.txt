project (StringInFiles)

set(CMAKE_CXX_STANDARD 17)

include_directories ("${PROJECT_SOURCE_DIR}/include")

add_executable(StringInFiles StringInFiles.cpp ThreadUtils.cpp Thread.cpp)