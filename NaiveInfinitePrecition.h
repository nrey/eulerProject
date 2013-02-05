#ifndef NaiveInfinitePrecition_h
#define NaiveInfinitePrecition_h

#include"principal.h"

class NaiveInfinitePrecition
{
	public:

  	NaiveInfinitePrecition( ){}; 
		NaiveInfinitePrecition( unsigned int numSize);
		~NaiveInfinitePrecition();
    bool setZeros();
		
	private:
    unsigned int m_numSize;
    unsigned char* m_num;
	
};

#endif
