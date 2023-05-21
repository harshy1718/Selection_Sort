# Selection_Sort

void selectionsort(int array[], int size) {

// in this function we go through the array and find the minimum element and then replace it with the first element and then with second element and so on
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
// we create an array and then take input of the elements of the array and the number of elements to be taken is determined by n
    int array[100];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    // After that we call the function selectionsort which makes changes in the array and sorts it
    selectionsort(array,n);
    //Now we print the array
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}
