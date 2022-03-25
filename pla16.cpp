#include<iostream>
using namespace std;


int partition( int arr[], int low , int high) {

    int pivot = arr[low];

    int cnt = 0;
    for(int i = low+1; i<=high; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }
    int pivotIndex = low + cnt;
    swap(arr[pivotIndex], arr[low]);

    int i = low, j = high;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quicksort(int arr[], int low, int high) {

    
    if(low >= high) 
        return ;

   
    int p = partition(arr, low, high);

    //lhighft part lowort karo
    quicksort(arr, low, p-1);

    //right wala part lowort karo
    quicksort(arr, p+1, high);

}

int main() {

    int arr[] = {2,4,1,6,9};
    int n = 5;

    quicksort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
    cout << arr[i] << " ";
    } 
    
    cout << endl;


    return 0;
}