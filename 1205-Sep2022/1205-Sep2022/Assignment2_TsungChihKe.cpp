#include <iostream>
void Assignment2() {
    int labArr[101];
    int i = 0;
    while (i < 101) {
        if (i == 0) {
            labArr[0] == 1;
        }
        else {
            labArr[i] = i * 10;    
        }
        std::cout << labArr[i] << std::endl;
        i++;
    } 
}