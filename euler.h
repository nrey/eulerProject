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
		unsigned long long temp_1, temp_2, temp_3, temp_4, temp_5, temp_6, temp_7, temp_8, temp_9, temp_10;
	private:
};

#endif
