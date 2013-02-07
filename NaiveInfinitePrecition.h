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
    unsigned char getValue( unsigned int location );
    bool mul( unsigned char value ); // Only by a small value
    bool mulInt( long long value ); // Only by a small value
    
    void add( NaiveInfinitePrecition *rhs, NaiveInfinitePrecition *lhs );
    
    unsigned long long sumDigi( ); // Suum all the digits in the number
    unsigned long long numDigi( ); // Return the number of digits in the number different to 0
    
  private:
    unsigned int m_numSize;
    unsigned char* m_num;

};

#endif
