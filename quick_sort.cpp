#include <iostream>
using namespace std;
#define N 9//N will be replaced by 9(note there is no semicolon)
int i, loc, j;
int arr[N], pivot;
int temp;
int a, b;
int partition(int arr[], int low, int high)//function to divide the array
{
    pivot = arr[low];
    i = low;
    j = high;
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
void QSort(int arr[], int low, int high)//where sorting take place
{
    if(low < high)
    {
        int loc = partition(arr, low, high);
        QSort(arr, low, loc-1);
        QSort(arr, loc+1, high);
    }
}

void swap(int &a, int &b)//where swap happen
{
    temp = a;
    a = b;
    b = temp;
}
void display(int arr[])//function to display the array after sorting
{
    cout << "After Quick Sort " << endl;
    for(i = 0; i < N; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
int main()//where program start 
{
    cout << "Entere elements " << endl;
    for(i = 0; i < N; i++)
    {
        cin >> arr[i]; 
    }
    cout << "Unsorted Elements " << endl;
    for(i = 0; i < N; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    QSort(arr, 0, N-1);//function call for sorting
    display(arr);//call for display the output
    return 0;
}