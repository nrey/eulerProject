#ifndef NaiveInfinitePrecition_h
#define NaiveInfinitePrecition_h

#include"principal.h"
#include "Templates.h"

class NaiveInfinitePrecition
{
  public:

    NaiveInfinitePrecition( ){}; 
    NaiveInfinitePrecition( unsigned int numSize );
    ~NaiveInfinitePrecition();
    bool setZeros();
    bool setValue( unsigned int location, unsigned char value );
    bool setValue( unsigned long long value );
    unsigned char getValue( unsigned int location );
    bool mul( unsigned char value ); // Only by a small value
    // Multiply by a small value and store in another (or same) object
    void mul( NaiveInfinitePrecition *rhs, unsigned char value );
    bool mulInt( long long value ); // Only by a small value
    // Reverse the number and store the result in lhs
    void reverse( NaiveInfinitePrecition* lhs );
    // Test if the number is palind
    bool ispalind();
    // Make a copy of the number
    void copyto( NaiveInfinitePrecition *rhs );
    
    // Add two infinity number 
    void add( NaiveInfinitePrecition *rhs, NaiveInfinitePrecition *lhs );
    
    unsigned long long sumDigi( ); // Suum all the digits in the number
    unsigned long long numDigi( ); // Return the number of digits in the number different to 0
    
  private:
    unsigned int m_numSize;
    unsigned char* m_num;
    
    // Proposito general
    unsigned long long m_temp_1, m_temp_2, m_temp_3, m_temp_4, m_temp_5, m_temp_6, m_temp_7, m_temp_8, m_temp_9, m_temp_10;
    unsigned long long *m_tem_1d_1,*m_tem_1d_2,*m_tem_1d_3,*m_tem_1d_4,*m_tem_1d_5; // variable de proposito general
    
    double m_tedo_1,m_tedo_2,m_tedo_3,m_tedo_4,m_tedo_5,m_tedo_6,m_tedo_7,m_tedo_8,m_tedo_9,m_tedo_10; // variable de proposito general
    
    std::ostringstream m_ostvar_1;
    std::string m_strvar_1;

};

#endif
