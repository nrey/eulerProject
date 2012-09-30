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



