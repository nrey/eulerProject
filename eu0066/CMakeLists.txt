PROJECT( EULER_0066)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0066_HDRS
	eu0066.h
	)

SET( EULER_0066_SRCS
	eu0066.cpp
	main.cpp
	)

ADD_LIBRARY( eu0066_LIB ${EULER_0066_HDRS} ${EULER_0066_SRCS} )

ADD_EXECUTABLE( eu0066 main.cpp  )
TARGET_LINK_LIBRARIES( eu0066 eu0066_LIB euler )
