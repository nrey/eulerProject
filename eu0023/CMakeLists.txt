PROJECT( EULER_0023)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0023_HDRS
	eu0023.h
	)

SET( EULER_0023_SRCS
	eu0023.cpp
	main.cpp
	)

ADD_LIBRARY( eu0023_LIB ${EULER_0023_HDRS} ${EULER_0023_SRCS} )

ADD_EXECUTABLE( eu0023 main.cpp  )
TARGET_LINK_LIBRARIES( eu0023 eu0023_LIB euler )
