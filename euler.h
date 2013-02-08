#ifndef euler_h
#define euler_h

#include"principal.h"
#include"NaiveInfinitePrecition.h"
//#include"infinite_precition.h"
#include "Templates.h"


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
    // Summation of all the proper numbers
    unsigned long long sumprop( unsigned long long input );
    // Compute the factorial of a number
    unsigned long long factorial( unsigned long long input );
    // Test if a number is palindrome in a given base
    bool ispalind( unsigned long long* input, unsigned long long base );
    // Return the digits of a number
    void digits( unsigned long long*input, unsigned long long size, unsigned long long* output );
    unsigned long long digits( unsigned long long*input, unsigned long long* output );
    // Get the size of a number
    unsigned long long size( unsigned long long* input );
    // Test if a number is pandigital
    bool ispandigital( unsigned long long* input, unsigned long long size );
    // FIXME dont know exactly what it does, it compares to see if they are permutations
    bool isPermuDigits( unsigned long long*input1, unsigned long long*input2, unsigned long long size );
    // Computes the combinatorial
    double combinaDou( unsigned long long nnn, unsigned long long rrr);


		long long output; //FIXME big change, now it has sign
		double tstart, tstop, ttime;
    
		unsigned long long temp_1, temp_2, temp_3, temp_4, temp_5, temp_6, temp_7, temp_8, temp_9, temp_10, temp_11, temp_12, temp_13, temp_14;
    unsigned long long *tem_1d_1,*tem_1d_2,*tem_1d_3,*tem_1d_4,*tem_1d_5; // variable de proposito general
    unsigned long long **tem_2d_1; // variable de proposito general
    unsigned long long ***tem_3d_1; // variable de proposito general

    long long temp_sig_1, temp_sig_2, temp_sig_3, temp_sig_4, temp_sig_5, temp_sig_6, temp_sig_7, temp_sig_8, temp_sig_9, temp_sig_10;
//     unsigned long long *tem_1d_1,*tem_1d_2,*tem_1d_3,*tem_1d_4; // variable de proposito general
//     unsigned long long **tem_2d_1; // variable de proposito general
//     unsigned long long ***tem_3d_1; // variable de proposito general
    
    bool flag_1, flag_2;

    double tedo_1,tedo_2,tedo_3,tedo_4,tedo_5,tedo_6,tedo_7,tedo_8,tedo_9,tedo_10; // variable de proposito general
    
    std::ifstream myfile_read_1;

    std::ofstream myfile_writ_1;

    NaiveInfinitePrecition *infi_1, *infi_2, *infi_3, *infi_4, *infi_5;

	private:
		unsigned long long m_temp_1, m_temp_2, m_temp_3, m_temp_4, m_temp_5, m_temp_6, m_temp_7, m_temp_8, m_temp_9, m_temp_10;
    unsigned long long *m_tem_1d_1,*m_tem_1d_2,*m_tem_1d_3,*m_tem_1d_4,*m_tem_1d_5; // variable de proposito general
    
    double m_tedo_1,m_tedo_2,m_tedo_3,m_tedo_4,m_tedo_5,m_tedo_6,m_tedo_7,m_tedo_8,m_tedo_9,m_tedo_10; // variable de proposito general
    
		std::ostringstream m_ostvar_1;
		std::string m_strvar_1;
};



#endif
