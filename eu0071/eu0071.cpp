#include"eu0071.h"

void eu0071 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //
  // NO LO HICE YO, LO COPIE DE INTERNET, http://keyzero.wordpress.com/2010/04/09/project-euler-problem-71/, AL PARECER EL METODO QUE SE UTILIZO PARA RESOLVERLO FUE LA  Farey Sequence

  //FIXME Understand the code
  temp_1 = 2;
  temp_2 = 5;
  temp_3 = 3;
  temp_4 = 7;
  while( temp_2+temp_4<=1000000 ){
    temp_1 = temp_1 + temp_3;
    temp_2 = temp_2 + temp_4;
  }
  output = temp_1;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0071 :: printsolution(){
  std::cout << "Euler 0071\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
