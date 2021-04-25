/******************************************************************************

Vector Multiplication

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> Power(vector<vector<int>> &A , n)
{
    
}

vector<vector<int>> Multiply(vector<vector<int>> &A , vector<vector<int>> &B)
{
    int rowsA = A.size();
    int rowsB = B.size();
    
    int columnsA = A[0].size();
    int columnsB = B[0].size();
    
    //cout << "Rows A : " << rowsA << "Cols A : " << columnsA << endl;;
    //cout << "Rows B : " << rowsB << "Cols B : " << columnsB << endl;
    
    //cout << "Resultant Matrix : " << rowsA << " * " << columnsB << endl;
    
    vector<vector<int>> Calculation (rowsA , vector<int> (columnsB , 0));

   
    for(int i = 0 ; i < rowsA; i++)
    {
        for(int j = 0 ; j < columnsB ; j++)
        {
            for(int k = 0 ; k < rowsB ; k++)
            {
                Calculation[i][j] += A.at(i).at(k) * B.at(k).at(j);
            }
  
        }
        
        
    }
   
   
   
    return Calculation;
}

vector<int> a1 = { 1 , 2 , 3};
vector<int> a2 = { 4 , 5 , 6};

vector<int> b1 = { 1 , 2 , 3};
vector<int> b2 = { 4 , 5 , 6};

vector<vector<int>> BigA = { a1,a2};
vector<vector<int>> BigB = { b1,b2};

int main()
{
    vector<vector<int>> Result;
   
    Result = Multiply(BigA , BigB);
    

    for(int i = 0 ; i < Result.size(); i++)
    {
        for(int j = 0 ; j < Result[0].size() ; j++)
        {

            cout << Result[i][j] << " ";
        }
        
       cout << endl;
    }

    

    
    return 0;
}