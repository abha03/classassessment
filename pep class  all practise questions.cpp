#include <iostream>

int countDigits(int number) {
    int count = 0;
    
    // Handle negative numbers by taking the absolute value
    number = abs(number);
    
    while (number > 0) {
        number /= 10;
        count++;
    }
    
    return count;
}

int main() {
    int num;
    
    // Input from the user
    std::cout << "Enter an integer: ";
    std::cin >> num;
    
    // Calculate and display the number of digits
    int digitCount = countDigits(num);
    std::cout << "Number of digits: " << digitCount << std::endl;
    
    return 0;
}




#include <iostream>

int sumOfDigits(int number) {
    int sum = 0;
    
    // Handle negative numbers by taking the absolute value
    number = abs(number);
    
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    
    return sum;
}

int main() {
    int num;
    
    // Input from the user
    std::cout << "Enter an integer: ";
    std::cin >> num;
    
    // Calculate and display the sum of digits
    int digitSum = sumOfDigits(num);
    std::cout << "Sum of digits: " << digitSum << std::endl;
    
    return 0;
}







#include <iostream>

int reverseNumber(int number) {
    int reversed = 0;
    
    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    
    return reversed;
}

int main() {
    int num;
    
    // Input from the user
    std::cout << "Enter an integer: ";
    std::cin >> num;
    
    // Calculate and display the reverse of the number
    int reversedNum = reverseNumber(num);
    std::cout << "Reverse of the number: " << reversedNum << std::endl;
    
    return 0;
}





#include <iostream>
#include <cmath>

double power(double base, int exponent) {
    // Using the pow function from cmath library to calculate power
    return pow(base, exponent);
}

int main() {
    double base;
    int exponent;
    
    // Input from the user
    std::cout << "Enter the base: ";
    std::cin >> base;
    
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;
    
    // Calculate and display the result
    double result = power(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;
    
    return 0;
}







#include <iostream>

bool isPrime(int number) {
    // Handling special cases for 0 and 1
    if (number <= 1) {
        return false;
    }

    // Check for factors from 2 to the square root of the number
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // Found a factor, not a prime number
        }
    }

    return true; // No factors found, it's a prime number
}

int main() {
    int num;

    // Input from the user
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Check and display whether the number is prime or not
    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}





#include <iostream>


unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int num;

  
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;


    if (num < 0) {
        std::cerr << "Please enter a non-negative integer." << std::endl;
        return 1; 
    }

    // Calculate and display the factorial
    unsigned long long result = factorial(num);
    std::cout << "Factorial of " << num << " is: " << result << std::endl;

    return 0;
}







#include <iostream>

int sumDigits(int number) {
    int sum = 0;
    
    while (number > 0 || sum > 9) {
        if (number == 0) {
            number = sum;
            sum = 0;
        }
        sum += number % 10;
        number /= 10;
    }
    
    return sum;
}

int main() {
    int num;
    
    // Input from the user
    std::cout << "Enter an integer: ";
    std::cin >> num;
    
    // Calculate and display the sum until a single digit is obtained
    int result = sumDigits(num);
    std::cout << "Sum of digits until a single digit: " << result << std::endl;
    
    return 0;
}




#include <iostream>
#include <cmath>

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    
    return decimalNumber;
}

int main() {
    long long binaryNum;

    // Input from the user
    std::cout << "Enter a binary number: ";
    std::cin >> binaryNum;

    // Calculate and display the decimal equivalent
    int decimalNum = binaryToDecimal(binaryNum);
    std::cout << "Decimal equivalent: " << decimalNum << std::endl;

    return 0;
}



#include <iostream>

void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    std::cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        std::cout << next << " ";
    }

    std::cout << std::endl;
}

int main() {
    int terms;

    // Input from the user
    std::cout << "Enter the number of terms for the Fibonacci Series: ";
    std::cin >> terms;

    // Check for a non-negative number of terms
    if (terms < 0) {
        std::cerr << "Please enter a non-negative number of terms." << std::endl;
        return 1; // Exit with an error code
    }

    // Generate and display the Fibonacci Series
    generateFibonacci(terms);

    return 0;
}




#include <iostream>
#include <cmath>

bool isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits in the number
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++numDigits;
    }

    // Reset originalNumber to the initial value
    originalNumber = number;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += pow(digit, numDigits);
        originalNumber /= 10;
    }

    // Check if the sum is equal to the original number
    return sum == number;
}

int main() {
    int num;

    // Input from the user
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Check and display whether the number is an Armstrong number or not
    if (isArmstrong(num)) {
        std::cout << num << " is an Armstrong number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }

    return 0;
}




#include <iostream>

bool isPrime(int number) {
    // Handling special cases for 0 and 1
    if (number <= 1) {
        return false;
    }

    // Check for factors from 2 to the square root of the number
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // Found a factor, not a prime number
        }
    }

    return true; // No factors found, it's a prime number
}

void printPrimesInRange(int start, int end) {
    std::cout << "Prime numbers between " << start << " and " << end << ": ";
    
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
}

int main() {
    int start, end;

    // Input from the user
    std::cout << "Enter the starting number: ";
    std::cin >> start;

    std::cout << "Enter the ending number: ";
    std::cin >> end;

    // Check for valid range
    if (start > end) {
        std::cerr << "Invalid range. Please enter a valid range." << std::endl;
        return 1; // Exit with an error code
    }

    // Print prime numbers within the specified range
    printPrimesInRange(start, end);

    return 0;
}




#include <iostream>

bool isPrime(int number) {
    // Handling special cases for 0 and 1
    if (number <= 1) {
        return false;
    }

    // Check for factors from 2 to the square root of the number
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // Found a factor, not a prime number
        }
    }

    return true; // No factors found, it's a prime number
}

int sumOfPrimeDigits(int number) {
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        if (isPrime(digit)) {
            sum += digit;
        }
        number /= 10;
    }

    return sum;
}

int main() {
    int num;

    // Input from the user
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Calculate and display the sum of prime digits
    int primeDigitSum = sumOfPrimeDigits(num);
    std::cout << "Sum of prime digits: " << primeDigitSum << std::endl;

    return 0;
}




#include <iostream>
#include <cmath>

int binaryAddition(int binary1, int binary2) {
    int carry = 0, result = 0, placeValue = 1;

    while (binary1 != 0 || binary2 != 0 || carry != 0) {
        int bit1 = binary1 % 10;
        int bit2 = binary2 % 10;

        // Sum bits and the carry from the previous position
        int sum = bit1 + bit2 + carry;

        // Calculate the result bit and update the carry
        result += (sum % 2) * placeValue;
        carry = sum / 2;

        // Move to the next place value
        placeValue *= 10;

        // Move to the next digits
        binary1 /= 10;
        binary2 /= 10;
    }

    return result;
}

int main() {
    int binaryNum1, binaryNum2;

    // Input from the user
    std::cout << "Enter the first binary number: ";
    std::cin >> binaryNum1;

    std::cout << "Enter the second binary number: ";
    std::cin >> binaryNum2;

    // Perform binary addition and display the result
    int result = binaryAddition(binaryNum1, binaryNum2);
    std::cout << "Binary sum: " << result << std::endl;

    return 0;
}




#include <iostream>
#include <cmath>

int reverseDigits(int number) {
    int reversed = 0;

    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return reversed;
}

int halfReverse(int number) {
    int numDigits = log10(number) + 1;
    int halfDigits = numDigits / 2;
    
    int reversedSecondHalf = reverseDigits(number / pow(10, halfDigits));
    
    return static_cast<int>((number % static_cast<int>(pow(10, halfDigits))) * pow(10, halfDigits) + reversedSecondHalf);
}

int main() {
    int num;

    // Input from the user
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Calculate and display the half-reversed number
    int result = halfReverse(num);
    std::cout << "Half-reversed number: " << result << std::endl;

    return 0;
}




#include <iostream>

int findMinElement(const int arr[], int size) {
   
    if (size == 0) {
        std::cerr << "Array is empty." << std::endl;
        return -1;  // Return an invalid value to indicate an error
    }

    int minElement = arr[0];  // Assume the first element as the minimum

    // Iterate through the array to find the minimum element
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    return minElement;
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Find and display the minimum element
    int minElement = findMinElement(arr, size);
    if (minElement != -1) {
        std::cout << "Minimum element in the array: " << minElement << std::endl;
    }

    return 0;
}





#include <iostream>

void findMinElementIndex(const int arr[], int size, int &minElement, int &minIndex) {
    // Check for an empty array
    if (size == 0) {
        std::cerr << "Array is empty." << std::endl;
        minElement = -1;  // Return an invalid value to indicate an error
        minIndex = -1;
        return;
    }

    minElement = arr[0];  // Assume the first element as the minimum
    minIndex = 0;

    // Iterate through the array to find the minimum element and its index
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int minElement, minIndex;

    // Find and display the minimum element and its index
    findMinElementIndex(arr, size, minElement, minIndex);
    if (minElement != -1) {
        std::cout << "Minimum element in the array: " << minElement << std::endl;
        std::cout << "Index of the minimum element: " << minIndex << std::endl;
    }

    return 0;
}







#include <iostream>

void findMaxElementIndex(const int arr[], int size, int &maxElement, int &maxIndex) {
    // Check for an empty array
    if (size == 0) {
        std::cerr << "Array is empty." << std::endl;
        maxElement = -1;  // Return an invalid value to indicate an error
        maxIndex = -1;
        return;
    }

    maxElement = arr[0];  // Assume the first element as the maximum
    maxIndex = 0;

    // Iterate through the array to find the maximum element and its index
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int maxElement, maxIndex;

    // Find and display the maximum element and its index
    findMaxElementIndex(arr, size, maxElement, maxIndex);
    if (maxElement != -1) {
        std::cout << "Maximum element in the array: " << maxElement << std::endl;
        std::cout << "Index of the maximum element: " << maxIndex << std::endl;
    }

    return 0;
}



#include <iostream>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move to the next pair of elements
        start++;
        end--;
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, size);

    // Display the reversed array
    std::cout << "Reversed array: ";
    printArray(arr, size);

    return 0;
}




#include <iostream>

bool isSortedAscending(const int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;  // If any element is smaller than the previous one, the array is not sorted
        }
    }
    return true;  // If no such element is found, the array is sorted in ascending order
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Check if the array is sorted in ascending order
    if (isSortedAscending(arr, size)) {
        std::cout << "The array is sorted in ascending order." << std::endl;
    } else {
        std::cout << "The array is not sorted in ascending order." << std::endl;
    }

    return 0;
}



#include <iostream>

int linearSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;  // Return the index where the target is found
        }
    }
    return -1;  // Return -1 if the target is not found in the array
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size, target;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Enter the target element to search: ";
    std::cin >> target;

    // Perform linear search
    int result = linearSearch(arr, size, target);

    // Display the result
    if (result != -1) {
        std::cout << "Target element " << target << " found at index " << result << "." << std::endl;
    } else {
        std::cout << "Target element " << target << " not found in the array." << std::endl;
    }

    return 0;
}










#include <iostream>

int binarySearch(const int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // Return the index where the target is found
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Return -1 if the target is not found in the array
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size, target;

    // Input from the user
    std::cout << "Enter the size of the sorted array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the sorted array in ascending order:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Enter the target element to search: ";
    std::cin >> target;

    // Perform binary search
    int result = binarySearch(arr, size, target);

    // Display the result
    if (result != -1) {
        std::cout << "Target element " << target << " found at index " << result << "." << std::endl;
    } else {
        std::cout << "Target element " << target << " not found in the array." << std::endl;
    }

    return 0;
}







#include <iostream>

void leftRotate(int arr[], int size, int rotateBy) {
    rotateBy %= size;  // Ensure the rotation value is within the array size

    // Temporary array to store the rotated elements
    int temp[size];

    // Copy elements to the temporary array after rotation
    for (int i = 0; i < size; ++i) {
        temp[i] = arr[(i + rotateBy) % size];
    }

    // Copy elements back to the original array
    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size, rotateBy;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Enter the number of positions to left rotate: ";
    std::cin >> rotateBy;

    // Perform left rotation
    leftRotate(arr, size, rotateBy);

    // Display the array after left rotation
    std::cout << "Array after left rotation: ";
    printArray(arr, size);

    return 0;
}





#include <iostream>

void rightRotate(int arr[], int size, int rotateBy) {
    rotateBy %= size;  // Ensure the rotation value is within the array size

    // Temporary array to store the rotated elements
    int temp[size];

    // Copy elements to the temporary array after rotation
    for (int i = 0; i < size; ++i) {
        temp[i] = arr[(i - rotateBy + size) % size];
    }

    // Copy elements back to the original array
    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size, rotateBy;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Enter the number of positions to right rotate: ";
    std::cin >> rotateBy;

    // Perform right rotation
    rightRotate(arr, size, rotateBy);

    // Display the array after right rotation
    std::cout << "Array after right rotation: ";
    printArray(arr, size);

    return 0;
}




#include <iostream>

void rightRotate(int arr[], int size, int rotateBy) {
    rotateBy %= size;  // Ensure the rotation value is within the array size

    // Temporary array to store the rotated elements
    int temp[size];

    // Copy elements to the temporary array after rotation
    for (int i = 0; i < size; ++i) {
        temp[i] = arr[(i - rotateBy + size) % size];
    }

    // Copy elements back to the original array
    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size, rotateBy;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Enter the number of positions to right rotate: ";
    std::cin >> rotateBy;

    // Perform right rotation
    rightRotate(arr, size, rotateBy);

    // Display the array after right rotation
    std::cout << "Array after right rotation: ";
    printArray(arr, size);

    return 0;
}



#include <iostream>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Perform bubble sort
    bubbleSort(arr, size);

    // Display the sorted array
    std::cout << "Array after Bubble Sort: ";
    printArray(arr, size);

    return 0;
}




#include <iostream>
#include <unordered_set>

void findDuplicates(const int arr[], int size) {
    std::unordered_set<int> hashSet;
    std::unordered_set<int> duplicates;

    for (int i = 0; i < size; ++i) {
        // If the element is not in the hashSet, add it
        if (hashSet.find(arr[i]) == hashSet.end()) {
            hashSet.insert(arr[i]);
        } else {
            // If the element is already in the hashSet, it's a duplicate
            duplicates.insert(arr[i]);
        }
    }

    // Print the duplicate elements
    if (!duplicates.empty()) {
        std::cout << "Duplicate elements: ";
        for (int duplicate : duplicates) {
            std::cout << duplicate << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No duplicates found." << std::endl;
    }
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Find and print duplicate elements using hashing
    findDuplicates(arr, size);

    return 0;
}




#include <iostream>

void findDuplicates(const int arr[], int size) {
    bool foundDuplicate = false;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                foundDuplicate = true;
                std::cout << "Duplicate elements found: " << arr[i] << std::endl;
            }
        }
    }

    if (!foundDuplicate) {
        std::cout << "No duplicates found." << std::endl;
    }
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Find and print duplicate elements using the naive approach
    findDuplicates(arr, size);

    return 0;
}



#include <iostream>

void mergeSortedArrays(const int arr1[], int size1, const int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Merge arrays until one of them is exhausted
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // Copy the remaining elements from arr1, if any
    while (i < size1) {
        result[k++] = arr1[i++];
    }

    // Copy the remaining elements from arr2, if any
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;  // Maximum size of the arrays
    int arr1[maxSize], arr2[maxSize], result[maxSize * 2];
    int size1, size2;

    // Input from the user for the first array
    std::cout << "Enter the size of the first sorted array: ";
    std::cin >> size1;

    if (size1 <= 0 || size1 > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the first sorted array:" << std::endl;
    for (int i = 0; i < size1; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr1[i];
    }

    // Input from the user for the second array
    std::cout << "Enter the size of the second sorted array: ";
    std::cin >> size2;

    if (size2 <= 0 || size2 > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the second sorted array:" << std::endl;
    for (int i = 0; i < size2; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr2[i];
    }

    // Merge the two sorted arrays
    mergeSortedArrays(arr1, size1, arr2, size2, result);

    // Display the merged array
    std::cout << "Merged sorted array: ";
    printArray(result, size1 + size2);

    return 0;
}




#include <iostream>
#include <algorithm>

int findKthMaximum(const int arr[], int size, int k) {
    // Check for valid k value
    if (k <= 0 || k > size) {
        std::cerr << "Invalid k value." << std::endl;
        return -1;  // Return an invalid value to indicate an error
    }

    // Create a copy of the array and sort it in descending order
    int sortedArray[size];
    std::copy(arr, arr + size, sortedArray);
    std::sort(sortedArray, sortedArray + size, std::greater<int>());

    // Return the kth maximum element
    return sortedArray[k - 1];
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size, k;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    // Find and display the kth maximum element
    int kthMax = findKthMaximum(arr, size, k);
    if (kthMax != -1) {
        std::cout << "The " << k << "th maximum element in the array is: " << kthMax << std::endl;
    }

    return 0;
}





#include <iostream>
#include <algorithm>

void alternateSort(int arr[], int size) {
    // Sort the array in ascending order
    std::sort(arr, arr + size);

    // Create an auxiliary array to store the result
    int result[size];
    int left = 0, right = size - 1;

    // Fill the result array in alternate fashion
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            result[i] = arr[right--];
        } else {
            result[i] = arr[left++];
        }
    }

    // Copy the result array back to the original array
    std::copy(result, result + size, arr);
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Perform alternate sorting
    alternateSort(arr, size);

    // Display the array after alternate sorting
    std::cout << "Array after alternate sorting: ";
    printArray(arr, size);

    return 0;
}



#include <iostream>

void findGreaterElements(const int arr[], int size) {
    if (size <= 0) {
        std::cerr << "Invalid array size." << std::endl;
        return;
    }

    // The first element is always greater than its previous elements
    std::cout << "Elements greater than all previous elements: " << arr[0] << " ";

    // Traverse the array to find elements greater than all previous elements
    int maxSoFar = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxSoFar) {
            std::cout << arr[i] << " ";
            maxSoFar = arr[i];
        }
    }

    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Find and display elements greater than all previous elements
    findGreaterElements(arr, size);

    return 0;
}



#include <iostream>

void addArrays(const int arr1[], const int arr2[], int size, int result[]) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;  // Maximum size of the arrays
    int arr1[maxSize], arr2[maxSize], result[maxSize];
    int size;

    // Input from the user for the arrays
    std::cout << "Enter the size of the arrays: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    // Input for the first array
    std::cout << "Enter the elements of the first array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr1[i];
    }

    // Input for the second array
    std::cout << "Enter the elements of the second array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr2[i];
    }

    // Add the two arrays
    addArrays(arr1, arr2, size, result);

    // Display the result array
    std::cout << "Resultant array after addition: ";
    printArray(result, size);

    return 0;
}




#include <iostream>
#include <unordered_set>
#include <vector>

void findAndPrintDuplicates(const int arr[], int size) {
    std::unordered_set<int> seen;
    std::vector<int> duplicates;

    for (int i = 0; i < size; ++i) {
        // If the element is not in the set, add it
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
        } else {
            // If the element is already in the set, it's a duplicate
            duplicates.push_back(arr[i]);
        }
    }

    // Print the duplicate elements in the order they appear
    if (!duplicates.empty()) {
        std::cout << "Duplicate elements (in order): ";
        for (int duplicate : duplicates) {
            std::cout << duplicate << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No duplicates found." << std::endl;
    }
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Find and print duplicate elements with the same order
    findAndPrintDuplicates(arr, size);

    return 0;
}



#include <iostream>

void findExtraElement(const int arr1[], const int arr2[], int size1, int size2) {
    // Find the size of the smaller array
    int smallerSize = (size1 < size2) ? size1 : size2;

    // Compare elements until the smaller array is exhausted
    for (int i = 0; i < smallerSize; ++i) {
        if (arr1[i] != arr2[i]) {
            // Extra element found
            std::cout << "Extra element: " << arr1[i] << std::endl;
            std::cout << "Index in the first array: " << i << std::endl;
            return;
        }
    }

    // If no extra element is found in the common part of the arrays,
    // the extra element is in the larger array at the last position
    if (size1 > size2) {
        std::cout << "Extra element: " << arr1[size1 - 1] << std::endl;
        std::cout << "Index in the first array: " << size1 - 1 << std::endl;
    } else if (size1 < size2) {
        std::cout << "Extra element: " << arr2[size2 - 1] << std::endl;
        std::cout << "Index in the second array: " << size2 - 1 << std::endl;
    } else {
        std::cout << "No extra element found." << std::endl;
    }
}

int main() {
    const int maxSize = 100;  // Maximum size of the arrays
    int arr1[maxSize], arr2[maxSize];
    int size1, size2;

    // Input from the user for the first array
    std::cout << "Enter the size of the first array: ";
    std::cin >> size1;

    if (size1 <= 0 || size1 > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the first array:" << std::endl;
    for (int i = 0; i < size1; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr1[i];
    }

    // Input from the user for the second array
    std::cout << "Enter the size of the second array: ";
    std::cin >> size2;

    if (size2 <= 0 || size2 > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the second array:" << std::endl;
    for (int i = 0; i < size2; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr2[i];
    }

    // Find and print the extra element and its index
    findExtraElement(arr1, arr2, size1, size2);

    return 0;
}



#include <iostream>
#include <unordered_map>

void findExtraElement(const int arr1[], const int arr2[], int size1, int size2) {
    std::unordered_map<int, int> frequencyMap;

    // Count occurrences in the first array
    for (int i = 0; i < size1; ++i) {
        frequencyMap[arr1[i]]++;
    }

    // Decrease occurrences for elements in the second array
    for (int i = 0; i < size2; ++i) {
        frequencyMap[arr2[i]]--;
    }

    // Find the element with a non-zero occurrence in the map
    for (const auto& pair : frequencyMap) {
        if (pair.second != 0) {
            // Extra element found
            std::cout << "Extra element: " << pair.first << std::endl;

            // Find the index of the extra element in the first array
            for (int i = 0; i < size1; ++i) {
                if (arr1[i] == pair.first) {
                    std::cout << "Index in the first array: " << i << std::endl;
                    return;
                }
            }
        }
    }

    std::cout << "No extra element found." << std::endl;
}

int main() {
    const int maxSize = 100;  // Maximum size of the arrays
    int arr1[maxSize], arr2[maxSize];
    int size1, size2;

    // Input from the user for the first array
    std::cout << "Enter the size of the first array: ";
    std::cin >> size1;

    if (size1 <= 0 || size1 > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the first array:" << std::endl;
    for (int i = 0; i < size1; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr1[i];
    }

    // Input from the user for the second array
    std::cout << "Enter the size of the second array: ";
    std::cin >> size2;

    if (size2 <= 0 || size2 > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the second array:" << std::endl;
    for (int i = 0; i < size2; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr2[i];
    }

    // Find and print the extra element and its index
    findExtraElement(arr1, arr2, size1, size2);

    return 0;
}





#include <iostream>
#include <stack>
#include <vector>

void findImmediateGreater(const int arr[], int size) {
    std::vector<int> result(size, -1);  // Initialize with -1 as default value
    std::stack<int> stack;

    for (int i = 0; i < size; ++i) {
        while (!stack.empty() && arr[i] > arr[stack.top()]) {
            // Set the next greater element for elements in the stack
            result[stack.top()] = arr[i];
            stack.pop();
        }

        // Push the current index onto the stack
        stack.push(i);
    }

    // Print the result
    std::cout << "Immediate greater elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ": ";
        if (result[i] != -1) {
            std::cout << result[i];
        } else {
            std::cout << "No greater element";
        }
        std::cout << std::endl;
    }
}

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];
    int size;

    // Input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;  // Return an error code
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Find and print the immediate greater elements
    findImmediateGreater(arr, size);

    return 0;
}






#include <iostream>
#include <vector>

void findCombinations(int target, int start, std::vector<int>& path, std::vector<std::vector<int>>& result) {
    if (target == 0) {
        result.push_back(path);
        return;
    }

    for (int i = start; i <= target; ++i) {
        if (i > target) {
            break;
        }
        path.push_back(i);
        findCombinations(target - i, i, path, result);
        path.pop_back();
    }
}

std::vector<std::vector<int>> allCombinations(int target) {
    std::vector<std::vector<int>> result;
    std::vector<int> path;
    findCombinations(target, 1, path, result);
    return result;
}

int main() {
    int targetSum = 5;
    std::vector<std::vector<int>> combinations = allCombinations(targetSum);

    std::cout << "All combinations that sum up to " << targetSum << ":\n";
    for (const auto& combination : combinations) {
        std::cout << "[ ";
        for (int num : combination) {
            std::cout << num << " ";
        }
        std::cout << "]\n";
    }

    return 0;
}






#include <iostream>
#include <unordered_map>
#include <vector>

void printDuplicateOccurrences(const std::vector<int>& arr) {
    std::unordered_map<int, int> occurrenceMap;

    for (int num : arr) {
        occurrenceMap[num]++;
    }

    bool duplicatesFound = false;

    for (const auto& pair : occurrenceMap) {
        if (pair.second > 1) {
            duplicatesFound = true;
            std::cout << "Element " << pair.first << " occurs " << pair.second << " times.\n";
        }
    }

    if (!duplicatesFound) {
        std::cout << "No duplicates found.\n";
    }
}

int main() {
    std::vector<int> array = {1, 2, 3, 4, 1, 2, 3, 5, 6, 7, 8, 7, 9};

    std::cout << "Duplicate occurrences in the array:\n";
    printDuplicateOccurrences(array);

    return 0;
}






#include <iostream>
#include <vector>
#include <algorithm>

void printDuplicateOccurrences(const std::vector<int>& arr) {
    std::vector<int> sortedArray = arr;  // Create a copy to avoid modifying the original array
    std::sort(sortedArray.begin(), sortedArray.end());

    bool duplicatesFound = false;
    int n = sortedArray.size();

    for (int i = 0; i < n - 1; ++i) {
        if (sortedArray[i] == sortedArray[i + 1]) {
            duplicatesFound = true;
            int count = 2;  // Initialize count to 2, as we've found a pair of duplicates
            while (i + count < n && sortedArray[i] == sortedArray[i + count]) {
                ++count;  // Count additional occurrences of the same element
            }

            std::cout << "Element " << sortedArray[i] << " occurs " << count << " times.\n";

            // Skip the rest of the occurrences of the same element
            i += count - 1;
        }
    }

    if (!duplicatesFound) {
        std::cout << "No duplicates found.\n";
    }
}

int main() {
    std::vector<int> array = {1, 2, 3, 4, 1, 2, 3, 5, 6, 7, 8, 7, 9};

    std::cout << "Duplicate occurrences in the array:\n";
    printDuplicateOccurrences(array);

    return 0;
}




#include <iostream>
#include <vector>

void reverseKElements(std::vector<int>& arr, int k) {
    int n = arr.size();

    for (int i = 0; i < n; i += k) {
        int left = i;
        int right = std::min(i + k - 1, n - 1);

        while (left < right) {
            std::swap(arr[left], arr[right]);
            ++left;
            --right;
        }
    }
}

int main() {
    std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3;

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    reverseKElements(array, k);

    std::cout << "Array after reversing every " << k << " elements: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}




#include <iostream>
#include <vector>

void replaceWithGreatestOnRight(std::vector<int>& arr) {
    int n = arr.size();
    int maxRight = arr[n - 1];
    arr[n - 1] = -1;  // The last element is replaced with -1 as there is no element on its right.

    for (int i = n - 2; i >= 0; --i) {
        int currentElement = arr[i];
        arr[i] = maxRight;  // Replace the current element with the maximum on its right.
        maxRight = std::max(maxRight, currentElement);  // Update the maximum if needed.
    }
}

int main() {
    std::vector<int> array = {16, 17, 4, 3, 5, 2};
    
    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    replaceWithGreatestOnRight(array);

    std::cout << "Array after replacing each element with the greatest on its right: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}





#include <iostream>
#include <vector>

void countDivisionAndModulus(const std::vector<int>& arr, int divisor) {
    int divisibleCount = 0;

    std::cout << "Results for divisor " << divisor << ":\n";

    for (int num : arr) {
        if (num % divisor == 0) {
            ++divisibleCount;
        }

        int modulusResult = num % divisor;

        std::cout << "Element " << num << ": ";
        std::cout << "Divisible by " << divisor << ": " << (num % divisor == 0 ? "Yes" : "No");
        std::cout << ", Modulus: " << modulusResult << "\n";
    }

    std::cout << "Total elements divisible by " << divisor << ": " << divisibleCount << "\n";
}

int main() {
    std::vector<int> array = {10, 20, 30, 15, 25, 5};
    int divisor = 5;

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    countDivisionAndModulus(array, divisor);

    return 0;
}





#include <iostream>
#include <vector>

void findPairsWithSum(const std::vector<int>& arr, int targetSum) {
    int n = arr.size();
    bool foundPair = false;

    std::cout << "Pairs with sum " << targetSum << ":\n";

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == targetSum) {
                std::cout << "(" << arr[i] << ", " << arr[j] << ")\n";
                foundPair = true;
            }
        }
    }

    if (!foundPair) {
        std::cout << "No pairs found with the given sum.\n";
    }
}

int main() {
    std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int targetSum = 10;

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    findPairsWithSum(array, targetSum);

    return 0;
}





#include <iostream>
#include <vector>

int findMaxInRange(const std::vector<int>& arr, int start, int end) {
    if (start < 0 || start >= arr.size() || end < 0 || end >= arr.size() || start > end) {
        std::cerr << "Invalid range\n";
        return -1;  // Return an invalid value to indicate an error
    }

    int maxElement = arr[start];

    for (int i = start + 1; i <= end; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    std::vector<int> array = {5, 3, 9, 8, 2, 7, 1, 6};
    int start = 2;  // Starting index of the range
    int end = 5;    // Ending index of the range

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    int maxInRange = findMaxInRange(array, start, end);

    if (maxInRange != -1) {
        std::cout << "Maximum element in the range [" << start << ", " << end << "]: " << maxInRange << "\n";
    }

    return 0;
}





#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

bool compareByOccurrences(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second > b.second; // Compare by occurrences in descending order
}

void sortByOccurrences(std::vector<int>& arr) {
    std::unordered_map<int, int> occurrences;

    // Count occurrences of each element
    for (int num : arr) {
        occurrences[num]++;
    }

    // Convert occurrences map to a vector of pairs
    std::vector<std::pair<int, int>> occurrencesVector;
    for (const auto& entry : occurrences) {
        occurrencesVector.push_back(entry);
    }

    // Sort based on occurrences using the custom comparator
    std::sort(occurrencesVector.begin(), occurrencesVector.end(), compareByOccurrences);

    // Reconstruct the sorted array
    int index = 0;
    for (const auto& entry : occurrencesVector) {
        int num = entry.first;
        int count = entry.second;
        for (int i = 0; i < count; ++i) {
            arr[index++] = num;
        }
    }
}

int main() {
    std::vector<int> array = {4, 2, 8, 3, 3, 1, 4, 2, 5, 4};

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    sortByOccurrences(array);

    std::cout << "Array sorted by occurrences: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}





#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int findLeastPrime() {
    int num = 2; // Start from the smallest prime number

    while (!isPrime(num)) {
        ++num;
    }

    return num;
}

int main() {
    int leastPrime = findLeastPrime();

    std::cout << "The least prime number is: " << leastPrime << std::endl;

    return 0;
}




#include <iostream>
#include <vector>

void printJumpK(const std::vector<int>& arr, int k) {
    int n = arr.size();

    std::cout << "Array elements jumping " << k << " indices at a time:\n";

    for (int i = 0; i < n; i += k) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
}

int main() {
    std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int jump = 2;

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    printJumpK(array, jump);

    return 0;
}




#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

bool compareOccurrences(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first < b.first; // Compare by element value in ascending order
}

void printOccurrencesInAscending(const std::vector<int>& arr) {
    std::unordered_map<int, int> occurrences;

    // Count occurrences of each element
    for (int num : arr) {
        occurrences[num]++;
    }

    // Convert occurrences map to a vector of pairs
    std::vector<std::pair<int, int>> occurrencesVector;
    for (const auto& entry : occurrences) {
        occurrencesVector.push_back(entry);
    }

    // Sort based on element values using the custom comparator
    std::sort(occurrencesVector.begin(), occurrencesVector.end(), compareOccurrences);

    // Print occurrences in ascending order
    std::cout << "Occurrences in ascending order:\n";
    for (const auto& entry : occurrencesVector) {
        std::cout << "Element " << entry.first << ": " << entry.second << " times\n";
    }
}

int main() {
    std::vector<int> array = {4, 2, 8, 3, 3, 1, 4, 2, 5, 4};

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    printOccurrencesInAscending(array);

    return 0;
}




#include <iostream>
#include <vector>

int maxSubArraySum(const std::vector<int>& nums) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        currentSum = std::max(nums[i], currentSum + nums[i]);
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    std::vector<int> array = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    int maxSum = maxSubArraySum(array);

    std::cout << "Maximum sum of a continuous subarray: " << maxSum << "\n";

    return 0;
}





#include <iostream>
#include <vector>

int maxPositiveSubArraySum(const std::vector<int>& nums) {
    int currentSum = 0;
    int maxSum = 0;

    for (int num : nums) {
        if (num > 0) {
            currentSum += num;
            maxSum = std::max(maxSum, currentSum);
        } else {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    std::vector<int> array = {1, 2, -3, 4, -1, 2, 1, -5, 4};

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    int maxPositiveSum = maxPositiveSubArraySum(array);

    std::cout << "Maximum sum of a subarray with only positive elements: " << maxPositiveSum << "\n";

    return 0;
}





#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> longestContinuousRange(const std::vector<int>& nums) {
    std::unordered_set<int> numSet(nums.begin(), nums.end());
    
    int longestStart = 0;
    int longestLength = 0;

    for (int num : nums) {
        if (numSet.find(num) == numSet.end()) {
            continue; // Skip if the element is already visited
        }

        int currentNum = num;
        int currentLength = 0;

        // Check and extend range to the left
        while (numSet.find(currentNum) != numSet.end()) {
            numSet.erase(currentNum);
            currentNum--;
            currentLength++;
        }

        // Check and extend range to the right
        currentNum = num + 1;
        while (numSet.find(currentNum) != numSet.end()) {
            numSet.erase(currentNum);
            currentNum++;
            currentLength++;
        }

        // Update longest range if needed
        if (currentLength > longestLength) {
            longestStart = currentNum - currentLength;
            longestLength = currentLength;
        }
    }

    // Reconstruct the longest range
    std::vector<int> result;
    for (int i = longestStart; i < longestStart + longestLength; ++i) {
        result.push_back(i);
    }

    return result;
}

int main() {
    std::vector<int> array = {1, 9, 3, 10, 4, 20, 2, 8, 5, 6, 7};

    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    std::vector<int> longestRange = longestContinuousRange(array);

    std::cout << "Longest continuous range: ";
    for (int num : longestRange) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}






#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

void printSet(const std::set<int>& s, const std::string& setName) {
    std::cout << setName << ": ";
    for (int num : s) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

void setOperations(const std::set<int>& set1, const std::set<int>& set2) {
    // Union
    std::set<int> unionSet;
    std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(unionSet, unionSet.begin()));
    printSet(unionSet, "Union");

    // Intersection
    std::set<int> intersectionSet;
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(intersectionSet, intersectionSet.begin()));
    printSet(intersectionSet, "Intersection");

    // Set Difference (Except)
    std::set<int> exceptSet;
    std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(exceptSet, exceptSet.begin()));
    printSet(exceptSet, "Except");
}

int main() {
    std::set<int> set1 = {1, 2, 3, 4, 5};
    std::set<int> set2 = {3, 4, 5, 6, 7};

    printSet(set1, "Set1");
    printSet(set2, "Set2");

    setOperations(set1, set2);

    return 0;
}




#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Create an unordered_map to store character counts
    std::unordered_map<char, int> charCount;

    // Count occurrences of each character
    for (char ch : inputString) {
        if (std::isalpha(ch)) {
            // Consider only alphabetic characters
            charCount[ch]++;
        }
    }

    // Print character counts
    std::cout << "Character counts:\n";
    for (const auto& pair : charCount) {
        std::cout << "'" << pair.first << "': " << pair.second << " times\n";
    }

    return 0;
}





#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype> // For std::isalpha and std::tolower

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Create an unordered_map to store vowel and consonant counts
    std::unordered_map<char, int> counts;
    
    // Define the set of vowels
    const std::string vowels = "aeiouAEIOU";

    // Count occurrences of each character
    for (char ch : inputString) {
        if (std::isalpha(ch)) {
            char lowercaseCh = std::tolower(ch);
            if (vowels.find(lowercaseCh) != std::string::npos) {
                // It's a vowel
                counts['V']++;
            } else {
                // It's a consonant
                counts['C']++;
            }
        }
    }

    // Print counts
    std::cout << "Vowel count: " << counts['V'] << "\n";
    std::cout << "Consonant count: " << counts['C'] << "\n";

    return 0;
}




#include <iostream>
#include <string>

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Calculate the sum of ASCII values
    int sum = 0;
    for (char ch : inputString) {
        sum += static_cast<int>(ch);
    }

    // Print the sum
    std::cout << "Sum of ASCII values: " << sum << std::endl;

    return 0;
}




#include <iostream>
#include <algorithm> // for std::reverse
#include <string>

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Reverse the string using std::reverse
    std::reverse(inputString.begin(), inputString.end());

    // Print the reversed string
    std::cout << "Reversed string: " << inputString << std::endl;

    return 0;
}





#include <iostream>
#include <string>
#include <algorithm> // for std::reverse

bool isPalindrome(const std::string& str) {
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    if (isPalindrome(inputString)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}




#include <iostream>
#include <string>

void replaceVowels(std::string& str, char replacementChar) {
    for (char& ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            ch = replacementChar;
        }
    }
}

int main() {
    std::string inputString;
    char replacementChar = '$';

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    replaceVowels(inputString, replacementChar);

    std::cout << "String after replacing vowels: " << inputString << std::endl;

    return 0;
}





#include <iostream>
#include <string>
#include <cctype> // For std::isalnum

int countSpecialCharacters(const std::string& str) {
    int count = 0;

    for (char ch : str) {
        if (!std::isalnum(ch)) {
            // Check if the character is not alphanumeric
            count++;
        }
    }

    return count;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    int specialCharacterCount = countSpecialCharacters(inputString);

    std::cout << "Number of special characters: " << specialCharacterCount << std::endl;

    return 0;
}




#include <iostream>
#include <string>
#include <sstream> // For std::istringstream

int countWords(const std::string& str) {
    std::istringstream iss(str);
    int wordCount = 0;
    std::string word;

    while (iss >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    int wordCount = countWords(inputString);

    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}




#include <iostream>
#include <string>
#include <sstream>
#include <algorithm> // For std::reverse

std::string reverseWord(const std::string& word) {
    std::string reversedWord = word;
    std::reverse(reversedWord.begin(), reversedWord.end());
    return reversedWord;
}

std::string reverseWordsInString(const std::string& str) {
    std::istringstream iss(str);
    std::string word;
    std::string reversedString;

    while (iss >> word) {
        // Reverse each word and append it to the reversedString
        reversedString += reverseWord(word) + ' ';
    }

    // Remove the trailing space
    if (!reversedString.empty()) {
        reversedString.pop_back();
    }

    return reversedString;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::string reversedString = reverseWordsInString(inputString);

    std::cout << "String with reversed words: " << reversedString << std::endl;

    return 0;
}





#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::istringstream iss(inputString);
    std::vector<std::string> words;
    std::string word;

    // Extract words from the input string
    while (iss >> word) {
        words.push_back(word);
    }

    // Print words in reverse order
    std::cout << "Words in reverse order: ";
    for (auto it = words.rbegin(); it != words.rend(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;

    return 0;
}



#include <iostream>
#include <string>
#include <algorithm> // For std::swap
#include <cctype>    // For std::isalpha, std::tolower

bool isVowel(char ch) {
    ch = std::tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

std::string reverseVowels(const std::string& str) {
    std::string result = str;
    int start = 0;
    int end = result.length() - 1;

    while (start < end) {
        // Find the next vowel from the start
        while (start < end && !isVowel(result[start])) {
            start++;
        }

        // Find the next vowel from the end
        while (start < end && !isVowel(result[end])) {
            end--;
        }

        // Swap the vowels
        if (start < end) {
            std::swap(result[start], result[end]);
            start++;
            end--;
        }
    }

    return result;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::string result = reverseVowels(inputString);

    std::cout << "String with reversed vowels: " << result << std::endl;

    return 0;
}





#include <iostream>
#include <string>

int countDigits(const std::string& str) {
    int digitCount = 0;

    for (char ch : str) {
        if (std::isdigit(ch)) {
            digitCount++;
        }
    }

    return digitCount;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    int digitCount = countDigits(inputString);

    std::cout << "Number of digits in the string: " << digitCount << std::endl;

    return 0;
}




#include <iostream>
#include <algorithm> // for std::sort
#include <string>

bool areAnagrams(const std::string& str1, const std::string& str2) {
    std::string sortedStr1 = str1;
    std::string sortedStr2 = str2;

    // Sort the characters in both strings
    std::sort(sortedStr1.begin(), sortedStr1.end());
    std::sort(sortedStr2.begin(), sortedStr2.end());

    // Compare the sorted strings
    return sortedStr1 == sortedStr2;
}

int main() {
    std::string inputStr1, inputStr2;

    std::cout << "Enter the first string: ";
    std::getline(std::cin, inputStr1);

    std::cout << "Enter the second string: ";
    std::getline(std::cin, inputStr2);

    if (areAnagrams(inputStr1, inputStr2)) {
        std::cout << "The strings are anagrams.\n";
    } else {
        std::cout << "The strings are not anagrams.\n";
    }

    return 0;
}




#include <iostream>
#include <unordered_map>
#include <string>

bool areAnagrams(const std::string& str1, const std::string& str2) {
    // Check if the lengths are different
    if (str1.length() != str2.length()) {
        return false;
    }

    // Count occurrences of each character in str1
    std::unordered_map<char, int> charCount;
    for (char ch : str1) {
        charCount[ch]++;
    }

    // Subtract occurrences of each character in str2
    for (char ch : str2) {
        charCount[ch]--;
    }

    // Check if all counts are zero
    for (const auto& pair : charCount) {
        if (pair.second != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string inputStr1, inputStr2;

    std::cout << "Enter the first string: ";
    std::getline(std::cin, inputStr1);

    std::cout << "Enter the second string: ";
    std::getline(std::cin, inputStr2);

    if (areAnagrams(inputStr1, inputStr2)) {
        std::cout << "The strings are anagrams.\n";
    } else {
        std::cout << "The strings are not anagrams.\n";
    }

    return 0;
}




#include <iostream>
#include <string>

std::string removeExtraSpaces(const std::string& str) {
    std::string result;
    bool spaceFound = false;

    for (char ch : str) {
        if (ch == ' ') {
            if (!spaceFound) {
                result += ch;
            }
            spaceFound = true;
        } else {
            result += ch;
            spaceFound = false;
        }
    }

    return result;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string with extra spaces: ";
    std::getline(std::cin, inputString);

    std::string stringWithoutExtraSpaces = removeExtraSpaces(inputString);

    std::cout << "String after removing extra spaces: " << stringWithoutExtraSpaces << std::endl;

    return 0;
}




#include <iostream>
#include <string>

bool isAlphabetic(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

void reverseAlphabets(std::string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (isAlphabetic(str[start]) && isAlphabetic(str[end])) {
            std::swap(str[start], str[end]);
            start++;
            end--;
        } else if (!isAlphabetic(str[start])) {
            start++;
        } else if (!isAlphabetic(str[end])) {
            end--;
        }
    }
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    reverseAlphabets(inputString);

    std::cout << "String with reversed alphabets: " << inputString << std::endl;

    return 0;
}





#include <iostream>
#include <string>

bool isVowel(char ch) {
    ch = std::tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

std::string removeContinuousVowels(const std::string& str) {
    std::string result;

    for (char ch : str) {
        if (!isVowel(ch)) {
            result += ch;
        } else {
            // Check if the previous character is not a vowel
            if (result.empty() || !isVowel(result.back())) {
                result += ch;
            }
        }
    }

    return result;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::string stringWithoutContinuousVowels = removeContinuousVowels(inputString);

    std::cout << "String after removing continuous vowels: " << stringWithoutContinuousVowels << std::endl;

    return 0;
}




#include <iostream>
#include <string>
#include <unordered_map>

std::unordered_map<char, int> countOccurrences(const std::string& str) {
    std::unordered_map<char, int> charCount;

    for (char ch : str) {
        charCount[ch]++;
    }

    return charCount;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::unordered_map<char, int> charOccurrences = countOccurrences(inputString);

    std::cout << "Character occurrences:\n";
    for (const auto& pair : charOccurrences) {
        std::cout << "'" << pair.first << "': " << pair.second << " times\n";
    }

    return 0;
}




#include <iostream>
#include <string>

const int CHAR_COUNT = 128; // Assuming ASCII characters

void countOccurrences(const std::string& str, int charCount[]) {
    for (char ch : str) {
        charCount[static_cast<unsigned char>(ch)]++;
    }
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    int charOccurrences[CHAR_COUNT] = {0};
    countOccurrences(inputString, charOccurrences);

    std::cout << "Character occurrences:\n";
    for (int i = 0; i < CHAR_COUNT; ++i) {
        if (charOccurrences[i] > 0) {
            std::cout << "'" << static_cast<char>(i) << "': " << charOccurrences[i] << " times\n";
        }
    }

    return 0;
}




#include <iostream>
#include <string>
#include <unordered_map>

std::unordered_map<char, int> findCharacterFrequency(const std::string& str) {
    std::unordered_map<char, int> charFrequency;

    for (char ch : str) {
        charFrequency[ch]++;
    }

    return charFrequency;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::unordered_map<char, int> charFrequency = findCharacterFrequency(inputString);

    std::cout << "Character frequency:\n";
    for (const auto& pair : charFrequency) {
        std::cout << "'" << pair.first << "': " << pair.second << " times\n";
    }

    return 0;
}




#include <iostream>
#include <cctype> // For std::isalpha
#include <unordered_set>

bool isPangram(const std::string& str) {
    std::unordered_set<char> letters;

    for (char ch : str) {
        if (std::isalpha(ch)) {
            letters.insert(std::tolower(ch));
        }
    }

    return letters.size() == 26; // All letters of the alphabet are present
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    if (isPangram(inputString)) {
        std::cout << "The string is a pangram.\n";
    } else {
        std::cout << "The string is not a pangram.\n";
    }

    return 0;
}




#include <iostream>
#include <cctype> // For std::isalpha

bool isPangram(const std::string& str) {
    const int ALPHABET_SIZE = 26;
    bool letterPresent[ALPHABET_SIZE] = {false};

    for (char ch : str) {
        if (std::isalpha(ch)) {
            int index = std::tolower(ch) - 'a';
            letterPresent[index] = true;
        }
    }

    for (bool present : letterPresent) {
        if (!present) {
            return false; // If any letter is not present, it's not a pangram
        }
    }

    return true; // All letters are present
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    if (isPangram(inputString)) {
        std::cout << "The string is a pangram.\n";
    } else {
        std::cout << "The string is not a pangram.\n";
    }

    return 0;
}




#include <iostream>

void printDigitsMultipleTimes(int number, int times) {
    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        number /= 10; // Remove the last digit

        // Print the digit 'times' times
        for (int i = 0; i < times; ++i) {
            std::cout << digit;
        }
    }
    std::cout << std::endl;
}

int main() {
    int n, m;

    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "Enter the number of times to print each digit: ";
    std::cin >> m;

    if (n < 0 || m <= 0) {
        std::cout << "Invalid input. Please enter a non-negative number and a positive number of times.\n";
    } else {
        std::cout << "Result: ";
        printDigitsMultipleTimes(n, m);
    }

    return 0;
}





#include <iostream>
#include <iomanip>

void convertTo12HourFormat(int& hour, int& minute) {
    // Check if the hour is in the valid range
    if (hour < 0 || hour >= 24 || minute < 0 || minute >= 60) {
        std::cout << "Invalid time input.\n";
        return;
    }

    std::string period = "AM"; // Default period is AM

    // Adjust the hour and set the period
    if (hour >= 12) {
        period = "PM";
        if (hour > 12) {
            hour -= 12;
        }
    }

    // Output the converted time
    std::cout << "Converted time: " << std::setw(2) << std::setfill('0') << hour << ":"
              << std::setw(2) << std::setfill('0') << minute << " " << period << std::endl;
}

int main() {
    int hour, minute;

    std::cout << "Enter the time in 24-hour format (HH:MM): ";
    char colon;
    std::cin >> hour >> colon >> minute;

    convertTo12HourFormat(hour, minute);

    return 0;
}





#include <iostream>
#include <vector>

int reorderDigits(int number) {
    std::vector<int> digits;

    // Extract and store each digit in the vector
    while (number > 0) {
        digits.push_back(number % 10);
        number /= 10;
    }

    // Reorder the digits such that '1' appears first
    std::vector<int> reorderedDigits;
    for (int digit : digits) {
        if (digit == 1) {
            reorderedDigits.insert(reorderedDigits.begin(), 1);
        } else {
            reorderedDigits.push_back(digit);
        }
    }

    // Reconstruct the number from the reordered digits
    int result = 0;
    for (int digit : reorderedDigits) {
        result = result * 10 + digit;
    }

    return result;
}

int main() {
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    int result = reorderDigits(n);

    std::cout << "Number after reordering: " << result << std::endl;

    return 0;
}




#include <iostream>
#include <vector>

void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example matrix
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the matrix
    std::cout << "Matrix:\n";
    printMatrix(matrix);

    return 0;
}






#include <iostream>
#include <vector>

void printMainDiagonal(const std::vector<std::vector<int>>& matrix) {
    std::cout << "Main Diagonal: ";
    for (int i = 0; i < matrix.size(); ++i) {
        std::cout << matrix[i][i] << " ";
    }
    std::cout << std::endl;
}

void printSecondaryDiagonal(const std::vector<std::vector<int>>& matrix) {
    std::cout << "Secondary Diagonal: ";
    for (int i = 0; i < matrix.size(); ++i) {
        std::cout << matrix[i][matrix.size() - 1 - i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Example matrix
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the diagonals
    printMainDiagonal(matrix);
    printSecondaryDiagonal(matrix);

    return 0;
}




#include <iostream>
#include <vector>

void findMaxInEachRow(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        int maxElement = row[0];

        // Find the maximum element in the current row
        for (int element : row) {
            if (element > maxElement) {
                maxElement = element;
            }
        }

        // Print the maximum element in the current row
        std::cout << "Max in row: " << maxElement << std::endl;
    }
}

int main() {
    // Example matrix
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Find and print the maximum element in each row
    findMaxInEachRow(matrix);

    return 0;
}
 



 #include <iostream>
#include <vector>

int mainDiagonalSum(const std::vector<std::vector<int>>& matrix) {
    int sum = 0;

    // Check if the matrix is square
    if (matrix.size() != matrix[0].size()) {
        std::cout << "The matrix is not square. Cannot compute main diagonal sum.\n";
        return -1; // Return an invalid value to indicate an error
    }

    // Calculate the sum of the main diagonal elements
    for (int i = 0; i < matrix.size(); ++i) {
        sum += matrix[i][i];
    }

    return sum;
}

int main() {
    // Example matrix
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Calculate and print the sum of the main diagonal elements
    int diagonalSum = mainDiagonalSum(matrix);

    if (diagonalSum != -1) {
        std::cout << "Sum of main diagonal elements: " << diagonalSum << std::endl;
    }

    return 0;
}



#include <iostream>
#include <vector>

int diagonalDifference(const std::vector<std::vector<int>>& matrix) {
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Check if the matrix is square
    if (matrix.size() != matrix[0].size()) {
        std::cout << "The matrix is not square. Cannot compute diagonal difference.\n";
        return -1; // Return an invalid value to indicate an error
    }

    int n = matrix.size();

    // Calculate the sum of the main diagonal elements
    for (int i = 0; i < n; ++i) {
        mainDiagonalSum += matrix[i][i];
    }

    // Calculate the sum of the secondary diagonal elements
    for (int i = 0; i < n; ++i) {
        secondaryDiagonalSum += matrix[i][n - 1 - i];
    }

    // Calculate the absolute difference between the sums
    int difference = std::abs(mainDiagonalSum - secondaryDiagonalSum);

    return difference;
}

int main() {
    // Example matrix
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Calculate and print the absolute difference between the sums of diagonals
    int diff = diagonalDifference(matrix);

    if (diff != -1) {
        std::cout << "Absolute difference between sums of diagonals: " << diff << std::endl;
    }

    return 0;
}




#include <iostream>

int main() {
    int size;

    // Input the size of the pattern
    std::cout << "Enter the size of the pattern: ";
    std::cin >> size;

    if (size % 2 == 0) {
        std::cout << "Please enter an odd size for a proper X pattern.\n";
        return 0;
    }

    // Print the X pattern
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == j || i == size - 1 - j) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}



#include <iostream>

int main() {
    int size;

    // Input the size of the pattern
    std::cout << "Enter the size of the pattern: ";
    std::cin >> size;

    // Print the triangular pattern of numbers
    for (int i = 1; i <= size; ++i) {
        // Print leading spaces
        for (int space = 0; space < size - i; ++space) {
            std::cout << "  ";
        }

        // Print ascending numbers
        for (int j = 1; j <= i; ++j) {
            std::cout << j << " ";
        }

        // Print descending numbers (excluding the last number)
        for (int k = i - 1; k >= 1; --k) {
            std::cout << k << " ";
        }

        // Move to the next line for the next row
        std::cout << std::endl;
    }

    return 0;
}




#include <iostream>

int main() {
    int height;

    // Input the height of the triangle
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Print the star triangle
    for (int i = 1; i <= height; ++i) {
        // Print stars for each row
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }

        // Move to the next line for the next row
        std::cout << std::endl;
    }

    return 0;
}



#include <iostream>

int main() {
    int height;

    // Input the height of the triangle
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Print the inverted star triangle
    for (int i = height; i >= 1; --i) {
        // Print stars for each row
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }

        // Move to the next line for the next row
        std::cout << std::endl;
    }

    return 0;
}




#include <iostream>

int main() {
    int size;

    // Input the size of the 'X'
    std::cout << "Enter the size of the 'X' pattern: ";
    std::cin >> size;

    // Check if the size is an odd number
    if (size % 2 == 0) {
        std::cout << "Please enter an odd size for a proper 'X' pattern.\n";
        return 0;
    }

    // Print the 'X' pattern
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == j || i == size - 1 - j) {
                std::cout << "X";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}




#include <iostream>
#include <vector>

void printSpiral(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; ++i) {
            std::cout << matrix[top][i] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; ++i) {
            std::cout << matrix[i][right] << " ";
        }
        right--;

        // Print bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                std::cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // Print left column
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                std::cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    // Example matrix
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Print the numbers in a spiral pattern
    printSpiral(matrix);

    return 0;
}




#include <iostream>

void printZigZag(int rows, int cols) {
    int count = 1;

    for (int i = 1; i <= rows; ++i) {
        // If the row number is odd, print from left to right
        if (i % 2 != 0) {
            for (int j = 1; j <= cols; ++j) {
                std::cout << count++ << " ";
            }
        } else {  // If the row number is even, print from right to left
            for (int j = cols; j >= 1; --j) {
                std::cout << count++ << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols;

    // Input the number of rows and columns
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Print the numbers in a zigzag pattern
    printZigZag(rows, cols);

    return 0;
}











