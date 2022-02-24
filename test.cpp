#include <iostream>

#define N 10

using namespace std;

void showResult(int** arr)
{
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        for (size_t j = 0; j < 10; j++)
        {
            /* code */
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}

int main()
{
    int** ptr = new int*[N];

    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        ptr[i] = new int[N]; 
    }

    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        for (size_t j = 0; j < 10; j++)
        {
            /* code */
            *(*(ptr+i)+j) = j+i*10;
        }
        
    }
    
    showResult(ptr);
    
    return 0;
}