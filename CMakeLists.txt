cmake_minimum_required(VERSION 3.25)
project(Tommaso_Puzzo_lab_programmazione)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tommaso_Puzzo_lab_programmazione main.cpp SystemUser.h SystemUser.cpp ChatMessage.cpp ChatMessage.h Chat.cpp Chat.h ChatLog.cpp ChatLog.h Observer.cpp Observer.h Subject.cpp Subject.h)

add_subdirectory(tests)

#set(SOURCE_FILES Chat.cpp Chat.h ChatLog.cpp ChatLog.h ChatMessage.cpp ChatMessage.h SystemUser.cpp SystemUser.h)

#add_library(core ${SOURCE_FILES})
#target_link_libraries(Tommaso_Puzzo_lab_programmazione tests/runAllTests.cpp core)

