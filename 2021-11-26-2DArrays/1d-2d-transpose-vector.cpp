#include <iostream>
#include <vector>

int main(void)
{
    const int N = 4;

    std::vector<double> matrix, matrixT;
    matrix.resize(N*N);
    matrixT.resize(N*N);

// fill matrix
    for (int ii = 0; ii < N; ++ii) {
        for (int jj = 0; jj < N; ++jj) {
            matrix[ii*N + jj] = ii*N + jj;
        }
    }

// transpose and store into matrixT
    for (int ii = 0; ii < N; ++ii) {
        for (int jj = 0; jj < N; ++jj) {
            matrixT[ii*N + jj] = matrix[jj*N + ii];
        }
    }

// print the matrices
    std::cout << "Original matrix:\n";
    for (int ii = 0; ii < N; ++ii) {
        for (int jj = 0; jj < N; ++jj) {
            std::cout << matrix[ii*N + jj] <<  "  ";
        }
        std::cout << "\n";
    }

    std::cout << "Transposed matrix:\n";
    for (int ii = 0; ii < N; ++ii) {
        for (int jj = 0; jj < N; ++jj) {
            std::cout << matrixT[ii*N + jj] <<  "  ";
        }
        std::cout << "\n";
    }

    return 0;
}
