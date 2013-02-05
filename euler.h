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
		
		// Test if a number if prime
		bool isprime( unsigned long long* input );
		// Test if a number if prime
		bool ispalin( unsigned long long* input );


		unsigned long long output;
		double tstart, tstop, ttime;
		unsigned long long temp_1, temp_2, temp_3, temp_4, temp_5, temp_6, temp_7, temp_8, temp_9, temp_10;

    unsigned long long *tem_1d_1,*tem_1d_2,*tem_1d_3; // variable de proposito general

    unsigned long long **tem_2d_1; // variable de proposito general

    unsigned long long ***tem_3d_1; // variable de proposito general


    bool flag_1, flag_2;

    ifstream myfile_read_1;

    ofstream myfile_writ_1;

	private:
		unsigned long long m_temp_1, m_temp_2, m_temp_3, m_temp_4, m_temp_5, m_temp_6, m_temp_7, m_temp_8, m_temp_9, m_temp_10;
		ostringstream m_ostvar_1;
		string m_strvar_1;
};

#endif
