#include <stdio.h>
#include <stdbool.h>

/* Function to check if a number is prime */
bool isPrime(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

/* Function to compute factorial of a number */
int factorial(int n) {
    int fact = 1;
    int i = 1; 
    while (i <= n) { 
        fact *= i;
        i++; 
    }
    return fact;
}

/* primeOrFactorial function */
const char* primeOrFactorial(int n) {
    static char result[50]; 
    
    if (n <= 1) {
        return "Invalid Input";
    } else if (isPrime(n)) {
        return "Prime Number";
    } else {
        sprintf(result, "%d", factorial(n));
        return result;
    }
}

/* UABIndexSum function */
int UABIndexSum(int arr[], int size) {
    int sum = 0;
    int i = 0; 
    while (i < size) { 
        if (arr[i] == i) {
            sum += arr[i];
        }
        i++;
    }
    return sum;
}

/* replaceEvenWithZero function */
void replaceEvenWithZero(int arr[], int size) {
    int i = 0; 
    while (i < size) { 
        if (arr[i] % 2 == 0) {
            arr[i] = 0;
        }
        i++; 
    }
}

/* evenSquare function */
bool evenSquare(int n) {
    int i = 2; 
    while (i * i <= n) { 
        if (i * i == n) {
            return true;
        }
        i += 2; 
    }
    return false;
}

/* countVowels function */
int countVowels(char* s) {
    int count = 0;
    int i = 0; 
    while (s[i] != '\0') { 
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
        i++; 
    }
    return count;
}

void runSampleTests() {
    printf("Sample Test - primeOrFactorial:\n");
    printf("primeOrFactorial(5): %s\n", primeOrFactorial(5)); 
    printf("primeOrFactorial(4): %s\n", primeOrFactorial(4));
    printf("primeOrFactorial(1): %s\n", primeOrFactorial(1)); 
    printf("primeOrFactorial(7): %s\n", primeOrFactorial(7)); 
    printf("primeOrFactorial(-3): %s\n", primeOrFactorial(-3)); 

    printf("\nSample Test - UABIndexSum:\n");
    int arr1[] = {0, 2, 2, 4};
    int arr2[] = {3, 1, 0, 4};
    int arr3[] = {1, 2, 3, 3};
    printf("UABIndexSum(arr1): Input: {0, 2, 2, 4}, Output: %d\n", UABIndexSum(arr1, 4)); 
    printf("UABIndexSum(arr2): Input: {3, 1, 0, 4}, Output: %d\n", UABIndexSum(arr2, 4)); 
    printf("UABIndexSum(arr3): Input: {1, 2, 3, 3}, Output: %d\n", UABIndexSum(arr3, 4)); 

    printf("\nSample Test - replaceEvenWithZero:\n");
    int arr4[] = {1, 2, 3, 4};
    replaceEvenWithZero(arr4, 4);
    printf("replaceEvenWithZero(arr4): Input: {1, 2, 3, 4}, Output: ");
    for (int i = 0; i < 4; i++) printf("%d ", arr4[i]); 
    printf("\n");

    printf("\nSample Test - evenSquare:\n");
    printf("evenSquare(16): %d\n", evenSquare(16)); 
    printf("evenSquare(15): %d\n", evenSquare(15)); 
    printf("evenSquare(25): %d\n", evenSquare(25)); 
    printf("evenSquare(36): %d\n", evenSquare(36)); 

    printf("\nSample Test - countVowels:\n");
    printf("countVowels(\"Hello World\"): %d\n", countVowels("Hello World")); 
    printf("countVowels(\"UAB CS\"): %d\n", countVowels("UAB CS")); 
    printf("countVowels(\"Python\"): %d\n", countVowels("Python")); 
    printf("countVowels(\"aeiou\"): %d\n", countVowels("aeiou")); 
}

void runCustomTests() {
    int choice;
    
    while (1) {
        printf("\nCustom Test Menu:\n");
        printf("1. Test primeOrFactorial\n");
        printf("2. Test UABIndexSum\n");
        printf("3. Test replaceEvenWithZero\n");
        printf("4. Test evenSquare\n");
        printf("5. Test countVowels\n");
        printf("6. Return to Main Menu\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int n;
                printf("\nEnter an integer for primeOrFactorial: ");
                scanf("%d", &n);
                printf("Result for primeOrFactorial(%d): %s\n", n, primeOrFactorial(n));
                break;
            }
            case 2: {
                int size;
                printf("\nEnter the size of the array for UABIndexSum: ");
                scanf("%d", &size);
                int arr1[size];
                printf("Enter the elements of the array: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr1[i]);
                }
                printf("Result for UABIndexSum: %d\n", UABIndexSum(arr1, size));
                break;
            }
            case 3: {
                int size;
                printf("\nEnter the size of the array for replaceEvenWithZero: ");
                scanf("%d", &size);
                int arr2[size];
                printf("Enter the elements of the array: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr2[i]);
                }
                replaceEvenWithZero(arr2, size);
                printf("Result for replaceEvenWithZero: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr2[i]);
                }
                printf("\n");
                break;
            }
            case 4: {
                int n;
                printf("\nEnter an integer for evenSquare: ");
                scanf("%d", &n);
                printf("Result for evenSquare(%d): %s\n", n, evenSquare(n) ? "True" : "False");
                break;
            }
            case 5: {
                char s[100];
                printf("\nEnter a string for countVowels: ");
                scanf(" %[^\n]%*c", s); 
                printf("Result for countVowels: %d\n", countVowels(s));
                break;
            }
            case 6:
                return; 
            default:
                printf("Invalid choice! Please enter a valid option (1-6).\n");
        }
    }
}

int main() {
    int choice;
    
    while (1) {
        printf("\nMain Menu:\n");
        printf("1. Run sample test cases from HomeWork 1\n");
        printf("2. Enter custom inputs\n");
        printf("3. Exit\n");
        printf("Enter your choice (1, 2, or 3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                runSampleTests();
                break;
            case 2:
                runCustomTests();
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please choose a valid option (1, 2, or 3).\n");
        }
    }
}
