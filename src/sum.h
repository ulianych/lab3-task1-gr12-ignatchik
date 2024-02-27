//
//Created by Ulyana Ignatchik 27.02.2024
//
#ifndef SRC_SUM_H_
#include <stdio.h>
#include <stdlib.h>
#include "sum.c"
//int sumOfDigits(int num);
//count sum of digits of number
//Arguments:
//	int num - number
//Return:
//	int - sum of digits of number
int sumOfDigits(int num);
//void findNumbersWithMaxDigitSum(int arr[], int size)
//use function sumOfDigits, find numbers with max digit sum and print them
//Arguments:
//	int arr[] - array of numbers
//	int size - size of array
//Return:
//	void - nothing
void findNumbersWithMaxDigitSum(int arr[], int size);
#endif //SRC_SUM_H_