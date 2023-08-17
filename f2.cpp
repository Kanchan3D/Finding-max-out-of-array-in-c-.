#include <iostream>
using namespace std;
int main(){
	int a[5]={122,100,200,209,500};// maximum in this array=500
	int max=0;//intialising maximum number variable;
	for(int i=0;i<5;i++)//using for loop for tansversing array;
	{
		if(a[i]>max){    // using if statement for comparing maximum with array elements;
			max=a[i];
		};
	}
	cout <<"The maximum element in this array is "<< max <<endl;
}
