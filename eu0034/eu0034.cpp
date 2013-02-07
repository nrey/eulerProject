#include"eu0034.h"

void eu0034 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[10];
  tem_1d_2 = new unsigned long long[10]; // Suma de los factoriales de los digitos
  tem_1d_3 = new unsigned long long[10]; // Los digitos del numero
  tem_1d_4 = new unsigned long long[10]; // El numero actual

  // Esta resulto ser una tecnica bastante util para implementar banderas dedntro de los fors que me indiquen hasta que nivel
  // se ha entrado hasta el momento, es decir q tantos fors se han entrado.
  temp_1 = 1;  // La cantidad de digitos del numero actual, este tipo de variable es super util para los for q tienen condiciones
      // especiales para el primer caso de la iteracion

  // ---------------------------------------------------- //

  tem_1d_1[0] = factorial(0);
  tem_1d_1[1] = factorial(1);
  tem_1d_1[2] = factorial(2);
  tem_1d_1[3] = factorial(3);
  tem_1d_1[4] = factorial(4);
  tem_1d_1[5] = factorial(5);
  tem_1d_1[6] = factorial(6);
  tem_1d_1[7] = factorial(7);
  tem_1d_1[8] = factorial(8);
  tem_1d_1[9] = factorial(9);

  temp_1 = 1;
  temp_2 = 0;
  temp_3 = 0;
  temp_4 = 0;
  temp_5 = 0;
  temp_6 = 0;


  tem_1d_4[5] = 0;
  tem_1d_2[5] = 0;

  // Estos fors se podrian inclusive combinar en uno solo, pero lo dejo asi como una forma de ver mas claramente el problema

  for( tem_1d_3[4]=0; tem_1d_3[4]<10; tem_1d_3[4]++ ){
    tem_1d_4[4] = tem_1d_4[5] + tem_1d_3[4]*pow(10,4);
    tem_1d_2[4] = tem_1d_2[5] + tem_1d_1[tem_1d_3[4]];

    for( tem_1d_3[3]=0; tem_1d_3[3]<10; tem_1d_3[3]++ ){
      tem_1d_4[3] = tem_1d_4[4] + tem_1d_3[3]*pow(10,3);
      tem_1d_2[3] = tem_1d_2[4] + tem_1d_1[tem_1d_3[3]];

      for( tem_1d_3[2]=0; tem_1d_3[2]<10; tem_1d_3[2]++ ){
        tem_1d_4[2] = tem_1d_4[3] + tem_1d_3[2]*pow(10,2);
        tem_1d_2[2] = tem_1d_2[3] + tem_1d_1[tem_1d_3[2]];

        for( tem_1d_3[1]=0; tem_1d_3[1]<10; tem_1d_3[1]++ ){

          tem_1d_4[1] = tem_1d_4[2] + tem_1d_3[1]*pow(10,1);
          tem_1d_2[1] = tem_1d_2[2] + tem_1d_1[tem_1d_3[1]];

          for( tem_1d_3[0]=0; tem_1d_3[0]<10; tem_1d_3[0]++ ){
            temp_1 = temp_1 + temp_2 + temp_3 + temp_4 + temp_5 + temp_6;
            tem_1d_4[0] = tem_1d_4[1] + tem_1d_3[0];
            tem_1d_2[0] = tem_1d_2[1] + tem_1d_1[tem_1d_3[0]];
            if( tem_1d_4[0] == tem_1d_2[0]-(5-temp_1) ){
//               cout<<endl<<tem_1d_4[0];
              output = output + tem_1d_4[0];
            }
            temp_1 = 1;
          }
          temp_2 = 1;
        }
        temp_3 = 1;
      }
      temp_4 = 1;
    }
    temp_5 = 1;
  }

//   cout<<endl;
  output = output - 2 - 1;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0034 :: printsolution(){
  std::cout << "Euler 0034\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
