#include <iostream>

void fill(double *data, int nx, int ny);
double trace(const double *data, int nx, int ny);

int main(int argc, char *argv[]) {
    int nrows = 10;
    int ncols = 10;

    // get memory
    double * matrix = new double [nrows*ncols] {0.0};

    // fill the matrix
    fill(matrix, nrows, ncols);

    // compute and print the trace
    std::cout << trace(matrix, nrows, ncols) << std::endl;
    
    // release memory
    delete [] matrix;
    
    return 0;
}

void fill(double *data, int nx, int ny)
{
        
}


double trace(const double *data, int nx, int ny)
{
    
}
