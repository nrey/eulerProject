PROJECT( EULER_0043)

INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )

SET( EULER_0043_HDRS
	eu0043.h
	)

SET( EULER_0043_SRCS
	eu0043.cpp
	main.cpp
	)

ADD_LIBRARY( eu0043_LIB ${EULER_0043_HDRS} ${EULER_0043_SRCS} )

ADD_EXECUTABLE( eu0043 main.cpp  )
TARGET_LINK_LIBRARIES( eu0043 eu0043_LIB euler )
