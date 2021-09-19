#include <stdio.h>
// CheckWin//
int checkCaro(int board[3][3]);


int main() {
    //printf("Hello, World!\n");
    int board[3][3] = {
        {0, 0, 1},
        {1, 1, 1},
        {2, 0, 2}
    };
    
    int result = checkCaro(board);
    printf("Who is win ? Player %d\n", result);
    
    int board_1[3][3] = {
        {0, 0, 1},
        {1, 2, 1},
        {2, 2, 2}
    };
    // 
    int result_1 = checkCaro(board_1);
    printf("Who is win ? Player %d\n", result_1);
    //---
  
    int board_2[3][3] = {
        {1, 2, 1},
        {1, 2, 2},
        {2, 1, 2}
    };
    int result_2 = checkCaro(board_2);
    printf("Who is win ? Player %d\n", result_2);
    // -- check 0
     
    int board_3[3][3] = {
        {1, 1, 0},
        {1, 2, 2},
        {2, 0, 0}
    };
    int result_3 = checkCaro(board_3);
    printf("Who is win ? Player %d\n", result_3);
    
}
int checkCaro(int board[3][3]) {
    int winner = 0;
    
    if (board[0][0] == 1 &&  board[0][1] == 1 &&  board[0][2] == 1) {
        winner = 1;
    } 
    if (board[1][0] == 1 &&  board[1][1] == 1 &&  board[1][2] == 1) {
        winner = 1;
    } 
    if (board[2][0] == 1 &&  board[2][1] == 1 &&  board[2][2] == 1) {
        winner = 1;
    } 
    if (board[0][0] == 1 &&  board[1][0] == 1 &&  board[2][0] == 1) {
        winner = 1;
    } 
    if (board[0][1] == 1 &&  board[1][1] == 1 &&  board[2][1] == 1) {
        winner = 1;
    } 
    if (board[0][2] == 1 &&  board[1][2] == 1 &&  board[2][2] == 1) {
        winner = 1;
    } 
    if (board[0][0] == 1 &&  board[1][1] == 1 &&  board[2][2] == 1) {
        winner = 1;
    } 
    if (board[0][2] == 1 &&  board[1][1] == 1 &&  board[2][0] == 1) {
        winner = 1;
    } 
    // --- player 2
    if (board[0][0] == 2 &&  board[0][1] == 2 &&  board[0][2] == 2) {
        winner = 2;
    } 
    if (board[1][0] == 2 &&  board[1][1] == 2 &&  board[1][2] == 2) {
        winner = 2;
    } 
    if (board[2][0] == 2 &&  board[2][1] == 2 &&  board[2][2] == 2) {
        winner = 2;
    } 
    if (board[0][0] == 2 &&  board[1][0] == 2 &&  board[2][0] == 2) {
        winner = 2;
    } 
    if (board[0][1] == 2 &&  board[1][1] == 2 &&  board[2][1] == 2) {
        winner = 2;
    } 
    if (board[0][2] == 2 &&  board[1][2] == 2 &&  board[2][2] == 2) {
        winner = 2;
    } 
    if (board[0][0] == 2 &&  board[1][1] == 2 &&  board[2][2] == 2) {
        winner = 2;
    } 
    if (board[0][2] == 2 &&  board[1][1] == 2 &&  board[2][0] == 2) {
        winner = 2;
    } 
    // hòa 
    int add = 0;
    for (int i = 0; i < 3; i ++) {
       for (int j = 0; j <3; j ++) {
           
           if (board[i][j] == 0) {
               add += 1;
               
           }
        }
    }
    if (add > 0) {
        return winner;
    } else {
        winner = 3;
        return winner;
    }
        
    
    return winner;
}
