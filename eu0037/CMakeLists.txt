PROJECT( EULER_0037)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0037_HDRS
	eu0037.h
	)

SET( EULER_0037_SRCS
	eu0037.cpp
	main.cpp
	)

ADD_LIBRARY( eu0037_LIB ${EULER_0037_HDRS} ${EULER_0037_SRCS} )

ADD_EXECUTABLE( eu0037 main.cpp  )
TARGET_LINK_LIBRARIES( eu0037 eu0037_LIB euler )
