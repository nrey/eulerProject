#include"eu0053.h"

void eu0053 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  // Basicamente busca en la mitad de i (osea n) y si es mayor que 1'000000 entonces procede a calcular el siguiente menor a esa mitad
  // y asi hasta q dejen de salir mayores a 1'000000, luego si el numero n era par multiplica por dos y resta uno, y si era impar
  // solamente multiplica por dos la dantidad de numero s mayores q 1'000000
  temp_2 = 0;
  for( unsigned long long i=1; i<=100; i++ ){
    temp_1 = i/2;
    tedo_1 = combinaDou( i, temp_1 );
    if( tedo_1 > 1000000 ){
      temp_3 = 0;
      do{
        temp_3++; // Aumenta en uno el contador
        temp_1--;
        tedo_1 = combinaDou( i, temp_1 );
      }
      while(tedo_1 > 1000000);

      if(i%2==0){
        temp_2 = temp_2 + 2*temp_3 - 1;
      }
      else{
        temp_2 = temp_2 + 2*temp_3;
      }
    }
  }
  output = temp_2;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0053 :: printsolution(){
  std::cout << "Euler 0053\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
