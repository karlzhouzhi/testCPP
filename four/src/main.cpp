#include <stdio.h>
#include <iostream>

#include "add.h"
#include "multiply.h"

using namespace std;

int main(){

    std::cout << "Hello World!" << std::endl;
    int i;

    demo d1;
    multiply d2;
    int addResult = d1.add2sum(1, 5);
    int multiplyResult = d2.multiply2num(2, 5);
    printf("add result = %d, multiply result = %d\n", addResult, multiplyResult);

    return 0;
}