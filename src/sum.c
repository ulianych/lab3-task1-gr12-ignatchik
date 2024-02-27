int sumOfDigits(int num);

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void findNumbersWithMaxDigitSum(int arr[], int size);

void findNumbersWithMaxDigitSum(int arr[], int size) {
    int maxSum = 0;
    for (int i = 0; i < size; i++) {
        int currentSum = sumOfDigits(arr[i]);
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Numbers with maximum digit sum:\n");
    for (int i = 0; i < size; i++) {
        if (sumOfDigits(arr[i]) == maxSum) {
            printf("%d\n", arr[i]);
        }
    }
}