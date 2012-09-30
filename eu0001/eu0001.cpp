#include"eu0001.h"

void eu0001 :: solucion(){
  // ---------------------------------------------------- //  
  m_tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //
 
  m_output = 0;

  // ---------------------------------------------------- //

  for( unsigned int i=1; i<1000; i++ ){
    if( i % 3 == 0 ){
      m_output += i;
      continue;
      }
    if( i % 5 == 0 ){
      m_output += i;
        continue;
      }
    }
        
  // ---------------------------------------------------- //
  m_tstop = (double)clock()/CLOCKS_PER_SEC;
  m_ttime = m_tstop-m_tstart;
  // ---------------------------------------------------- //
}

void eu0001 :: printsolution(){
  cout << "Euler 0001\n";
  cout << "Time: " << m_ttime << "\n";
  cout << m_output;
}

