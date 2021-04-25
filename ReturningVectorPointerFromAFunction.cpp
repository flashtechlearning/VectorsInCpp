/******************************************************************************

This method is not that efficient as returning a vector by value is easy method 
Just verify on this.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

vector<int>* Dummy()
{
    vector<int> *Result = new vector<int>();
    
    Result->push_back(1);
    Result->push_back(2);
    Result->push_back(3);
    
    return Result;
}

int main()
{
    vector<int> *MainVectorptr;
    
    MainVectorptr = Dummy();
    
    MainVectorptr->push_back(4);
    
    vector<int>::iterator it;
    
    
    for(it = MainVectorptr->begin() ; it != MainVectorptr->end() ; it++)
    {
        cout << *it << endl;
    }
    return 0;
}
