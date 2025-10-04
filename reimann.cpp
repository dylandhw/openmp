#include <iostream>
#include <omp.h>
#include <math.h>

using namespace std;
#define PI acos(-1.0) // defining PI as the arccos of -1

int main(int argc, char* argv[]) {
    int N = stoi(argv[1]);

    double sum = 0;

    #pragma omp parallel
    {
        #pragma omp for // for loop
        for(int m = 0; m<N; m++) // this is essentially splitting the for loop amongst the threads
        {
            sum += sin(PI*double(m)/N);
        }
    }
    cout.precision(15);
    cout << "Answer: " << PI*sum/N << endl;
} 