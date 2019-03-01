#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}//ไม่ได้ใช้

int main(){
	
	//Write your code here
	ifstream read("score1.txt");
	int N=20;
	double f[N];
	string point;
	string ad;
	int max,min;
	for(int i=0;i<N;i++){
		getline(read,point);
		f[i]=atof(point.c_str());
	}
	for(int j=0;j<N-1;j++){
	for(int i=0;i<N-1;i++){
		if(f[i+1]>f[i]){
			swap(f[i+1],f[i]);
		}
	}
	}
	ofstream toro("result.txt");
	for(int j=0,i=0;j<N;j++){
		if(f[j]==f[j-1]){
			toro<<i<<":"<<f[j]<<endl;
		}else{
			i=j+1;
		toro<<j+1<<":"<<f[j]<<endl;
		}
	}
	toro.close();
	return 0;
}

