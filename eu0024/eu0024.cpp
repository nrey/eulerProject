#include"eu0024.h"

void eu0024 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[10];

  // ---------------------------------------------------- //

//   for( unsigned long long i=0; i<10; ++i ){
//     tem_1d_1[i] = 0;
//   }
  
  for( unsigned long long i=0; i<10; ++i ){
    for( tem_1d_1[i]=0; tem_1d_1[i]<10; tem_1d_1[i]++ ){
      bool flag = 0;
      for( unsigned long long j=0; j<i; ++j ){
        if( tem_1d_1[i] == tem_1d_1[j] ){
          flag = 1;
        }
      }
      if( flag==1)
      {
        break;
      }
    
      
//       {
        std::cout << std::endl;
        for( unsigned long long i=0; i<10; ++i ){
          std::cout << " " << tem_1d_1[i];
        }
        temp_1++;
        if(temp_1 == 1000000 ){
          output = 0;
            for( unsigned long long i=0; i<10; ++i ){
              output += tem_1d_1[i]*pow(10,9-i);
            }
//           output = i1*pow(10,9)+i2*pow(10,8)+i3*pow(10,7)+i4*pow(10,6)+i5*pow(10,5)+i6*pow(10,4)+i7*pow(10,3)+i8*pow(10,2)+i9*pow(10,1);
        }
//       }
    }
  }
        
    
  
  
//   temp_1 = 0;
//   for( unsigned long long i1=0; i1<10; i1++ ){
//     for( unsigned long long i2=0; i2<10; i2++ ){
//       if( i1!=i2 ){
//       for( unsigned long long i3=0; i3<10; i3++ ){
//         if( i3!=i2 && i3!=i1 ){
//         for( unsigned long long i4=0; i4<10; i4++ ){
//           if( i4!=i3 && i4!=i2 && i4!=i1 ){
//           for( unsigned long long i5=0; i5<10; i5++ ){
//             if( i5!=i4 && i5!=i3 && i5!=i2 && i5!=i1 ){
//             for( unsigned long long i6=0; i6<10; i6++ ){
//               if( i6!=i5 && i6!=i4 && i6!=i3 && i6!=i2 && i6!=i1 ){
//               for( unsigned long long i7=0; i7<10; i7++ ){
//                 if( i7!=i6 && i7!=i5 && i7!=i4 && i7!=i3 && i7!=i2 && i7!=i1 ){
//                 for( unsigned long long i8=0; i8<10; i8++ ){
//                   if( i8!=i7 && i8!=i6 && i8!=i5 && i8!=i4 && i8!=i3 && i8!=i2 && i8!=i1 ){
//                   for( unsigned long long i9=0; i9<10; i9++ ){
//                     if( i9!=i8 && i9!=i7 && i9!=i6 && i9!=i5 && i9!=i4 && i9!=i3 && i9!=i2 && i9!=i1 ){
//                       temp_1++;
//                       if(temp_1 == 1000000 ){
//                         output = i1*pow(10,9)+i2*pow(10,8)+i3*pow(10,7)+i4*pow(10,6)+i5*pow(10,5)+i6*pow(10,4)+i7*pow(10,3)+i8*pow(10,2)+i9*pow(10,1);
//                       }
// 
// //                      cout<<endl<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<" "<<i5<<" "<<i6<<" "<<i7<<" "<<i8<<" "<<i9;
//                     }
//                   }
//                   }
//                 }
//                 }
//               }
//               }
//             }
//             }
//           }
//           }
//         }
//         }
//       }
//       }
//     }
//   }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0024 :: printsolution(){
  std::cout << "Euler 0024\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
