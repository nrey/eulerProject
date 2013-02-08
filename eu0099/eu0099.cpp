#include"eu0099.h"

void eu0099 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_2d_1 = new unsigned long long *[1001]; // La matriz donde se va a guardar la informacion
  for( unsigned long long i=0; i<1001; i++ ){
    tem_2d_1[i] = new unsigned long long [2];
  }
  char uu[15];
//   char* uu2 = ",";

  // ---------------------------------------------------- //

  myfile_read_1.open("/home/nicorv/aData/9_eulerProject/eulerProject/eu0099/eu0099_data.txt");
  myfile_read_1.setf( std::ios::fixed );

  for( unsigned long long i=0; i<1000; i++ ){
    for( unsigned long long j=0; j<1; j++ ){
      myfile_read_1.get(uu, 15, ','); // OBTIENE O 15 CARACTERES O HASTA QUE ENCUENTRE EL DELIMITADOR UU2 ","
      tem_2d_1[i][j] = strtold(uu,0);
      myfile_read_1.ignore(1,' ');
//      cout<<tem_2d_1[i][j]<<" ";
    }
    myfile_read_1.get(uu, 10); // EL ULTIMO NO LE COLOCAMOS EL DELIMITADOR "," PUES SINO ME QUEDARIA SALTANDO UN NUMERO
    tem_2d_1[i][1] = strtold(uu,0);
//    cout<<tem_2d_1[i][1]<<" ";
  }

  tedo_1 = (double)tem_2d_1[0][0];
  tedo_2 = (double)tem_2d_1[0][1];
  temp_1 = 1;
  for( unsigned long long i=1; i<=999; i++ ){
    tedo_3 = (double)tem_2d_1[i][0];
    tedo_4 = (double)tem_2d_1[i][1];
    tedo_6 = tedo_2/tedo_4;
    tedo_5 = (double) pow(tedo_1,tedo_6)/tedo_3;
    if( tedo_5<1 ){
      tedo_1 = tedo_3;
      tedo_2 = tedo_4;
      temp_1 = i+1;
    }
//    cout<<endl<<tedo_5; // UNA BUENA IDEA PARA MOSTRAR LOS NUMEORS QUE SON DE PRESICION MUY PARECIDA
//    tedo_5 = (tedo_5*100000)-100000;
//    cout<<endl<<tedo_5;
  }
  output = temp_1;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0099 :: printsolution(){
  std::cout << "Euler 0099\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
