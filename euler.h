#ifndef euler_h
#define euler_h

#include"principal.h"
//#include"infinite_precition.h"

class euler
{
	public:
	  
		euler();
		~euler();
		virtual void solucion(){}; //NO FUI CAPAZ DE HACERLA VIRTUAL
		virtual void printsolution(){};


    unsigned long long m_output;
    double m_tstart, m_tstop, m_ttime;
	private:
};

#endif
