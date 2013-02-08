#include"eu0072.h"

void eu0072 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  temp_2 = 10; // Cantidad maxima de primos en un determinado numero (2*3*5*7*11, etc)
  tem_1d_1 = new unsigned long long[100000];
  tem_1d_2 = new unsigned long long[temp_2]; // facotres primos
  tem_1d_3 = new unsigned long long[temp_2]; // multiplicidad

  // ---------------------------------------------------- //
  // Este problema me costo muchos dias de trabajo, y al final resulto ser muy sencillo de resolver, pues el conteo de los numeros coprimos resulto ser la funcion euler, la cual puede ser eficientemente calculada.

  // FIXME Check all the different approaches, way too inefficient 
  tem_1d_1[0] = 2;
  temp_1 = 1;
  for( unsigned long long i=3; i<1000020; i=i+2 ){ // Calculo los primos 
    if( isprime(&i) ){
      tem_1d_1[temp_1] = i;
      temp_1++;
    }
  }

  temp_11 = 1000000;

  for( unsigned long long i=2; i<=temp_11; i++ ){ // numerador
    descoprimos( i, tem_1d_1, temp_1, tem_1d_2, tem_1d_3, temp_2, &temp_3 ); // encuentro los factores primos del numero
    temp_5 = i;
    for( unsigned long long j=0; j<temp_3; j++ ){ // Calculo el valor de la funcion phi
      temp_5 = temp_5*(tem_1d_2[j]-1)/tem_1d_2[j];
    }
    temp_6 = temp_6 + temp_5;
  }
  output = temp_6;



  // DEJO ESTO PA MOSTRAR TODO LO QUE LE SUFRI AL EJERCIOCIO TRATANDO DE SACARLO, AVECES SABER UN POCO DE TEORIA DE NUMEROS ME AHORRARIA MUCHISIMO TIEMPO
  //-------------------------------------------------------------------
// //   for( unsigned long long i=2; i<temp_11; i++ ){ // numerador
//  for( long long i=temp_11-1; i>=2; i-- ){ // numerador
//    descoprimos( i, tem_1d_1, temp_1, tem_1d_2, tem_1d_3, temp_2, &temp_3 ); // encuentro los factores primos del numero
//    cout<<endl<<i;
//    if( temp_3 == 1 ){
// // //      cout<<endl<<i<<" "<<(temp_11-i)<<" "<<(temp_11-i)/tem_1d_2[0];
//      temp_4 = temp_4 + (temp_11-i)-(temp_11-i)/tem_1d_2[0];
//    }
//    else if( temp_3 == 2 ){
// //       cout<<endl<<" L";
// //       cout<<endl<<temp_4<<" "<<temp_6<<" "<<temp_7<<" "<<temp_8;
//      temp_6 = tem_1d_2[0]*tem_1d_2[1];
//      temp_7 = temp_6 - tem_1d_2[1] - tem_1d_2[0] + 1;
//      temp_4 = temp_4 + temp_7*((temp_11-i)/temp_6);
//      temp_8 = (temp_11-i)%temp_6;
// //       cout<<endl<<temp_4<<" "<<temp_6<<" "<<temp_7<<" "<<temp_8<<" "<<(temp_11-i)%temp_6;
//      for( unsigned long long j=i+1; j<=i+temp_8; j++ ){ // numerador
//        temp_5 = 1;
//        for( unsigned long long k=0; k<temp_3; k++ ){
//          if( j%tem_1d_2[k] == 0 ){
//            temp_5 = 0;
//            break;
//          }
//        }
//        if( temp_5 == 1 ){
//          temp_4++;
//        }
//      }
// //       cout<<endl<<temp_4<<" "<<temp_6<<" "<<temp_7<<" "<<temp_8;
//    }
//    
//    else if( temp_3 >= 3 ){
// //       cout<<endl<<" L";
// //       cout<<endl<<temp_4<<" "<<temp_6<<" "<<temp_7<<" "<<temp_8;
//      temp_6 = 1;
// //       cout<<endl;
//      for( unsigned long long kk=0; kk<temp_3; kk++ ){
//        temp_6 = temp_6*tem_1d_2[kk];
// //         cout<<" "<<tem_1d_2[kk];
//      }
//      temp_8 = (temp_11-i)%temp_6;
//      temp_7 = temp_6/tem_1d_2[0];
//      temp_16 = temp_8;
//      for( unsigned long long uu=1; uu<=temp_7; uu++ ){
//        if( tem_1d_2[0]*uu<=temp_8 ){
//          temp_16--;
//        }
//        else{
//          break;
//        }
//      }
//      
//      for( unsigned long long k=1; k<temp_3; k++ ){
//        temp_15 = temp_6/tem_1d_2[k];
//        for( unsigned long long pp=1; pp<temp_15; pp++ ){
//          temp_7++;
// //           temp_16++;
//          temp_17 = 1;
//          for( unsigned long long ii=0; ii<k; ii++ ){
//            if( pp%tem_1d_2[ii]==0 ){
//              temp_7--;
//              temp_17 = 0;
//              break;
//            }
//          }
//          if( (temp_17 == 1) && (tem_1d_2[k]*pp<=temp_8) ){
// //             cout<<endl<<"M: "<<tem_1d_2[k]*pp;
//            temp_16--;
//          }
// //           if( tem_1d_2[k]*pp<=temp_8 ){
// //           }
//          
//        }
//      }
//      temp_7 = temp_6 - temp_7;
//      
//      temp_4 = temp_4 + temp_7*((temp_11-i)/temp_6);
//      temp_4 = temp_4 + temp_16;
//      
// //       cout<<endl<<i<<"  "<<temp_16<<" "<<temp_7<<"  "<<temp_8<<"  "<<temp_4;
// // //      cout<<endl<<temp_4<<" "<<temp_6<<" "<<temp_7<<" "<<temp_8<<" "<<(temp_11-i)%temp_6;
// //       for( unsigned long long j=1; j<=temp_8; j++ ){ // numerador
// //         temp_5 = 1;
// //         for( unsigned long long k=0; k<temp_3; k++ ){
// //           if( j%tem_1d_2[k] == 0 ){
// //             temp_5 = 0;
// //             break;
// //           }
// //         }
// //         if( temp_5 == 1 ){
// //           temp_4++;
// //         }
// //       }
// //       cout<<" "<<temp_4;
//    }
//    
//    else if( temp_3 >= 1 ){
// //       cout<<endl<<" L";
// //       cout<<endl<<temp_4<<" "<<temp_6<<" "<<temp_7<<" "<<temp_8;
//      temp_6 = 1;
//      for( unsigned long long kk=0; kk<temp_3; kk++ ){
//        temp_6 = temp_6*tem_1d_2[kk];
//      }
//      temp_8 = (temp_11-i)%temp_6;
//      temp_7 = 0;
//      for( unsigned long long kk=1; kk<=temp_6; kk++ ){
//        temp_5 = 1;
//        for( unsigned long long k=0; k<temp_3; k++ ){
//          if( kk%tem_1d_2[k] == 0 ){
//            temp_5 = 0;
//            break;
//          }
//        }
//        if( temp_5 == 1 ){
//          temp_7++;
//          if( (temp_8>=kk) && (temp_8!=0)){
//            temp_4++;
//          }
//        }
// 
//      }
//      
//      temp_4 = temp_4 + temp_7*((temp_11-i)/temp_6);
//      
// //       cout<<endl<<temp_4<<" "<<temp_6<<" "<<temp_7<<" "<<temp_8<<" "<<(temp_11-i)%temp_6;
// //       cout<<endl;
// //       for( unsigned long long j=i+1; j<=i+temp_8; j++ ){ // numerador
// //         temp_5 = 1;
// //         for( unsigned long long k=0; k<temp_3; k++ ){
// //           if( j%tem_1d_2[k] == 0 ){
// //             temp_5 = 0;
// //             break;
// //           }
// //         }
// //         if( temp_5 == 1 ){
// //           temp_4++;
// //           cout<<" "<<j-i;
// //         }
// //       }
// //       cout<<endl<<temp_4<<" "<<temp_6<<" "<<temp_7<<" "<<temp_8;
// //     }
//    
//      
//      
//      
// //     else{
// //     for( unsigned long long j=i+1; j<=temp_11; j++ ){ // numerador
// //       temp_5 = 1;
// // //      temp_7 = 1;
// // //      for( unsigned long long k=0; k<temp_3; k++ ){
// // //        temp_7 = temp_7*tem_1d_2[k];
// // //      }
// //       for( unsigned long long k=0; k<temp_3; k++ ){
// //         if( j%tem_1d_2[k] == 0 ){
// //           temp_5 = 0;
// //           break;
// //         }
// //       }
// //       if( temp_5 == 1 ){
// // //        cout<<endl<<i<<" "<<j;
// // //        cin>>temp_12;
// //         temp_4++;
// //       }
// //     }
//    }
//  }
//  cout<<endl;
//  output = temp_4;




  // FUERZA BRUTA
// // //  output = 0;
// // //  temp_2 = 10; // Cantidad maxima de primos en un determinado numero (2*3*5*7*11, etc)
// // //  tem_1d_1 = new unsigned long long[100000];
// // //  tem_1d_2 = new unsigned long long[temp_2];
// // //  tem_1d_3 = new unsigned long long[temp_2];
// // //  
// // //  // ---------------------------------------------------- //
// // //  
// // //  tem_1d_1[0] = 2;
// // //  temp_1 = 1;
// // //  for( unsigned long long i=3; i<1000020; i=i+2 ){ // Calculo los primos 
// // //    if( isprime(&i) ){
// // //      tem_1d_1[temp_1] = i;
// // //      temp_1++;
// // //    }
// // //  }
// // //  
// // // //   tedo_2 = 0;
// // // //   temp_4 = 999999; // Suma de las fracciones 1/2, 1/3 etc...
// // //  temp_4 = 7; // Suma de las fracciones 1/2, 1/3 etc...
// // //  
// // //  for( unsigned long long i=2; i<1000000; i++ ){ // numerador
// // //    descoprimos( i, tem_1d_1, temp_1, tem_1d_2, tem_1d_3, temp_2, &temp_3 ); // encuentro los factores primos del numero
// // //    cout<<endl<<i<<" "<<temp_7;
// // //    for( unsigned long long j=i+1; j<=1000000; j++ ){ // numerador
// // //      temp_5 = 1;
// // //      temp_7 = 1;
// // //      for( unsigned long long k=0; k<temp_3; k++ ){
// // //        temp_7 = temp_7*tem_1d_2[k];
// // //      }
// // //      for( unsigned long long k=0; k<temp_3; k++ ){
// // //        if( j%tem_1d_2[k] == 0 ){
// // //          temp_5 = 0;
// // //          break;
// // //        }
// // //      }
// // //      if( temp_5 == 1 ){
// // // //         cout<<endl<<i<<" "<<j;
// // // //         cin>>temp_12;
// // //        temp_4++;
// // //      }
// // //    }
// // //  }
// // //  output = temp_4;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0072 :: printsolution(){
  std::cout << "Euler 0072\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
