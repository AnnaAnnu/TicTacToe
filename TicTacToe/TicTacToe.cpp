#include<iostream>
using namespace std;

char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
// Defining who's turn is and char is used for simplicity
char player = 'X'; // X is by default
// create a matrix of 3*3 dimension 

// draw function to draw the matrix
void Draw(){
    cout<<"TIC TAC TOE"<<endl;
    // two loops will be used , 1 for row and 1 for column
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrix[i][j]<<" ";
        }

        cout<<endl;
        
    }
}
    // creating a function for input and print a message

    void Input(){
        int a;// integer for input
        cout<<"Press the no. of field:";
        cin>>a;

        // Setting the first field of the matrix to X i.e; player which simplifies the stuff and we dont need to check the number and print it. here we just directly print the character in the matrix;
        
        if(a==1)
        matrix[0][0]= player;
        else if(a==2)
        matrix[0][1]= player;
        else if(a==3)
        matrix[0][2]= player;
        else if(a==4)
        matrix[1][0]= player;
        else if(a==5)
        matrix[1][1]= player;
        else if(a==6)
        matrix[1][2]= player;
        else if(a==7)
        matrix[2][0]= player;
        else if(a==8)
        matrix[2][1]= player;
        else if(a==9)
        matrix[2][2]= player;
        
    }
    
    // here we need to toggle the player, so we will create another function to change the player

    void TogglePlayer(){
        if (player == 'X')
           player ='O'; 
        else
            player ='X';        
    }
// fuction to check whether play won the game or not

char Win(){

    //  FIRST PLAYER
    if ( matrix [0][0] =='X' && matrix[0][1] =='X' && matrix[0][2] =='X')
   return 'X';

    if ( matrix [1][0] =='X' && matrix[1][1] =='X' && matrix[1][2] =='X')
   return 'X';

    if ( matrix [2][0] =='X' && matrix[2][1] =='X' && matrix[2][2] =='X')
   return 'X';
//for columns
    if ( matrix [0][0] =='X' && matrix[1][0] =='X' && matrix[2][0] =='X')
   return 'X';

    if ( matrix [0][1] =='X' && matrix[1][1] =='X' && matrix[2][1] =='X')
   return 'X';

    if ( matrix [0][2] =='X' && matrix[1][2] =='X' && matrix[2][2] =='X')
   return 'X';


//for diagonal
    if ( matrix [0][0] =='X' && matrix[1][1] =='X' && matrix[2][2] =='X')
   return 'X';

    if ( matrix [2][0] =='X' && matrix[1][1] =='X' && matrix[0][2] =='X')
   return 'X';
    
    
    
    // SECOND PLAYER
    if ( matrix [0][0] =='O' && matrix[0][1] =='O' && matrix[0][2] =='O')
   return 'O';

    if ( matrix [1][0] =='O' && matrix[1][1] =='O' && matrix[1][2] =='O')
   return 'X';

    if ( matrix [2][0] =='O' && matrix[2][1] =='O' && matrix[2][2] =='O')
   return 'O';
//for columns
    if ( matrix [0][0] =='O' && matrix[1][0] =='O' && matrix[2][0] =='O')
   return 'O';

    if ( matrix [0][1] =='O' && matrix[1][1] =='O' && matrix[2][1] =='O')
   return 'X';

    if ( matrix [0][2] =='O' && matrix[1][2] =='O' && matrix[2][2] =='O')
   return 'O';


//diagonals
    if ( matrix [0][0] =='O' && matrix[1][1] =='O' && matrix[2][2] =='O')
   return 'O';

    if ( matrix [2][0] =='O' && matrix[1][1] =='O' && matrix[0][2] =='O')
   return 'O';

   return '/';// This is done because if the function will not return anything the function will not work.


//    SECOND PLAYER
}
int main()
{    
    Draw();
    // make a while lopp that will be indefinite from now and it will run forever
    // we will check for inputs and draw , after that we will TogglePlay
    while (1)//manually

    {
        Input();
        Draw();
        if (Win() == 'X')
        {
            cout<<"X wins!";
            break;
        }
        else if (Win() == 'O')
        {
            cout<<"O Wins!";
        }
        TogglePlayer();
    }
    
    system("pause");
    return 0;
}
