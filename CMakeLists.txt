cmake_minimum_required(VERSION 3.28.1)
project(soci-issue
    LANGUAGES CXX
    DESCRIPTION "SOCI Issue"
)
set(CMAKE_CXX_STANDARD 20)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
include("config_submods")

set(SOCI_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/thirdparty/soci)
set(POSTGRESQL_INCLUDE_DIR "/usr/include/postgresql")

add_subdirectory("thirdparty/soci")
add_subdirectory("src")

configure_submods("${SOCI_ISSUE_APP_TARGET}")

