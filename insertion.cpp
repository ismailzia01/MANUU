/* Program to insert an element in a specific position */
/*Header file that always appears 
  in every program also called 
  Preprocessor Directive */
#include <iostream>
using namespace std;/*instead of using again & agian
                         std:: we can use it one like this*/
int main()//main function also every program starts from here
{
    int pos, ele, len, i;//declaring variables that are required in this program
    cout << "Enter length of the array : ";//asking the user to input the length of array
    cin >> len;//user input the length
    int a[len];//decalaring array of legth that was asked to user
    //like if user puts len= 5 then int a[5] look like
    //similarly if len = 8 , then int a[8]
    cout << "\nEnter the elements of the array " << endl;
    for(i = 0; i < len; i++)
    {
        cin >> a[i];
    }//this for loop runs from 0 to len-1 
    //a[0], a[1], ...a[len-1]

    cout << "Entered elements are : ";
    for(i = 0; i < len; i++)
    {
        cout << a[i] << " ,";
    }//similarly we are printing the elements 
    cout << "\nEnter the position in which you want to insert an element :";
    cin >> pos;
    cout << "And now enter the element :";
    cin >> ele;//asking the user for pos and ele;
    if(pos < 0 || pos > len)
    {
        cout << "Invalid Position " << endl;
    }//if user enter -ve pos or more than the arrray size 
    else
    {
        len++;
        for(i = len; i > pos-1; i--)
        {
            a[i] = a[i-1];
        }
        /* this is the main logic where the main program works 
        we are simply increasing our array size with one
        so we can make room for our element that is going to be inserted
        how do we intialize a value to an array
        we simply write the array name and its index and assign the value
        like a[1]= 8 8 will be assigned to the second element of the array 
        suppose a[5] = {10, 20, 30, 50, 60}
        now we want to insert element 40 after 30 means at 4th position
        so we need a[3]= 40;
        but , why we need a[3] while  i said 4th position 
        since index of array start from 0 so 3 instead of 4
        also if we assign a[3] = 40 ; then 50 will be replaced by 40 
        and our new array will look like a[5] = {10, 20, 30, 40, 60}
        since we are loosing our element thats why we have to make room for our element
        for that first we will increase our array size by len++;
        and after that we will shift our elements to right but not all the elements only 
        elements that are starting from the position at which we want to insert
        so a[6]= {10, 20, 30, 50, 60,[]}
        now at the blank space we will copy its previous element to make a shift
        using logic a[i] = a[i-1]; i start from len and ends at pos-1;
        follow along 
        a[6]={10, 20, 30, 50, 60, 60}
        a[6]={10, 20, 30, 50, 50, 60}
        a[6]={10, 20, 30, 30, 50, 60}
        now we have reached or destination 
        final thing we just have to do is insert the element at the position
        and we use simply a[pos-1] = ele
                            a[3]= 40;
        it will look like this 
        a[6]= {10, 20, 30, 40, 50, 60}
        */
    a[pos-1]= ele;//assigning the element;
    cout << "After inserting " << endl;
    for(i = 0; i < len; i++)
    {
        cout << a[i] << " ,";//printing the array after insertion
    }
    cout << endl;
    }   
    return 0;//to end the program
}
