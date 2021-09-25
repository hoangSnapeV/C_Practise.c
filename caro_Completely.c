#include <stdio.h>
// CheckWin//
int checkCaro(int board[3][3]);
int checkValid(int board[3][3]);
int play(int player, int x, int y, int board[3][3]);
//

int check_ = 1;
int v = 1;
int main() {
    // correct 1
     int board[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    printf("You play first player 1:\n");
    play(1, 1, 1, board);
    play(2, 1, 1, board);//wrong
    play(2, 0, 1, board);
    play(0, 2, 1, board);//wrong
    play(1, 0, 0, board);
    play(2, 1, 2, board);
    play(1, 2, 4, board);// wrong
    play(2, 0, 2, board);// player 2 don't play second turn consecutively.
    play(1, 0, 2, board);
    play(1, 2, 2, board);  // player 1 don't play second turn consecutively
    play(2, 2, 1, board);
    play(1, 2, 2, board); 
    int result = checkCaro(board);
    printf("Who is win ? Player %d\n", result);
}
//check win who is winner or draw
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
// Check_Valid***/// hợp lệ 

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
    //printf("turn_game = %d ", turn_game);
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

// Play game
int play(int player, int x, int y, int board[3][3]) {

    
    // giá trị đè lên là return // not oveRidden// player != 1 or 2;
    // thang 2 no danh 2 lan
    if (x > 2 || y > 2 || board[x][y] != 0) {
        check_ = 0;
        printf("Wrong!!!\n");
        return check_;
          
    }
    if (player != 2 && player != 1 ) {
        printf("Wrong!!!\n");
        check_ = 0;
        return check_;
    }
    // not turn consecutively
    if (player != v) {
        printf("Wrong!!!\n");
        return check_;
        
    }
    //
    
    // change in board
    board[x][y] = player;
    //print ra caro 
    for (int k = 0; k < 3; k ++) {
        for (int g = 0; g < 3; g ++) {
            printf("%d", board[k][g]);
        }
    printf("\n");
    }
    int check_1 = checkValid(board);
    printf("ban caro co hop ly khong? %d\n ", check_1);
    printf("\n");
    //--- checkWinner
    int result = checkCaro(board);
    if(result != 0) {
        return check_;
    }
    if (player == 1) {
        printf("Next, Turn player 2:\n");
        v = 2;
    } else if (player == 2) {
        printf("Next, Turn player 1:\n");
        v = 1;
    }
    return check_;
}

