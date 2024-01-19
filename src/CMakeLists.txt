set(SOCI_ISSUE_APP_TARGET "soci_issue_app" PARENT_SCOPE)

set(SOCI_ISSUE_SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")

file(GLOB_RECURSE sources LIST_DIRECTORIES false CONFIGURE_DEPENDS "${SOCI_ISSUE_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE includes LIST_DIRECTORIES false CONFIGURE_DEPENDS "${SOCI_ISSUE_SOURCE_DIR}/*.hpp")

add_executable("soci_issue_app" main.cpp ${includes} ${sources})