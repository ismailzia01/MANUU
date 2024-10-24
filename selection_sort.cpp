#include <iostream>
using namespace std;
void selection_sort(int a[], int len)
{
    int temp;
    for(int i = 0; i < len; i++)
    {
        for(int j = i; j < len; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "After Sorting " << endl;
    for(int i = 0; i < len; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main()
{
    int len;
    cout << "Enter length of the array :";
    cin >> len;
    int a[len];
    cout << "Enter " << len << " elements of the array " << endl;
    for(int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    cout << "Unsorted elements are " << endl;
    for(int i = 0; i < len; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    selection_sort(a, len);
    return 0;
}