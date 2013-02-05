
cmake_minimum_required(VERSION 2.4)
PROJECT( LINKTEST )

SET( LINKTEST_HDRS
  test_in.h
  test.h
)

SET( LINKTEST_SRCS
    test_in.cpp
  test.cpp
)


set( EXE_DIR ${LINKTEST_BINARY_DIR}/exe CACHE PATH
      "Single Directory for all executables")
set( LIB_DIR ${LINKTEST_BINARY_DIR}/libs CACHE PATH
      "Single Directory for all static Libraries")

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${EXE_DIR} )
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${LIB_DIR} )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${LIB_DIR} )

ADD_LIBRARY( linktest ${LINKTEST_HDRS} ${LINKTEST_SRCS} )

OPTION( BUILD_ALL "BUILD_ALL_PROJECTS" OFF )

OPTION( BUILD_TEST_1 "TEST_1" OFF )
IF( BUILD_TEST_1 OR BUILD_ALL )
  ADD_SUBDIRECTORY( test_1 )
ENDIF()

OPTION( BUILD_TEST_2 "TEST_2" OFF )                                                                      
IF( BUILD_TEST_2 OR BUILD_ALL )
  ADD_SUBDIRECTORY( test_2 )
ENDIF()
