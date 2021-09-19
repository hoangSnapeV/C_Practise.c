#include <stdio.h>
int check_Win(int board[3][3]);
int check_board(int board[3][3]);

int i, j;
int main()
{
    int board[3][3] = {
        {2, 1, 1},
        {0, 0, 2},
        {0, 0, 2}
    };
    
    int Correct_Board = check_board(board);
    int result = check_Win(board);
    
    printf("The board error, %d\n", Correct_Board);
    printf("Player %d win", result);

    

    return 0;
}


//check board
int check_board(int board[3][3]) {
    int player1 = 0;
    int player2 = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == 1) {
                player1++;
            }
            else if (board[i][j] == 2) {
                player2++;
            }
        }
    };
    if (player2 - player1 >= 2 || player1 - player2 >= 2) {
        return 0;
    }
    else if (player2 == 1 && player1 == 0) {
        return 0;
    }
}


//check result game
int check_Win(int board[3][3]) {
    int winner = 0;
    int i;
    int j;
    int num1;
    int num2;
    
//Check hàng ngang
    for (i = 0; i < 3; i++) {
        
        num1 = 0;
        num2 = 0;
        
        //Check hàng ngang 
        for (j = 0; j < 3; j++) {
            if (board[i][j] == 1) {
                num1 = num1 + 1;
            }
            else if (board[i][j] == 2) {
                num2 = num2 + 1;
            }
            
            if (num1 == 3) {
                winner = 1;
                return winner;
            }
            else if (num2 == 3) {
                winner = 2;
                return winner;
            }
        }
    };
   
//Check hàng dọc
    for (i = 0; i < 3; i++) {
        num1 = 0;
        num2 = 0;
        //check hàng dọc
        for (j = 0; j < 3; j++) {
            if (board[j][i] == 1) {
                num1 = num1 + 1;
            }
            else if (board[j][i] == 2) {
                num2 = num2 + 1;
            }
            
            if (num1 == 3) {
                winner = 1;
            }
            else if (num2 == 3) {
                winner = 2;
            }
        }
    };

//Check hàng chéo
    for (i = 0; i < 3; i++) {
        
        num1 = 0;
        num2 = 0;
        //Check hàng chéo
        for (j = 0; j < 3; j++) {
            if (board[j][j] == 1) {
                num1 = num1 + 1;
            }
            else if (board[j][j] == 2) {
                num2 = num2 + 1;
            }
            
            if (num1 == 3) {
                winner = 1;
            }
            else if (num2 == 3) {
                winner = 2;
            }
        }
    };

//check draw
    if (winner == 0) {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (board[i][j] == 0) {
                    return winner = 0;
                }
            }
        }
        winner = 3;
        printf("Draw");
    };


    return winner;
}
