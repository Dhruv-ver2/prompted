#include<stdio.h>

char check(char arr[3][3]) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ') {
            return arr[i][0]; // Return the winner (X or O)
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ') {
            return arr[0][i]; // Return the winner (X or O)
        }
    }

    // Check diagonals
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ') {
        return arr[0][0]; // Return the winner (X or O)
    }
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != ' ') {
        return arr[0][2]; // Return the winner (X or O)
    }

    // No winner
    return ' ';
}


void input(char arr[][3],int pos,int playr){
    int c=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c+=1;
            if(pos==c)
                if(playr==1)
                    arr[i][j]='X';
                else if(playr==2)
                    arr[i][j]='O';
        }
    }
}

void displayboard(char arr[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            char ele=arr[i][j];
            if(ele=='X' || ele=='O')
                printf("%c\t",ele);
            else
                printf(" \t");

        }
        printf("\n");
        
    }
}

int player(int n){
    if(n%2==0)
        return 2;
    else if(n%2!=0)
        return 1;
}

void main(){
    char board[3][3];
    int p;
    int pl;
    for(int i=0;i<9;i++){
        pl=player(i+1);
        printf("<----Turn of player %d---->\n",pl);
        printf("Enter the position:");
        scanf("%d",&p);

        input(board,p,pl);

        displayboard(board);

        if(check(board)=='X'){
            printf("Winner is Player 1");
            break;}
        else if(check(board)=='O'){
            printf("Winner is player 2");
            break;}

    }
}