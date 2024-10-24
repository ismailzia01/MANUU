#include<iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right)//Function for merging elements
{
    int n1 = mid - left + 1;//size of left temp arr
    int n2 = right - mid;//right temp arr
    int leftarr[n1], rightarr[n2];
    for(int i = 0; i < n1; i++)//copying values in temp arrays
        leftarr[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        rightarr[j] = arr[mid + 1+ j];
    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2)//sorting and storing them in original array
    {
        if(leftarr[i] <= rightarr[j])
        {
            arr[k] = leftarr[i];
            i++;
        }
        else
        {
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }
    while( i < n1)//if any leftover
    {
        arr[k] = leftarr[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = rightarr[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right)//Function fo dividing the array in half till we left with single element
{
    if(left < right)
    {
        int mid = left + (right -left)/2;
        mergeSort(arr, left, mid);//recursively calling again
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);//Function call for sorting
    }
}
int main()//Where actual computation starts from
{
    int arr[] = {4, 5, 3, 1, 2};//an initialised array
    int len = sizeof(arr)/sizeof(arr[0]);//calculating the size of the array
    cout << "Given Array is : ";//Printing input array
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    mergeSort(arr, 0, len-1);//Function call for mergeSort
    cout << "Sorted Array is : ";//Printing output values
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    return 0;
}