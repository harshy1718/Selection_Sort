# Selection_Sort
Selection Sort is a simple and intuitive sorting algorithm that repeatedly selects the minimum element from the unsorted part of the array and places it at the beginning. It divides the array into a sorted and unsorted part, and in each iteration, it finds the smallest element and swaps it with the current position. Selection Sort has a time complexity of O(n^2) and is suitable for small arrays or when the number of swaps needs to be minimized. While not the most efficient for large datasets, it provides a clear understanding of sorting and serves as a foundational algorithm.

# Algo Visualisation
![image](https://github.com/harshy1718/Selection_Sort/assets/129788726/6100b6a8-b35e-4dde-bfac-dbe25e49b7cf)

# Algo Complexity
## a. Time: 
The time complexity of Selection Sort is O(n^2), where n is the number of elements in the array. This means that the time taken to perform the sorting operation grows quadratically with the number of elements. In the worst-case scenario, Selection Sort compares and swaps elements multiple times until the entire array is sorted. Despite its simplicity, Selection Sort is not efficient for large datasets as it requires nested loops and performs unnecessary comparisons. However, for small arrays or partially sorted arrays, it can be an easy-to-implement sorting algorithm.

## b. Space: 
The space complexity of Selection Sort is O(1) since it requires only a constant amount of additional space. Selection Sort operates directly on the input array, performing in-place swapping of elements without requiring any additional data structures or dynamic memory allocation. The space usage remains constant regardless of the size of the input array, making Selection Sort efficient in terms of space requirements.

# Use Cases
Selection Sort is commonly used in situations where the number of elements is small, or when the auxiliary space usage needs to be minimized. Some common use cases of Selection Sort include:

1. Small Arrays: Selection Sort performs well on small arrays where the overhead of more complex sorting algorithms is not justified. It can efficiently sort arrays with a limited number of elements.

2. Partially Sorted Arrays: If an array is already partially sorted, Selection Sort can be used to sort the remaining unsorted part efficiently. It makes fewer comparisons compared to other sorting algorithms in such cases.

3. Educational Purposes: Selection Sort is often taught as an introductory sorting algorithm due to its simplicity and ease of understanding. It helps students grasp the basic concepts of sorting algorithms and can be used as a stepping stone to more advanced sorting techniques.

4. Sorting in Place: Selection Sort is an in-place sorting algorithm, meaning it does not require additional memory space. This can be advantageous in situations where memory usage is a constraint, such as embedded systems or resource-limited environments.

5. Simple Implementation: Selection Sort has a straightforward implementation with a minimal number of steps, making it suitable for situations where simplicity and ease of implementation are prioritized over efficiency.

It's important to note that Selection Sort has a time complexity of O(n^2), which means it may not be the most efficient choice for large arrays or time-critical applications. In such cases, other sorting algorithms like Quick Sort or Merge Sort may be more suitable.

# Function Description

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
