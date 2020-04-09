#include<iostream>
#include<stdlib.h>
using namespace std;
#define N 4

int board[N][N];
int solusi = 1;

void Print(){
	int i, j;
	printf("Solusi %d:\n", solusi);
	solusi++;
	for(i = 1; i <= N; i++){
		for(j = 1; j <= N; j++){
			if(board[i][j] == i){
				printf("1 ");
			}
			else printf("0 ");
		}
		printf("\n");
	}
}
    
void area(int row, int t, int inisial, int mrow){
	int i;
	board[row][t] = mrow;
	for(i = row; i <= N; i++){
		//diagonal left
		if(t-(i-row) > 0){
			if(board[i][t-(i-row)] == inisial) board[i][t-(i-row)] = mrow;
		}
		//every column
		if(board[i][t] == inisial) board[i][t] = mrow;
		//diagonal right
		if(t+(i-row) < N+2){
			if(board[i][t+(i-row)] == inisial) board[i][t+(i-row)] = mrow;
		}
	}
}

void Solve(int row){
	int i, j, k;
	if(row == N+1){
		Print();
		cin.get();
		return;
	}
	for(i = 1; i <= N; i++){
		if(board[row][i] == 0){
			area(row, i, 0, row);
			bool place = false;
			for(j = row + 1; j <= N; j++){
				place = true;
				for(k = 1; k <= N; k++){
					if(board[j][k]==0){
						place = false;
					}
				}
				if(place) break;
			}
			if(!place) Solve(row+1);
			area(row, i, row, 0);
		}
	}
}
int main(){
	board[N][N]={0};
	Solve(1);
}
