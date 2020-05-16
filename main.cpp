#include <cmath>
#include <iostream> 

int main() {
  const int size = 256;
  int sinTable[size];
#pragma opm parallel for
  for (int i = 0; i < size; ++i) sinTable[i] = i;
#pragma omp parallel for
  for (int n = 0; n < size; ++n) std::cout<<sinTable[n]<<std::endl;

  // the table is now initialized
}