#include"eu0049.h"

void eu0049 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  tem_1d_1 = new unsigned long long [1061];
  tem_1d_3 = new unsigned long long [4];
  tem_1d_4 = new unsigned long long [4];
  tem_1d_5 = new unsigned long long [4];

  // ---------------------------------------------------- //

  //FIXME review the code
  temp_10 = 4;

  temp_1 = 0;
  for( unsigned long long i=999; i<9999; i=i+2 ){
    if( isprime(&i) ){
      tem_1d_1[temp_1] = i;
      temp_1++;
    }
  }

  temp_3 = 0;
  for( unsigned long long i=0; i<1059; i++ ){
    for( unsigned long long j=i+1; j<1061; j++ ){
      temp_1 = tem_1d_1[j] - tem_1d_1[i];
      temp_2 = tem_1d_1[i] + 2*temp_1;
      if( isprime(&temp_2) ){

        // Saco los digitos
        digits( &tem_1d_1[i], temp_10, tem_1d_3 );
        digits( &tem_1d_1[j], temp_10, tem_1d_4 );

        // Prueba si el primero es una permutacion del segundo
        if( tem_1d_3[0]==tem_1d_4[0] ){
          temp_6 = 1;
          temp_7 = 2;
          temp_8 = 3;
        }
        else if( tem_1d_3[0]==tem_1d_4[1] ){
          temp_6 = 0;
          temp_7 = 2;
          temp_8 = 3;
        }
        else if( tem_1d_3[0]==tem_1d_4[2] ){
          temp_6 = 0;
          temp_7 = 1;
          temp_8 = 3;
        }
        else if( tem_1d_3[0]==tem_1d_4[3] ){
          temp_6 = 0;
          temp_7 = 1;
          temp_8 = 2;
        }
        else{
          continue;
        }
        if( tem_1d_3[1]==tem_1d_4[temp_6] ){
          temp_6 = temp_7;
          temp_7 = temp_8;
        }
        else if( tem_1d_3[1]==tem_1d_4[temp_7] ){
          temp_6 = temp_6;
          temp_7 = temp_8;
        }
        else if( tem_1d_3[1]==tem_1d_4[temp_8] ){
          temp_6 = temp_6;
          temp_7 = temp_7;
        }
        else{
          continue;
        }
        if( tem_1d_3[2]==tem_1d_4[temp_6] ){
          temp_6 = temp_7;
        }
        else if( tem_1d_3[2]==tem_1d_4[temp_7] ){
          temp_6 = temp_6;
        }
        else{
          continue;
        }
        if( tem_1d_3[3]==tem_1d_4[temp_6] ){
          temp_6 = temp_6;
        }
        else{
          continue;
        }

        // Prueba si el primero es una permutacion del tercerooooo

        digits( &temp_2, temp_10, tem_1d_5 );

        if( tem_1d_3[0]==tem_1d_5[0] ){
          temp_6 = 1;
          temp_7 = 2;
          temp_8 = 3;
        }
        else if( tem_1d_3[0]==tem_1d_5[1] ){
          temp_6 = 0;
          temp_7 = 2;
          temp_8 = 3;
        }
        else if( tem_1d_3[0]==tem_1d_5[2] ){
          temp_6 = 0;
          temp_7 = 1;
          temp_8 = 3;
        }
        else if( tem_1d_3[0]==tem_1d_5[3] ){
          temp_6 = 0;
          temp_7 = 1;
          temp_8 = 2;
        }
        else{
          continue;
        }
        if( tem_1d_3[1]==tem_1d_5[temp_6] ){
          temp_6 = temp_7;
          temp_7 = temp_8;
        }
        else if( tem_1d_3[1]==tem_1d_5[temp_7] ){
          temp_6 = temp_6;
          temp_7 = temp_8;
        }
        else if( tem_1d_3[1]==tem_1d_5[temp_8] ){
          temp_6 = temp_6;
          temp_7 = temp_7;
        }
        else{
          continue;
        }
        if( tem_1d_3[2]==tem_1d_5[temp_6] ){
          temp_6 = temp_7;
        }
        else if( tem_1d_3[2]==tem_1d_5[temp_7] ){
          temp_6 = temp_6;
        }
        else{
          continue;
        }
        if( tem_1d_3[3]==tem_1d_5[temp_6] ){
          temp_6 = temp_6;
        }
        else{
          continue;
        }
        // Solo hay dos casos, me piden el segudno de ellos
//         cout<<endl<<tem_1d_1[i]<<" "<<tem_1d_1[j]<<" "<<temp_2;
        output = tem_1d_1[i]*pow(10,8)+tem_1d_1[j]*pow(10,4)+temp_2;
      }
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0049 :: printsolution(){
  std::cout << "Euler 0049\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
