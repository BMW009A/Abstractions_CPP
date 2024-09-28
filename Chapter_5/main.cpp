//
// Created by QCZ on 9/27/2024.
//

/* File: RPNCalculator.cpp
* -----------------------
* This program simulates an electronic calculator that uses
* reverse Polish notation, in which the operators come after
* the operands to which they apply. Information for users
* of this application appears in the helpCommand function.
*/

#include <iostream>
#include <cctype>
#include <string>
//#include "errors.h" // There are some problems
#include "simpio.h"
#include "stack.h"
#include "strlib.h"

#include "RPNCalculator.hpp"

using namespace std;

int main(){

    cout << "RPN Calculator Simulation (type H for help)" << endl;
    Stack<double> operandStack;
    while (true) {
        string line = getLine("> ");
        if (line.length() == 0) line = "Q";
        char ch = toupper(line[0]);
        if (ch == 'Q') {
            break;
        } else if (ch == 'C') {
            operandStack.clear();
        } else if (ch == 'H') {
            helpCommand();
        } else if (ch == 'C') {
            operandStack.push(stringToReal(line));
        } else {
            applyOperator(ch, operandStack);
        }
    }
    return 0;
}