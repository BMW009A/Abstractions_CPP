//
// Created by QCZ on 8/17/2024.
//
/*
 * File : RandTest.cpp
 * -------------------
 * This program tests the random number generator in C++ and produces
 * the values used in the examples in the project.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int N_TRIALS = 10;

unsigned int add_student(){

    unsigned int student_cout{0};
    student_cout++;

    return student_cout;

}

int main() {

    cout << "On this computer, RAND_MAX is " << RAND_MAX << endl;
    cout << "The first " << N_TRIALS << " calls to rand:" << endl;

    for (int i = 0; i < N_TRIALS; ++i) {

        cout << setw(10) << rand() << endl;

    }
    cout << "student count : " << add_student() << endl;
    cout << "student count : " << add_student() << endl;
    cout << "student count : " << add_student() << endl;

    return 0;

}