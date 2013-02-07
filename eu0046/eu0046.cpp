#include"eu0046.h"

void eu0046 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[10000];

  // ---------------------------------------------------- //

  // Calcula los primos hasta el 100 
  temp_1 = 0;
  tem_1d_1[temp_1] = 2;
  temp_1++;
  temp_6 = 1;
  temp_5 = 3;
  while( temp_6==1){
    // De a 2 de dos calculamos los primos
    temp_5 = temp_5+2;
    if( isprime(&temp_5) ){
      tem_1d_1[temp_1] = temp_5;
      temp_1++;
    }
    // Los que no sean primos (Ademas seran impares pues es de dos en dos) les hacemos el test q nos piden
    else{
      temp_2 = 0;
      while( temp_2<temp_1 ){
        temp_3 = (temp_5-tem_1d_1[temp_2])/2; // Utiliza primos de forma asencente hasta el ultimo q se ha calculado
        temp_4 = sqrt(temp_3);
        if( temp_3==pow(temp_4,2) ){ // Esta es la condicion mas importante que el numero sea un cuadrado perfecto
          break;
        }
        temp_2++;
        if( temp_2==temp_1 ){ // Si llega aca con el valor maximo, ultimo primo calculado, es porque no pudo encontrar una combinacion acorde, asi q sale y finaliza
          output = temp_5;
          temp_6 = 0;
          break;
        }
      }


    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0046 :: printsolution(){
  std::cout << "Euler 0046\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
