//#include<iostream>
//using namespace std;
//int main ()
//{
//	int n;
//	cout<<"enter a integer: ";
//	cin>>n;
//	if (n>0){
//		cout<<"absolute value of n = "<<n<<" is "<<n;	
//	}
//	else{// here else is n<=0
//		cout<<"absolute value of n = "<<n<<" is "<<n*(-1);	// we can also write as -n
//	}
//}
//// here the value stored in n is not changing





//************method 2**********


#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a integer: ";
	cin>>n;
	if (n<0){
		n=-n;
	}
	cout<<n;

}
