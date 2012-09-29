PROJECT( EULER )

SET( EULER_HDRS
		principal.h
		euler.h
   )

SET( EULER_SRCS
		euler.cpp
   )

ADD_LIBRARY( euler ${EULER_HDRS} ${EULER_SRCS} )

ADD_SUBDIRECTORY( eu0001 )
