PROJECT( EULER_0012)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0012_HDRS
	eu0012.h
	)

SET( EULER_0012_SRCS
	eu0012.cpp
	main.cpp
	)

ADD_LIBRARY( eu0012_LIB ${EULER_0012_HDRS} ${EULER_0012_SRCS} )

ADD_EXECUTABLE( eu0012 main.cpp  )
TARGET_LINK_LIBRARIES( eu0012 euler eu0012_LIB )
