PROJECT( EULER_0096)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0096_HDRS
	eu0096.h
	)

SET( EULER_0096_SRCS
	eu0096.cpp
	main.cpp
	)

ADD_LIBRARY( eu0096_LIB ${EULER_0096_HDRS} ${EULER_0096_SRCS} )

ADD_EXECUTABLE( eu0096 main.cpp  )
TARGET_LINK_LIBRARIES( eu0096 eu0096_LIB euler )
