#include <stdio.h>
#include <string.h>



void start() {

    char command[8];
    printf("Type \"CMDchess\" to play a game!\n");
    scanf("%8s", command);

    if(strcmp(command, "CMDchess") == 0) {

        printf("\nINSTRUCTIONS:\n");
        printf("All commands must be preceded by a \"\\\".\n");
        printf("Lowercase always moves first.\n");
        printf("To start a game, type \\start");
        printf("To select a peice, type \"\\select_Y_X\" \n");
        printf("After the board has printed, select a peice by typing \"\\move_Y_X\"\n");
        printf("Your peice will then move, and the other player will be notified.\n");
        printf("Anytime you try to select a worng peice, or execute an illegal move, the game\n");
        printf("will make you try again\n");
        printf("For these, and more commands, type\"\\help\"\n");

        scanf("%8s", &command);
        if(strcmp(command, "\\start") == 0) {
            printf("Succ\n");
        } else {
            scanf("%8s", &command);
            if(strcmp(command, "\\help") == 0) {
            printf("Start game: \\start\n");
            printf("Select Peice: \\select_Y_X\n");
            printf("Move Peice: \\move_Y_X\n");
            printf("Reprint Board: \\board\n");
            printf("Veiw chess rules: \\rules\n");
            printf("Veiw points: \\points\n");
            printf("Reset game: \\reset\n");
        } else {
                start();
            }
        }
    } else {
        start();
    }
}



void printboard() {
    int board[8][8];
    int count = '0';

    //This fills the board
    for(int y = 0; y < 8; y++) {
        for(int x = 0; x < 8; x++) {
            //This is the charecter injection point
            board[y][x] = count;
        }
    }

    //This prints the board
    for(int y = 0; y < 8; y++) {
        for(int x = 0; x < 8; x++) {
            putchar(board[y][x]);
            putchar(' ');
        }
        putchar('\n');
    }
}



int main() {

    start();

    return 0;
}



