#include"eu0032.h"

void eu0032 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  //FIXME improve the code, and clean it
  for( unsigned long long i1=1; i1<10; i1++ ){
    for( unsigned long long i2=1; i2<10; i2++ ){
      if( i1!=i2 ){
      for( unsigned long long i3=1; i3<10; i3++ ){
        if( i3!=i2 && i3!=i1 ){
        temp_1 = i1*pow(10,2)+i2*pow(10,1)+i3;
        for( unsigned long long i4=1; i4<10; i4++ ){
          if( i4!=i3 && i4!=i2 && i4!=i1 ){
          temp_4 = i1*pow(10,3)+i2*pow(10,2)+i3*pow(10,1)+i4;
          for( unsigned long long i5=1; i5<10; i5++ ){
            if( i5!=i4 && i5!=i3 && i5!=i2 && i5!=i1 ){

              temp_2 = i4*pow(10,1)+i5;
              temp_3 = temp_1*temp_2;

              temp_5 = i5;
              temp_6 = temp_4*temp_5;

              if( temp_3<10000 && temp_3>999 ){

            for( unsigned long long i6=1; i6<10; i6++ ){
              if( i6!=i5 && i6!=i4 && i6!=i3 && i6!=i2 && i6!=i1 ){
              for( unsigned long long i7=1; i7<10; i7++ ){
                if( i7!=i6 && i7!=i5 && i7!=i4 && i7!=i3 && i7!=i2 && i7!=i1 ){
                for( unsigned long long i8=1; i8<10; i8++ ){
                  if( i8!=i7 && i8!=i6 && i8!=i5 && i8!=i4 && i8!=i3 && i8!=i2 && i8!=i1 ){
                  for( unsigned long long i9=1; i9<10; i9++ ){
                    if( i9!=i8 && i9!=i7 && i9!=i6 && i9!=i5 && i9!=i4 && i9!=i3 && i9!=i2 && i9!=i1 ){
                      temp_7 = i6*pow(10,3)+i7*pow(10,2)+i8*pow(10,1)+i9;
                      if( temp_7 == temp_3 ){
//                         cout<<endl<<" "<<temp_1<<" "<<temp_2<<" "<<temp_3;
                        output = output + temp_3;
                      }
                    }
                  }
                  }
                }
                }
              }
              }
            }

              }
              if( temp_6<10000 && temp_6>999 ){

            for( unsigned long long i6=1; i6<10; i6++ ){
              if( i6!=i5 && i6!=i4 && i6!=i3 && i6!=i2 && i6!=i1 ){
              for( unsigned long long i7=1; i7<10; i7++ ){
                if( i7!=i6 && i7!=i5 && i7!=i4 && i7!=i3 && i7!=i2 && i7!=i1 ){
                for( unsigned long long i8=1; i8<10; i8++ ){
                  if( i8!=i7 && i8!=i6 && i8!=i5 && i8!=i4 && i8!=i3 && i8!=i2 && i8!=i1 ){
                  for( unsigned long long i9=1; i9<10; i9++ ){
                    if( i9!=i8 && i9!=i7 && i9!=i6 && i9!=i5 && i9!=i4 && i9!=i3 && i9!=i2 && i9!=i1 ){
                      temp_7 = i6*pow(10,3)+i7*pow(10,2)+i8*pow(10,1)+i9;
                      if( temp_7 == temp_6 ){
//                         cout<<endl<<" "<<temp_4<<" "<<temp_5<<" "<<temp_6;
                        output = output + temp_6;
                      }
                    }
                  }
                  }
                }
                }
              }
              }
            }
              }
            }
          }
          }
        }
        }
      }
      }
    }
  }
//   cout<<endl;
  // Este programa todavia se puede mejorar mucho mas, colocando test antes de cada for, para abortar en los casos
  // en que el factor de la derecha q se forma (el producto) es mucho mayor que el resultado que se tenga de la
  // multiplicacion de la izquierda

  // Otra cosa es que no probe que los productos no se repitieran, siemplemente los reste del resultado final
  output = output - 5796 - 5346;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0032 :: printsolution(){
  std::cout << "Euler 0032\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
