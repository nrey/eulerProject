#include"NaiveInfinitePrecition.h"

// CREATE A FILE WITH ALL THE PRIMERS NUMBERS UP TO SOMETHING

// ################################################################################################################# //

NaiveInfinitePrecition :: NaiveInfinitePrecition( unsigned int numSize ){
  m_numSize = numSize;
  m_num = new unsigned char[ m_numSize ];
};

// ################################################################################################################# //

NaiveInfinitePrecition :: ~NaiveInfinitePrecition(){
  delete [] m_num;
}

// ################################################################################################################# //

bool NaiveInfinitePrecition::setZeros( ){
  for( unsigned int i=0; i<m_numSize; ++i ){
    m_num[i] = 0;
  }
};
 
// ################################################################################################################# //

bool NaiveInfinitePrecition::setValue( unsigned int location, unsigned char value ){
  m_num[location] = value;
};

// ################################################################################################################# //

unsigned char NaiveInfinitePrecition::getValue( unsigned int location ){
  return m_num[location];
};

// ################################################################################################################# //

bool NaiveInfinitePrecition::mul( unsigned char value ){
  unsigned char temp = m_num[0] * value;
  for( unsigned int i=1; i<m_numSize; ++i ){
    
    if( temp >= 10 )
    {
//       std::cout << std::endl << int(temp/10) << " " << i;
      m_num[i-1] = temp%10;
      temp = m_num[i]*value+temp/10;
      
    }
    else
    {
      m_num[i-1] = temp;
      temp = m_num[i]*value;
    }
  }
//   std::cout << std::endl << int(temp);
  if( temp > 0 ) // Not Implemented
  {
    std::cout << std::endl << "\tERROR: Overflow";
    abort();
  }

};

// ################################################################################################################# //

bool NaiveInfinitePrecition::mulInt( long long value ){
  unsigned char temp = m_num[0] * value;
  for( unsigned int i=1; i<m_numSize; ++i ){
    
    if( temp >= 10 )
    {
//       std::cout << std::endl << int(temp/10) << " " << i;
      m_num[i-1] = temp%10;
      temp = m_num[i]*value+temp/10;
      
    }
    else
    {
      m_num[i-1] = temp;
      temp = m_num[i]*value;
    }
  }
//   std::cout << std::endl << int(temp);
  if( temp > 0 ) // Not Implemented
  {
    std::cout << std::endl << "\tERROR: Overflow";
    abort();
  }

};

// ################################################################################################################# //

unsigned long long NaiveInfinitePrecition::sumDigi( ){
  unsigned long long temp = 0;
  for( unsigned int i=0; i<m_numSize; ++i ){
    temp += m_num[i];
  }
  return temp;
};






























