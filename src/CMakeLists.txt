set(CMAKE_AUTOUIC_SEARCH_PATHS ../forms)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(ImageEvolution
                  ../forms/mainwindow.ui ImageEvolutionApp.cc ImageEvolutionController.cc Image.cc ImageEvolutionMainWindow.cc)


target_link_libraries(ImageEvolution PUBLIC
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)
target_link_libraries(ImageEvolution PUBLIC CImg)

message(STATUS "Looking for X11...")
find_package(X11 REQUIRED)
include_directories(${X11_INCLUDE_DIR})
target_link_libraries(ImageEvolution PUBLIC ${X11_LIBRARIES})