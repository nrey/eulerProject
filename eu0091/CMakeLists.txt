PROJECT( EULER_0091)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0091_HDRS
	eu0091.h
	)

SET( EULER_0091_SRCS
	eu0091.cpp
	main.cpp
	)

ADD_LIBRARY( eu0091_LIB ${EULER_0091_HDRS} ${EULER_0091_SRCS} )

ADD_EXECUTABLE( eu0091 main.cpp  )
TARGET_LINK_LIBRARIES( eu0091 eu0091_LIB euler )
