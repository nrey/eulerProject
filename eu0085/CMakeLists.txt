PROJECT( EULER_0085)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0085_HDRS
	eu0085.h
	)

SET( EULER_0085_SRCS
	eu0085.cpp
	main.cpp
	)

ADD_LIBRARY( eu0085_LIB ${EULER_0085_HDRS} ${EULER_0085_SRCS} )

ADD_EXECUTABLE( eu0085 main.cpp  )
TARGET_LINK_LIBRARIES( eu0085 eu0085_LIB euler )
