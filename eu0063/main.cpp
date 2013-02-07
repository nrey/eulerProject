#include"main.h"

int main()
{

  std::cout<<std::endl;
  euler* implement;
  implement = new eu0063();
  implement->solucion(); // time out
  implement->printsolution();
  delete implement;

  std::cout<<std::endl<<std::endl;
  return 0;

}
