// Number Counting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



int multiPoint(int n) {
    
    printf("\nCounting Multiples\n");

    int prev = ((n + 1) / 2) * (n / 2);

    for (int i = (n + 1) / 2; i <= n ; i++) {
        int sum = (n - i) * i;
        int roc = prev - sum;
        prev = sum;

        printf("%d x %d = %d, Change: %d\n", n - i, i, sum, roc);
    }
    return 0;
}

int squareShift(int n, int delta) {
    printf("\nCounting Multiples\n");

    int prev = 0;

    for (int i = 0; i < n + 1; i++) {
        int sum = i * (i + delta);
        int roc = sum - prev;
        prev = sum;

        printf("%d x %d = %d Change: %d\n", i, i + delta, sum, roc);
    }

    return 0;
}

int mulitOnes(int n) {
    printf("\nMultiple Ones Place: %d\n", n);
    
    for (int i = 1; i <= 10; i++) {
        int sum = (n * i) % 10;

        printf("%d : %d\n", i, sum);
    }

    return 0;
}

int mulitInTensPattern(int n) {
    printf("\nMultiple in Each Ten: %d\n", n);

    int count = 0;
    int range = 0;

    for (int i = 0; i < 10; i++){
        int ten = ((n * i) / 10);


        while (ten == range) {
            count++;
            i++;
            ten = ((n * i) / 10) % 10;
        }
            printf("%d : %d\n", range * 10, count);
            range++;
            count = 0;
            i--;
    }

    return 0;
}

int mulitInTensUntil100(int n) {
    printf("\nMultiple in Each Ten: %d\n", n);

    int multi = 0;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        int ten = ((n * multi) / 10) % 10;

        while (ten == i) {
            count++;
            multi++;
            ten = ((n * multi) / 10) % 10;
        }
        printf("%d : %d\n", i * 10, count);
        count = 0;
    }

    return 0;
}

int main()
{
    multiPoint(64); //x^2 + nx roc = x^2 - n^2
    squareShift(64, 0); // nth number = 2n + delta - 1
    mulitOnes(64); // pattern list
    mulitInTensPattern(64); // finds paterrn from multiple 0-9
    mulitInTensUntil100(64);// finds number of multiples under 100
 
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
