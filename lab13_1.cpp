#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int temp;
	for(int end = 1;end < N;end++)
	{
		
		for(int i = 0; i < 10; i++) 
		{
			if(i == end) cout << "[" << d[i] << "] ";
			else cout << d[i] << " ";
		}
		cout << "=> ";
		
		temp = d[end];
		for(int j = end; j>0; j--)
		{
			
			if(d[j] > d[j-1])
			{
			swap(d,j,j-1);
			}
			else if(j == N-1) break;
		}
		
		bool count = 0;
		for(int k = 0; k < 10; k++)
		{
			if(d[k] == temp && count == 0) 
			{
				cout << "[" << d[k] << "] ";
				count++;
			}
			else cout << d[k] << " ";
		}		

		cout << "\n"; 
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	

	return 0;
}
