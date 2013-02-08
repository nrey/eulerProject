#include"eu0076.h"

void eu0076 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //
  // Dejo el codigo comentado para el ejemplo de 8, (7+1,6+2,etc) ok la idea basica es de atras para adelante. Es decir, tengo 1+1+1+1+1+1+1+1, luego lo q hago es subir, es decir creo la base 8 7 6 5 4 3 2 1, donde la primer suma se representa como 0 0 0 0 0 0 0 8, luego le resto de 2 en dos al ultimo (la unidad) y me queda (obvio los ceros de la izq) 08, 16, 24, 32, 40, luego viene la parte segunda del algoritmo, y es que coloco el siguiente valor en este caso 3, y el resto de unos, 105, y repito el proceso 105, 113, 121, luego miro si le puedo meter otro 3, en este caso si se puede, 202, ( siempre que aumento cualquiera de los numeros despues de los dos primeros, borro el contenido de los dos ultimos digitos y coloco la direrencia entre el numero deseado y lo que llevo en unidades, es decir en posiciones de la unidad para de ahi comenzar a subir). asi me queda 202, 210, luego trato de meterle otro 3, como no puedo le meto un 4, y dejo lo que falta en unidad asi 1004, para de ahi comenzar a subir 1012, 1020, luego le trato de meter un 3, (pues ya la unidad es cero) 1101, luego le trato de meter otro 3, como no puedo entoces le meto otro 4, y borro todo lo demas, y la diferencia al deseado la meto en unidades asi: 20000


  //FIXME Uderstand the logic of the algorithm, I forgot what I did
  tem_sig_1d_1 = new long long [100];
  for( unsigned long long i=0; i<100; i++ ){
    tem_sig_1d_1[i] = 0;
  }
  tem_sig_1d_1[0] = 100; // Todo lo hago de atras para adelante, es decir comienzo con 1+1+....+1

  temp_2 = 0; // La suma total acumulada

  while( tem_sig_1d_1[99] == 0 ){
    // La parte interna del algoritmo sube de 1nos a 2ces, es decir resta dos a la unidad y suma uno a las de 2
    while( tem_sig_1d_1[0] >= 2 ){
      tem_sig_1d_1[0] = tem_sig_1d_1[0] - 2;
      tem_sig_1d_1[1]++;
      temp_1++; // Aumenta la cantidad de representaciones en sumas 
    }
    tem_sig_1d_1[0] = 0; // Resetea unidades y dos
    tem_sig_1d_1[1] = 0;

    temp_3 = 2; // Siempre a la hora de aumentar la segunda parte del numero (XXXXX12) comienza intentando desde la posicion 3 (o 2 porque se comienza desde 0)
    temp_11 = 1; // Bandera para salir del dowhile
    do{
      tem_sig_1d_1[temp_3]++; // Intanta sumarle la unidad mas pequena (3 en la primera iteracion)
      temp_4 = temp_2 + (temp_3+1);
      if( temp_4>100 ){  // Si es mas grande de 100, 
        tem_sig_1d_1[temp_3]--;
        temp_2 = temp_2 - (temp_3+1)*(tem_sig_1d_1[temp_3]);
        tem_sig_1d_1[temp_3] = 0;
      }
      else{
        temp_2 = temp_4;
        temp_11 = 0;
      }
      temp_3++;
    }while(temp_11);

    tem_sig_1d_1[0] = 100 - temp_2; // Lo que falte para 100, lo guarda en unidades
    temp_1++; // Este contador es para los casos cuando por ejemplo tengamos 100, como 50+50, en ese caso las unidades son cero, pero aun asi esta es una representacion mas, pero el contador por defecto de unidades a 2ces (primer wile) no se va a activar
  }
//   cout<<endl;




//  tem_sig_1d_1 = new long long [100];
//  for( unsigned long long i=0; i<100; i++ ){
//    tem_sig_1d_1[i] = 0;
//  }
//  tem_sig_1d_1[0] = 8;
//  
//  temp_2 = 0;
// cout<<endl<<"8 "<<"7 "<<"6 "<<"5 "<<"4 "<<"3 "<<"2 "<<"1 ";
// cout<<endl<<"---------------";
//  while( tem_sig_1d_1[7] == 0 ){
//    while( tem_sig_1d_1[0] >= 2 ){
//      tem_sig_1d_1[0] = tem_sig_1d_1[0] - 2;
//      tem_sig_1d_1[1]++;
//      temp_1++;
// cout<<endl<<tem_sig_1d_1[7]<<" "<<tem_sig_1d_1[6]<<" "<<tem_sig_1d_1[5]<<" "<<tem_sig_1d_1[4]<<" "<<tem_sig_1d_1[3]<<" "<<tem_sig_1d_1[2]<<" "<<tem_sig_1d_1[1]<<" "<<tem_sig_1d_1[0]<<" ";
//    }
//    tem_sig_1d_1[0] = 0;
//    tem_sig_1d_1[1] = 0;
//    
//    temp_3 = 2;
//    temp_11 = 1;
//    do{
//      tem_sig_1d_1[temp_3]++;
//      temp_4 = temp_2 + (temp_3+1);
//      if( temp_4>8 ){
//        tem_sig_1d_1[temp_3]--;
//        temp_2 = temp_2 - (temp_3+1)*(tem_sig_1d_1[temp_3]);
//        tem_sig_1d_1[temp_3] = 0;
//      }
//      else{
//        temp_2 = temp_4;
//        temp_11 = 0;
//      }
//      temp_3++;
//    }while(temp_11);
//    
//    tem_sig_1d_1[0] = 8 - temp_2;
//    temp_1++;
// cout<<endl<<tem_sig_1d_1[7]<<" "<<tem_sig_1d_1[6]<<" "<<tem_sig_1d_1[5]<<" "<<tem_sig_1d_1[4]<<" "<<tem_sig_1d_1[3]<<" "<<tem_sig_1d_1[2]<<" "<<tem_sig_1d_1[1]<<" "<<tem_sig_1d_1[0]<<" ";
//  }
//  cout<<endl;

  output = temp_1;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0076 :: printsolution(){
  std::cout << "Euler 0076\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
