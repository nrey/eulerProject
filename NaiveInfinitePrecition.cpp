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

