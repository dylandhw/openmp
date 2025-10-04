#include <iostream>
#include <omp.h>
#include <math.h>

using namespace std;
#define PI acos(-1.0) // defining PI as the arccos of -1

int main(int argc, char* argv[]) {
    int N = stoi(argv[1]);

    double sum = 0;
    double start = omp_get_wtime(); // some quantity in seconds from the cpu


    #pragma omp parallel 
    {
        
        #pragma omp for reduction(+:sum) // to each thread, we are going to get some local sum, and add it all up very nicely
        for(int m = 0; m<N; m++) // this is essentially splitting the for loop amongst the threads
        {
            sum += sin(PI*double(m)/N);
        }

    }

    double end = omp_get_wtime();
    cout.precision(15);
    cout << "Answer: " << PI*sum/N << "\nCalculated in " << end-start << " seconds.\n";
}


/*
    double sum = 0;

    #pragma omp parallel 
    {
        double local_sum = 0;
        #pragma omp for // for loop
        for(int m = 0; m<N; m++) // this is essentially splitting the for loop amongst the threads
        {
            local_sum += sin(PI*double(m)/N);
        }
        sum += local_sum;
    }
*/