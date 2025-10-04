// going over parallel computing in C++ using OPENMP

#include <iostream>
#include <omp.h>
#include <math.h>

using namespace std;

#define PI acos(-1.0) // defining PI as the arccos of -1

int main(int argc, char* argv[]) {
  // initiate a parallel region:
  #pragma omp parallel
  { // will basically spawn the max num of threads to run inside this scope
    
    #pragma omp critical // only one thread can enter at a time..it will start a queue
    {
      cout << omp_get_thread_num() << "\n";
    }
  }
}


// OMP_NUM_THREAD=some_numer = flag for controlling number of threads