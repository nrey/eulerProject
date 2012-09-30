
cmake_minimum_required(VERSION 2.4)

SET( EULER_HDRS
	principal.h
	#infinite_precition.h
	euler.h
)

SET( EULER_SRCS
	#infinite_precition.cpp
	euler.cpp
)

PROJECT( EULER )

set( EXE_DIR ${EULER_BINARY_DIR}/exe CACHE PATH
      "Single Directory for all executables")
set( LIB_DIR ${EULER_BINARY_DIR}/libs CACHE PATH
      "Single Directory for all static Libraries")

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${EXE_DIR} )
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${LIB_DIR} )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${LIB_DIR} )

ADD_LIBRARY( euler ${EULER_HDRS} ${EULER_SRCS} )


OPTION( BUILD_eu0001 "eu0001" ON )
IF( BUILD_eu0001 )
  ADD_SUBDIRECTORY( eu0001 )
ENDIF( BUILD_eu0001 )

OPTION( BUILD_eu0002 "eu0002" ON )                                                                                                                                                                              
IF( BUILD_eu0002 )
  ADD_SUBDIRECTORY( eu0002 )
ENDIF( BUILD_eu0002 )

OPTION( BUILD_eu0003 "eu0003" ON )                                                                                                                                                                              
IF( BUILD_eu0003 )
  ADD_SUBDIRECTORY( eu0003 )
ENDIF( BUILD_eu0003 )

OPTION( BUILD_eu0004 "eu0004" ON )
IF( BUILD_eu0004 )
  ADD_SUBDIRECTORY( eu0004 )
ENDIF( BUILD_eu0004 )
OPTION( BUILD_eu0005 "eu0005" ON )
IF( BUILD_eu0005 )
  ADD_SUBDIRECTORY( eu0005 )
ENDIF( BUILD_eu0005 )
