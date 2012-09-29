PROJECT( EULER )
cmake_minimum_required(VERSION 2.4)

SET( EULER_HDRS
	principal.h
	#infinite_precition.h
	euler.h
	main.h
)

SET( EULER_SRCS
	#infinite_precition.cpp
	euler.cpp
)

ADD_LIBRARY( euler ${EULER_HDRS} ${EULER_SRCS} )

ADD_SUBDIRECTORY( eu0001 )

ADD_EXECUTABLE( mainEuler main.cpp  )
TARGET_LINK_LIBRARIES( mainEuler euler leu0001 )
