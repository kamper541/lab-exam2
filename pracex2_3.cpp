#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
char table[8][8];

void showTable();
void randomTable();

int main(){
	srand(time(0));	
	randomTable();
	showTable();
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}

//Write definition of function randomTable() here.
void randomTable(){
	int a;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
				a=rand()%90+1;
			for(int k=0;a<65||k>INT_MAX;k++){
				a=rand()%90+1;
			}
			table[i][j]=a;
		}
	}
}

