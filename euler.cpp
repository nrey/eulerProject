#include"euler.h"

// CREATE A FILE WITH ALL THE PRIMERS NUMBERS UP TO SOMETHING

// ################################################################################################################# //

euler :: euler(){
}

// ################################################################################################################# //

euler :: ~euler(){
}

// ################################################################################################################# //

bool euler :: isprime( unsigned long long* input ){

// 	Este es el metodo base, donde simplemente se evita probar por los numeros multiplos de 2
// 	if( input[0] == 0 ){
// 		return false;
// 	}
// 	if( input[0] == 1 ){
// 		return false;
// 	}
// 	if( input[0] == 2 ){
// 		return true;
// 	}
// 	if( input[0] % 2 == 0 ){
// 		return false;
// 	}
// 	for( unsigned long long i=3; i*i<=input[0]; i = i + 2 ){
// 		if( input[0] % i == 0 )
// 			return false;
// 	}
// 	return true;

// En este se evitan las multiplicidades por 2, 3 y 5
// las de 2 se evitan haciendo los tests de 2 en 2
// las de 3 se evitan usando la variable m_temp_1
// las de 5 se evitan haciendo sumas de 2 en 2, y en otros casos sumando de a 4, para saltar los numeros multiplos de 5
	if( input[0] == 0 ){
		return false;
	}
	if( input[0] == 1 ){
		return false;
	}
	if( input[0] == 2 ){
		return true;
	}
	if( input[0] % 2 == 0 ){
		return false;
	}
	if( input[0] == 3 ){
		return true;
	}
	if( input[0] % 3 == 0 ){
		return false;
	}
	if( input[0] == 5 ){
		return true;
	}
	if( input[0] % 5 == 0 ){
		return false;
	}
	if( input[0] == 7 ){
		return true;
	}
	if( input[0] % 7 == 0 ){
		return false;
	}
	m_temp_1 = 1;	// con esta variable se controlan la multiplicidad por 3
	for( unsigned long long i=11; i*i<=input[0]; i = i + 2 ){
		if( m_temp_1 == 1 ){
			if( input[0] % i == 0 ) //11
				return false;
			i = i+2;
			if( input[0] % i == 0 ) //13
				return false;
			i = i+4;
			if( input[0] % i == 0 ) //17
				return false;
			i = i+2;
			if( input[0] % i == 0 ) //19
				return false;
			m_temp_1++;
		}
		else if( m_temp_1 == 2 ){
			i = i+2;
			if( input[0] % i == 0 ) //23
				return false;
			i = i+6;
			if( input[0] % i == 0 ) //29
				return false;
			m_temp_1++;
		}
		else if( m_temp_1 == 3 ){
			if( input[0] % i == 0 ) //31
				return false;
			i = i+6;
			if( input[0] % i == 0 ) //37
				return false;
			i = i+2;
			m_temp_1 = 1;
		}
	}
	return true;
}

// ################################################################################################################# //

bool euler :: ispalin( unsigned long long* input ){

	m_ostvar_1.str(std::string()); // Erase; For all the standard library types the member function "empty()" is a query, not a command. i.e. it means "are you empty?" not "please throw away your contents" The "clear()" member function is inherited from ios and is used to clear the error state of the stream. E.g. if a file stream has the error state set to "eofbit" (end-of-file), then calling "clear()" will set the error state back to "goodbit" (no error).
	m_ostvar_1<<input[0];
	m_strvar_1 = m_ostvar_1.str();

	m_temp_1 = m_strvar_1.length();

	for( unsigned int i=0; i<m_temp_1; i++ ){
		if( m_strvar_1[i]!=m_strvar_1[m_temp_1-1-i] ){
			return false;
		}
	}
	return true;
}

// ################################################################################################################# //

unsigned long long euler :: sumprop( unsigned long long input ){
  m_temp_1 = 1;
  for( unsigned long long i=2; i<=input/2; i++ ){
    if( input%i == 0 ){
      m_temp_1 += i;
    }
  }
  return m_temp_1;
}

// ################################################################################################################# //

unsigned long long euler :: factorial( unsigned long long input ){

  if( input == 0 ){
    return 1;
  }
  m_temp_1 = 1;
  for( unsigned long long i=1; i<=input; i++ ){
    m_temp_1 = m_temp_1*i;
  }
  return m_temp_1;
}

// ################################################################################################################# //

bool euler :: ispalind( unsigned long long* input, unsigned long long base ){

    m_temp_1 = input[0];
    m_temp_2 = 0;
    while( m_temp_1>0 ){
      m_temp_2 *= base;
      m_temp_2 += m_temp_1%base;
      m_temp_1 /= base;
    }
    if( m_temp_2 == input[0] ){
      return true;
    }
    return false;
}

// ################################################################################################################# //

void euler :: digits( unsigned long long*input, unsigned long long size, unsigned long long* output ){

  m_temp_1 = input[0];
  m_temp_3 = size;
  do{
    output[m_temp_3-1] = m_temp_1%10;
    m_temp_3--;
    m_temp_1 = m_temp_1/10;
  }while(m_temp_1>0);
}

// ################################################################################################################# //

unsigned long long euler :: size( unsigned long long* input ){

  m_ostvar_1.str(std::string()); // Vaciamos
  m_ostvar_1<<input[0];
  return  m_ostvar_1.str().length();
}

// ################################################################################################################# //

bool euler :: ispandigital( unsigned long long* input, unsigned long long size ){
  m_temp_1 = 0;
  m_temp_4 = 0;
  for( unsigned long long i=0; i<size; i++ ){
    m_temp_1 = m_temp_1 + input[i];
    m_temp_4 = m_temp_4 + i+1;
  }
  if( m_temp_1 != m_temp_4 ){
    return false;
  }

  for( unsigned long long i=0; i<size; i++ ){
    m_temp_2 = 0;
    for( unsigned long long j=0; j<size; j++ ){
      if( input[j] == i+1 ){
        m_temp_2 = 1;
        break;
      }
    }
    if( m_temp_2 == 0 ){
      return false;
    }
  }
  return true;
}

// ################################################################################################################# //

unsigned long long euler :: digits( unsigned long long*input, unsigned long long* output ){

  m_temp_1 = input[0];
  m_ostvar_1.str(std::string()); // Vaciamos
  m_ostvar_1<<m_temp_1;
  m_temp_3 = m_ostvar_1.str().length();
  m_temp_2 = m_temp_3;
  do{
    output[m_temp_3-1] = m_temp_1%10;
    m_temp_3--;
    m_temp_1 = m_temp_1/10;
  }while(m_temp_1>0);

  return m_temp_2;
}













































