/******************************************************************************

Efficient Way to return vectors from a function is Return by value
The std::vector uses move semantics. Because of this the vector created within
the function is moved to the return value and hence there would be no issue of returning
a locally created object

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

vector<int> Dummy(vector<int> &V)
{
    int size = V.size();
    cout << "Size : " << size << endl;
    vector<int> Result(size , 10);
    
    cout << "Address of Function vector : " << &Result << endl;
    return Result;
}

int main()
{
    vector<int> MainVector (10 , 5);
    
    cout << "Address of Main vector before: " << &MainVector << endl;
    
    MainVector = Dummy(MainVector);
    
    vector<int>::iterator i;
    int count = 0;
    
    for(i = MainVector.begin() ; i != MainVector.end() ; i++)
    {
        //cout << *i << endl;
        count++;
    }

    cout << "Address of Main vector after: " << &MainVector << endl;
    cout << "Counter Value : " << count << endl;
    return 0;
}
