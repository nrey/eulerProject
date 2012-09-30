#include"eu0002.h"

void eu0002 :: solucion(){
  // ---------------------------------------------------- //
  m_tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  m_output = 0;

  // ---------------------------------------------------- //

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
