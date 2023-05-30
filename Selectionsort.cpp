#include <iostream>
using namespace std;

void selectionsort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        int mini = array[i];
        int minindex = i;
        for (int j = i+1; j < size; j++) {
           if (array[j] < mini) {
            mini = array[j];
            minindex = j;
           }
        }
        swap(array[i],array[minindex]);
    }
}

int main () {
    int array[100];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    selectionsort(array,n);
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}