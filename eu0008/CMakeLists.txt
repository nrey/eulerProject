PROJECT( EULER_0008)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0008_HDRS
	eu0008.h
	)

SET( EULER_0008_SRCS
	eu0008.cpp
	main.cpp
	)

ADD_LIBRARY( eu0008_LIB ${EULER_0008_HDRS} ${EULER_0008_SRCS} )

ADD_EXECUTABLE( eu0008 main.cpp  )
TARGET_LINK_LIBRARIES( eu0008 euler eu0008_LIB )
