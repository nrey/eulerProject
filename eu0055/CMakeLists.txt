PROJECT( EULER_0055)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0055_HDRS
	eu0055.h
	)

SET( EULER_0055_SRCS
	eu0055.cpp
	main.cpp
	)

ADD_LIBRARY( eu0055_LIB ${EULER_0055_HDRS} ${EULER_0055_SRCS} )

ADD_EXECUTABLE( eu0055 main.cpp  )
TARGET_LINK_LIBRARIES( eu0055 eu0055_LIB euler )
