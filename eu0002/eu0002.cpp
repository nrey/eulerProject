#include"eu0002.h"

void eu0002 :: solucion(){
  // ---------------------------------------------------- //
  m_tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  m_output = 0;

  // ---------------------------------------------------- //

  temp_1 = 1;
  temp_2 = 2;
  temp_3 = 3;
  m_output = 2;
  while(1){
    temp_1 = temp_3 + temp_2;
    temp_2 = temp_1 + temp_3;
    temp_3 = temp_1 + temp_2;
    if( temp_2>4000000 ){
      break;
    }
    m_output += temp_2;
  }
  
  // ---------------------------------------------------- //
  m_tstop = (double)clock()/CLOCKS_PER_SEC;
  m_ttime = m_tstop-m_tstart;
  // ---------------------------------------------------- //
}

void eu0002 :: printsolution(){
  std::cout << "Euler 0002\n";
  std::cout << "Time: " << m_ttime << "\n";
  std::cout << m_output;
}
