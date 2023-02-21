#include <iostream>
#include <chrono>
#include <random>

using namespace std;
using namespace std::chrono;

const int ROWS = 224;
const int COLS = 224;

// Multiply 2D array by 1D array (integer version)
void multiply(int arr[ROWS][COLS], int vec[COLS], int result[ROWS]) {
    for (int i = 0; i < ROWS; ++i) {
        result[i] = 0;
        for (int j = 0; j < COLS; ++j) {
            result[i] += arr[i][j] * vec[j];
        }
    }
}

// Multiply 2D array by 1D array (float version)
void multiply(float arr[ROWS][COLS], float vec[COLS], float result[ROWS]) {
    for (int i = 0; i < ROWS; ++i) {
        result[i] = 0;
        for (int j = 0; j < COLS; ++j) {
            result[i] += arr[i][j] * vec[j];
        }
    }
}

// Multiply 2D array by 1D array (long version)
void multiply(long arr[ROWS][COLS], long vec[COLS], long result[ROWS]) {
    for (int i = 0; i < ROWS; ++i) {
        result[i] = 0;
        for (int j = 0; j < COLS; ++j) {
            result[i] += arr[i][j] * vec[j];
        }
    }
}

// Multiply 2D array by 1D array (double version)
void multiply(double arr[ROWS][COLS], double vec[COLS], double result[ROWS]) {
    for (int i = 0; i < ROWS; ++i) {
        result[i] = 0;
        for (int j = 0; j < COLS; ++j) {
            result[i] += arr[i][j] * vec[j];
        }
    }
}

// Multiply 1D array by 2D array (integer version)
void multiply(int vec[COLS], int arr[ROWS][COLS], int result[COLS]) {
    for (int i = 0; i < COLS; ++i) {
        result[i] = 0;
        for (int j = 0; j < ROWS; ++j) {
            result[i] += vec[j] * arr[j][i];
        }
    }
}

// Multiply 1D array by 2D array (float version)
void multiply(float vec[COLS], float arr[ROWS][COLS], float result[COLS]) {
    for (int i = 0; i < COLS; ++i) {
        result[i] = 0;
        for (int j = 0; j < ROWS; ++j) {
            result[i] += vec[j] * arr[j][i];
        }
    }
}

// Multiply 1D array by 2D array (long version)
void multiply(long vec[COLS], long arr[ROWS][COLS], long result[COLS]) {
    for (int i = 0; i < COLS; ++i) {
        result[i] = 0;
        for (int j = 0; j < ROWS; ++j) {
            result[i] += vec[j] * arr[j][i];
        }
    }
}

int main() 
{
    int arr[ROWS][COLS];
    int vec[COLS];
    int result[ROWS];

    float arr_float[ROWS][COLS];
    float vec_float[COLS];
    float result_float[ROWS];

    long arr_long[ROWS][COLS];
    long vec_long[COLS];
    long result_long[ROWS];

    double arr_double[ROWS][COLS];
    double vec_double[COLS];
    double result_double[ROWS];

    int result_rev[COLS];
    float result_float_rev[COLS];
    long result_long_rev[COLS];

    srand(time(nullptr));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = std::rand() % 100; // Generate a random number between 0 and 99
        }
    }

    for (int i = 0; i < COLS; i++) {
        vec[i] = rand() % 100;
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr_float[i][j] = std::rand() % 100;
        }
    }

    for (int j = 0; j < COLS; ++j) {
        vec_float[j] = std::rand() % 100;
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr_long[i][j] = rand() % 100;
        }
    }

    for (int j = 0; j < COLS; ++j) {
        vec_long[j] = rand() % 100;
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr_double[i][j] = std::rand() % 100;
        }
    }

    for (int j = 0; j < COLS; ++j) {
        vec_double[j] = std::rand() % 100;
    }

    //auto start = high_resolution_clock::now();
    //multiply(arr, vec, result);
    //auto stop = high_resolution_clock::now();
    //auto duration = duration_cast<microseconds>(stop - start); // calculate the elapsed time
    //cout << "Time taken by int 2D 0N 1D function: " << duration.count() << " microseconds" << endl;

    //auto start_float = high_resolution_clock::now();
    //multiply(arr_float, vec_float, result_float);
    //auto stop_float = high_resolution_clock::now();
    //auto duration_float = duration_cast<microseconds>(stop_float - start_float); // calculate the elapsed time
    //cout << "Time taken by float 2D 0N 1D function: " << duration_float.count() << " microseconds" << endl;

    //auto start_long = high_resolution_clock::now();
    //multiply(arr_long, vec_long, result_long);
    //auto stop_long = high_resolution_clock::now();
    //auto duration_long = duration_cast<microseconds>(stop_long - start_long); // calculate the elapsed time
    //cout << "Time taken by long 2D 0N 1D function: " << duration_long.count() << " microseconds" << endl;

    //auto start_double = high_resolution_clock::now();
    //multiply(arr_double, vec_double, result_double);
    //auto stop_double = high_resolution_clock::now();
    //auto duration_double = duration_cast<microseconds>(stop_double - start_double); // calculate the elapsed time
    //cout << "Time taken by double 2D 0N 1D function: " << duration_double.count() << " microseconds" << endl;

    //auto start_reverse = high_resolution_clock::now();
    //multiply(vec, arr, result_rev);
    //auto stop_reverse = high_resolution_clock::now();
    //auto duration_reverse = duration_cast<microseconds>(stop_reverse - start_reverse); // calculate the elapsed time
    //cout << "Time taken by int 1D 0N 2D function: " << duration_reverse.count() << " microseconds" << endl;

    //auto start_reverse_float = high_resolution_clock::now();
    //multiply(vec_float, arr_float, result_float_rev);
    //auto stop_reverse_float = high_resolution_clock::now();
    //auto duration_reverse_float = duration_cast<microseconds>(stop_reverse_float - start_reverse_float); // calculate the elapsed time
    //cout << "Time taken by float 1D 0N 2D function: " << duration_reverse_float.count() << " microseconds" << endl;

    auto start_reverse_long = high_resolution_clock::now();
    multiply(vec_long, arr_long, result_long_rev);
    auto stop_reverse_long = high_resolution_clock::now();
    auto duration_reverse_long = duration_cast<microseconds>(stop_reverse_long - start_reverse_long); // calculate the elapsed time
    cout << "Time taken by long 1D 0N 2D function: " << duration_reverse_long.count() << " microseconds" << endl;

    return 0;
}