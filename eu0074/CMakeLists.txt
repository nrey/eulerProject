PROJECT( EULER_0074)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0074_HDRS
	eu0074.h
	)

SET( EULER_0074_SRCS
	eu0074.cpp
	main.cpp
	)

ADD_LIBRARY( eu0074_LIB ${EULER_0074_HDRS} ${EULER_0074_SRCS} )

ADD_EXECUTABLE( eu0074 main.cpp  )
TARGET_LINK_LIBRARIES( eu0074 eu0074_LIB euler )
