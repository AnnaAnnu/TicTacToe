#include<iostream>
using namespace std;

// create a matrix of 3*3 dimension 
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};

// draw function to draw the matrix
void Draw(){
    cout<<"TIC TAC TOE"<<endl;
    // two loops will vbe used , 1 for row and 1 for column
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrix[i][j]<<" ";
        }

        cout<<endl;
        
    }
    
}
int main()
{
    Draw();
    system("pause");
    return 0;
}
