#include <iostream>
using namespace std;
#define N 10
class Sort
{
    public:
    void selection_sort(int a[], int len);
    void bubble_sort(int a[], int len);
    void insertion_sort(int a[], int len);
    void merge_sort(int a[], int l, int r);
    void quick_sort(int a[], int low, int high);
    void display(int a[], int len);
};
//Selection Sort
void Sort::selection_sort(int a[], int len)
{
    for(int i = 0; i < len; i++)
    {
        int temp = a[i];
        for(int j = i; j < len; j++)
        {
            if(temp > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    display(a, len);
}
//Bubble Sort
void Sort::bubble_sort(int a[], int len)
{
    int temp;
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j <= len; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    display(a, len);
}
//Insertion Sort
void Sort::insertion_sort(int a[], int len)
{
    for(int i = 1; i < len; i++)
    {
        int key = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    display(a, len);
}
void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1; // Size of the left subarray
    int n2 = r - mid;     // Size of the right subarray

    int left[n1], right[n2]; // Temporary arrays

    // Copy data to temp arrays left[] and right[]
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];

    // Merge the temp arrays back into arr[l..r]
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}
//Merge Sort
void Sort::merge_sort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2; // Find the middle point

        // Sort first and second halves
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);

        // Merge the sorted halves
        merge(arr, l, mid, r);
    }
}
int partition(int arr[], int low, int high)//function to divide the array
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < j)
        swap(arr[i], arr[j]);//swap if i < j
    }
    swap(arr[low], arr[j]);//swap if i > j
    return j;//return integer
}
//Quick Sort
void Sort::quick_sort(int arr[], int low, int high)//where sorting take place
{
    if(low < high)
    {
        int loc = partition(arr, low, high);
        quick_sort(arr, low, loc-1);
        quick_sort(arr, loc+1, high);
    }
    
}
void swap(int &a, int &b)//where swap happen
{
    int temp = a;
    a = b;
    b = temp;
}
void Sort::display(int a[], int len)
{
    cout << "After Sorting " << endl;
    for(int i = 0; i < len; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main()
{
    Sort n;
    int len;
    cout << "Enter length of the array :";
    cin >> len;
    int a[len];
    cout << "Enter " << len << " elements of the array " << endl;
    for(int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    cout << "Unsorted Elements are " << endl;
    for(int i = 0; i < len; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    int choice;
    do
    {
        cout << "1) Insertion Sort " << endl;
        cout << "2) Selection Sort " << endl;
        cout << "3) Bubble Sort " << endl;
        cout << "4) Merge Sort " << endl;
        cout << "5) Quick Sort " << endl;
        cout << "6) Exit " << endl;
        cout << "Enter your choice :";
        cin >> choice;
        switch(choice)
        {
            case 1:
                n.insertion_sort(a, len);
                break;
            case 2:
                n.selection_sort(a, len);
                break;
            case 3:
                n.bubble_sort(a, len);
                break;
            case 4:
                n.merge_sort(a, 0, len-1);
                n.display(a, len);
                break;
            case 5:
                n.quick_sort(a, 0, len-1);
                n.display(a, len);
                break;
            case 6:
                cout << "Exiting......!" << endl;
                exit(0);
                break;
            default:
                cout << "Invalid input " << endl; 
        }
    }while(choice!=6);
    return 0;
}
