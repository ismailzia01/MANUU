#include<iostream>
using namespace std;
void display(int a[], int len)
{
    cout << "\nSorted elements " << endl;
    for(int i = 0; i < len; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    return;
}
void insertion_sort(int a[], int len)
{
    int temp;
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
int main()
{
    int len;
    cout << "Enter the length of the array :";
    cin >> len;
    int a[len];
    cout << "Enter the " << len << " elements of the array " << endl;
    for(int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    cout << "\nunsorted elements " << endl;
    for(int i = 0; i < len; i++)
    {
        cout << a[i] << "\t";
    }
    insertion_sort(a, len);
    return 0;
}