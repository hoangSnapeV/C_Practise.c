#include <stdio.h>
// CheckWin//
int checkCaro(int board[3][3]);
int checkValid(int board[3][3]);

int main() {
    // correct 1
    int board[3][3] = {
        {0, 0, 0},
        {1, 1, 1},
        {2, 0, 2}
    };
    int check_1 = checkValid(board);
    printf("ban caro co hop ly khong? %d\n ", check_1);
    int result = checkCaro(board);
    printf("Who is win ? Player %d\n", result);
    //---wrong 2
    int board_1[3][3] = {
        {0, 0, 1},
        {1, 2, 1},
        {2, 2, 2}
    };
    int check_2 = checkValid(board_1);
    printf("ban caro co hop ly khong? %d\n", check_2);
    int result_1 = checkCaro(board_1);
    printf("Who is win ? Player %d\n", result_1);
    //--- wrong 3
  
    int board_2[3][3] = {
        {1, 2, 1},
        {1, 2, 2},
        {2, 1, 2}
    };
    int check_3 = checkValid(board_2);
    printf("ban caro co hop ly khong? %d\n", check_3);
    int result_2 = checkCaro(board_2);
    printf("Who is win ? Player %d\n", result_2);
    // -- check 0- correct 4
     
    int board_3[3][3] = {
        {1, 1, 0},
        {1, 2, 2},
        {2, 0, 0}
    };
    int check_4 = checkValid(board_3);
    printf("ban caro co hop ly khong? %d\n", check_4);
    int result_3 = checkCaro(board_3);
    printf("Who is win ? Player %d\n", result_3);
    // new caro_ not value
     int board_4[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    int check_5 = checkValid(board_4);
    printf("ban caro co hop ly khong? %d\n", check_5);
    int result_4 = checkCaro(board_4);
    printf("Who is win ? Player %d\n", result_4);
    
    
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
// Check_Valid***
int checkValid(int board[3][3]) {
    int player_1 = 0;
    int player_2 = 0;
    int space = 0;
    int valid = 0;
    //
    
    for (int k = 0; k < 3; k ++) {
        for (int g = 0; g < 3; g ++) {
            int num = board[k][g];
            if (num == 1) {
                player_1 += 1;
            } else if(num == 2) {
                player_2 += 1;
            } else {
                space += 1;
            }
        }
    }
    // ---
    int turn_game = player_1 - player_2;
    printf("turn_game = %d ", turn_game);
    if (space == 9) {
        valid = 1;
        return valid;
    } else if (turn_game == 1 || turn_game == 0 ) {
        valid = 1;
        return valid;
    } else {
        return valid;
    }
    
}
