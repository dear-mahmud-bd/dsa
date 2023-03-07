#include<stdio.h>
#include<stdbool.h>
void printCell(int ar[][4], int n){
    printf("\n");
    for ( int i=1; i<=n; i++){
        for ( int j=1; j<=n; j++){
           if(ar[i][j]==-1)
            printf("\t ");
           if(ar[i][j]==1)
            printf("\tX");
           if(ar[i][j]==2)
            printf("\tO");
           if(j<n)
            printf("\t|");
        }
        if(i<n)printf("\n---------------- --------------- ----------------\n");
    }
    printf("\n\n");;
}
void printWin(int ar[][4], int n, int player){
    printf("\n");
    for ( int i=1; i<=n; i++){
        for ( int j=1; j<=n; j++){
           if(ar[i][j]==player){
            if(ar[i][j]==1){
                printf("\tX");
            }else{
                printf("\tO");
            }
           }else{
            printf("\t ");
           }
           if(j<n)
            printf("\t|");
        }
        if(i<n)printf("\n---------------- --------------- ----------------\n");
    }
    printf("\n\n");;
}
int isWin(int ar[][4], int n){
    for ( int i=1; i<=n; i++){
        if(ar[i][1]==ar[i][2] && ar[i][3]==ar[i][2] && ar[i][1]!= -1)
        return ar[i][1];
    }
    for ( int j=1; j<=n; j++){
        if(ar[1][j]==ar[2][j] && ar[3][j]==ar[2][j] && ar[1][j]!= -1)
        return ar[1][j];
    }
    if(ar[1][1]==ar[2][2] && ar[3][3]==ar[2][2] && ar[1][1]!= -1)
        return ar[1][1];
    if(ar[1][3]==ar[2][2] && ar[3][1]==ar[2][2] && ar[2][2]!= -1)
        return ar[2][2];
    return -1;
}
int main(){
    int i,j,n=3, ar[4][4];
    for ( i=1; i<=n; i++){
        for ( j=1; j<=n; j++){
            ar[i][j]=-1;
        }
    }
    bool player1=true;
    bool player2=false;
    while (true){
        printCell(ar,n);
        if (player1==true){
            int r,c;
            Flag1:
            printf("Player 1 turn (X), Enter Row and Colum: ");
            scanf("%d %d",&r,&c);
            if(ar[r][c]!=-1){
                printf("Invalid Cell\n");
                goto Flag1;
            }
            ar[r][c]=1;
            player1=false;
            player2=true;
        }else{
            int r,c;
            Flag2:
            printf("Player 2 turn (O), Enter Row and Colum: ");
            scanf("%d %d",&r,&c);
            if(ar[r][c]!=-1){
                printf("Invalid Cell\n");
                goto Flag2;
            }
            ar[r][c]= 2;
            player1=true;
            player2=false;
        }
        if(isWin(ar,n)==1){
            printCell(ar,n);
            printf("\n\t    Player 1 Won the GAME ..!\n\t    The Result is-\n");
            printWin(ar,n,1);
            break;
        }else if(isWin(ar,n)==2){
            printCell(ar,n);
            printf("\n\t    Player 2 Won the GAME ..!\n\t    The Result is-\n");
            printWin(ar,n,2);
            break;
        }
    }
    return 0;
}