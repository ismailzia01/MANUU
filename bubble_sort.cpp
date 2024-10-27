#include <iostream>
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
void bubble_sort(int a[], int len)
{
    int temp;
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len - i -1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
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
    bubble_sort(a, len);
    return 0;
}