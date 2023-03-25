#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void print(int array[], int n) {
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array1[], int n) {
  int i, j, min;
  for (i = 0; i < n - 1; i++) {
    min = i;
    for (j = i + 1; j < n; j++) {
      if (array1[j] < array1[min]) {
        min = j;
      }
    }
    swap(&array1[min], &array1[i]);
    for (int i = 0; i < n; i++) {
      cout << array1[i] << " ";
    }
    cout << endl;
  }
}
void bubbleSort(int array2[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (array2[j] > array2[j + 1]) {
        swap(&array2[j], &array2[j + 1]);
      }
    }
    for (int i = 0; i < n; i++) {
      cout << array2[i] << " ";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cout << "Enter how many elements do you want to sort: ";
  cin >> n;
  int array1[n],array2[n];
  cout << "Enter the " << n << " elements: ";
  for (int i = 0; i < n; i++) {
    cin >> array2[i];
    array1[i]=array2[i];
  }
  cout << "Array before sorting: ";
  print(array1, n);
  cout << "Array after sorting in ascending order using selection sort: "<< endl;
  selectionSort(array1, n);
  cout << "Array after sorting in ascending order using bubble sort: " << endl;
  bubbleSort(array2, n);
  return 0;
}
