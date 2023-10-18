#include<iostream>
using namespace std;
int swap(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	cout<<a<<" "<<b;
}
int swap_multi(int a,int b){
//	a=2,b=3
	a=a+b;/*5*/
	b=a-b;/*2*/
	a=a-b;/*3*/
	cout<<a<<" "<<b;
}
int swap_multi_division(int a, int b){
	//	a=2,b=3
	a=a*b;/*6*/
	b=a/b;/*2*/
	a=a/b;/*3*/
		cout<<a<<" "<<b;

}
int main(){
	int x,y;
	cin>>x>>y;
//	swap(x,y);
//	swap_multi(x,y);
	swap_multi_division(x,y);
	return 0;
	
}
