cmake_minimum_required (VERSION 3.24 FATAL_ERROR)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test/bin)

find_package(Threads REQUIRED)

set(TESTS
  term/ansi
  term/unicode
  )

set(LIBRARIES
  term
  stream::stream
  GTest::gtest
  Threads::Threads
  )

configure_tests("core" "${LIBRARIES}" ${TESTS})
