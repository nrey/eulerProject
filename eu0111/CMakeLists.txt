PROJECT( EULER_0111)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0111_HDRS
	eu0111.h
	)

SET( EULER_0111_SRCS
	eu0111.cpp
	main.cpp
	)

ADD_LIBRARY( eu0111_LIB ${EULER_0111_HDRS} ${EULER_0111_SRCS} )

ADD_EXECUTABLE( eu0111 main.cpp  )
TARGET_LINK_LIBRARIES( eu0111 eu0111_LIB euler )
