PROJECT( EULER_0052)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0052_HDRS
	eu0052.h
	)

SET( EULER_0052_SRCS
	eu0052.cpp
	main.cpp
	)

ADD_LIBRARY( eu0052_LIB ${EULER_0052_HDRS} ${EULER_0052_SRCS} )

ADD_EXECUTABLE( eu0052 main.cpp  )
TARGET_LINK_LIBRARIES( eu0052 eu0052_LIB euler )
