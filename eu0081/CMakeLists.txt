PROJECT( EULER_0081)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0081_HDRS
	eu0081.h
	)

SET( EULER_0081_SRCS
	eu0081.cpp
	main.cpp
	)

ADD_LIBRARY( eu0081_LIB ${EULER_0081_HDRS} ${EULER_0081_SRCS} )

ADD_EXECUTABLE( eu0081 main.cpp  )
TARGET_LINK_LIBRARIES( eu0081 eu0081_LIB euler )
