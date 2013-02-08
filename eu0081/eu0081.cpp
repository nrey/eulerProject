#include"eu0081.h"

void eu0081 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_2d_1 = new unsigned long long *[80]; // La matriz donde se va a guardar la informacion
  for( unsigned long long i=0; i<80; i++ ){
    tem_2d_1[i] = new unsigned long long [80];
  }
  char uu[15];
//   char uu2[1];
//   uu2[0] = ",";

  // ---------------------------------------------------- //

  // FIXME understand the code
  myfile_read_1.open("/home/nicorv/aData/9_eulerProject/eulerProject/eu0081/eu0081_data.txt");
  myfile_read_1.setf( std::ios::fixed );

  for( unsigned long long i=0; i<80; i++ ){
//    cout<<endl;
//    cout<<endl;
    for( unsigned long long j=0; j<79; j++ ){
      myfile_read_1.get(uu, 15, ','); // OBTIENE O 15 CARACTERES O HASTA QUE ENCUENTRE EL DELIMITADOR UU2 ","
      tem_2d_1[i][j] = strtold(uu,0);
      myfile_read_1.ignore(1,' ');
//      cout<<tem_2d_1[i][j]<<" ";
    }
    myfile_read_1.get(uu, 10); // EL ULTIMO NO LE COLOCAMOS EL DELIMITADOR "," PUES SINO ME QUEDARIA SALTANDO UN NUMERO
    tem_2d_1[i][79] = strtold(uu,0);
//    cout<<tem_2d_1[i][79]<<"  ";
  }

  // Sumo los de la primera fila
  for( unsigned long long j=1; j<80; j++ ){
    tem_2d_1[0][j] = tem_2d_1[0][j] + tem_2d_1[0][j-1];
  }

  // Sumo los de la primera columna
  for( unsigned long long i=1; i<80; i++ ){
    tem_2d_1[i][0] = tem_2d_1[i][0] + tem_2d_1[i-1][0];
  }

  // Guardo la distancia mas corta a cada uno de los vertices
  for( unsigned long long i=1; i<80; i++ ){
    for( unsigned long long j=1; j<80; j++ ){
      temp_1 = tem_2d_1[i-1][j];
      temp_2 = tem_2d_1[i][j-1];
      if( temp_1<temp_2 ){
        tem_2d_1[i][j] = tem_2d_1[i][j] + temp_1;
      }
      else{
        tem_2d_1[i][j] = tem_2d_1[i][j] + temp_2;
      }
    }
  }
  output = tem_2d_1[79][79];

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0081 :: printsolution(){
  std::cout << "Euler 0081\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
