PROJECT( EULER_0039)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0039_HDRS
	eu0039.h
	)

SET( EULER_0039_SRCS
	eu0039.cpp
	main.cpp
	)

ADD_LIBRARY( eu0039_LIB ${EULER_0039_HDRS} ${EULER_0039_SRCS} )

ADD_EXECUTABLE( eu0039 main.cpp  )
TARGET_LINK_LIBRARIES( eu0039 eu0039_LIB euler )
