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
  int numOfDigits = numDigits< long long >(value);
  unsigned char digits[numOfDigits];
  long long temp = value;
//   std::cout << std::endl <<"\t->digits: ";
  for( unsigned long long i=0; i<numOfDigits; ++i ){
    digits[i] = temp%10;
    temp = temp/10;
//     std::cout << int(digits[i]);
  }
  
  // Now the actual multiplication
  unsigned char tempSum[m_numSize];
  unsigned char tempMul[m_numSize];
  
  for( unsigned int j=0; j<m_numSize; ++j ){
    tempSum[j] = 0;
    tempMul[j] = 0;
  }
  
  for( unsigned long long i=0; i<numOfDigits; ++i ){
    // tempMul =
    unsigned char temp = m_num[0] * digits[i];
//     std::cout << std::endl << "\t->DIDI: " << int(digits[i]) << ":";
    for( unsigned int j=1; j<m_numSize-i; ++j ){
//       std::cout << "\n\t->Di:  " << int(temp);
      if( temp >= 10 )
      {
        tempMul[j-1] = temp%10;
        temp = m_num[j]*digits[i]+temp/10;
        
      }
      else
      {
        tempMul[j-1] = temp;
        temp = m_num[j]*digits[i];
      }
    }
    if( temp > 0 ) // Not Implemented
    {
      std::cout << std::endl << "\tERROR: Overflow";
      abort();
    }  
//     // Print multiplication
//     std::cout << std::endl << "\t->Mult: " << int(digits[i]) << ":";
//     for( int j=m_numSize-1; j>-1; --j ){
//       std::cout << " " << int(tempMul[j]);
//     }
    
    // tempSum =
    for( unsigned int j=i; j<m_numSize; ++j ){
      unsigned char temp1 = tempSum[j] + tempMul[j-i];
      if( temp1 >= 10 ){
        tempSum[j] = temp1%10;
        tempSum[j+1] += temp1/10;
      } 
      else{
        tempSum[j] = temp1%10;
      }
    }
//     // Print sum
//     std::cout << std::endl << "\t->Sum: ";
//     for( int j=m_numSize-1; j>-1; --j ){
//       std::cout << " " << int(tempSum[j]);
//     }
      
  };
    // Copy result
    for( int j=m_numSize-1; j>-1; --j ){
      m_num[j] = tempSum[j];
    }
    
//     // Print sum
//     std::cout << std::endl << "\t->Sum: ";
//     for( int j=m_numSize-1; j>-1; --j ){
//       std::cout << " " << int(m_num[j]);
//     }
  


  

};

// ################################################################################################################# //

void NaiveInfinitePrecition::add( NaiveInfinitePrecition *rhs, NaiveInfinitePrecition *lhs ){
  unsigned char temp_1_ = 0; // Esta es lo que llevo de cada suma
  for( unsigned long long i=0; i<m_numSize; i++ ){
    unsigned char temp1 = temp_1_+rhs->m_num[i]+lhs->m_num[i];
    m_num[i] = temp1%10;
    temp_1_ = temp1/10;
  }
  if( temp_1_ > 0 ) // Not Implemented
  {
    std::cout << std::endl << "\tERROR: Overflow";
    abort();
  } 
    // Print sum
//     std::cout << std::endl << "\t->Sum: ";
//     for( int j=m_numSize-1; j>-1; --j ){
//       std::cout << " " << int(m_num[j]);
//     }
    
}

// ################################################################################################################# //

unsigned long long NaiveInfinitePrecition::sumDigi( ){
  unsigned long long temp = 0;
  for( unsigned int i=0; i<m_numSize; ++i ){
    temp += m_num[i];
  }
  return temp;
};

// ################################################################################################################# //

unsigned long long NaiveInfinitePrecition::numDigi( ){
  unsigned long long temp = 0;
  for( int j=m_numSize-1; j>-1; --j ){
    if( int(m_num[j]) > 0 ){
      temp = j+1;
//       std::cout << std::endl << j <<" " << int(m_num[j]);
      break;
    }
  }
  return temp;
};






























