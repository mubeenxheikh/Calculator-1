/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
	float a;
	float b;
	int c;
	cout<<"Enter Numbers"<<endl;
	cin>>a>>b;
	
	
	while(true){
		cout<<"for + press 1, for - press 2, for * press 3 , for /press 4, for % press 5, to exit press any number"<<endl;
		cout<<"enter operate you want to do"<<endl;
		cin>>c;
		if(c==1){
			cout<<"sum of 2 number "<<a+b<<endl;
		}
		else if (c==2){
		cout<<"subtract  of 2 number "<<a-b<<endl;
		}
			else if (c==3){
		cout<<"multiplication  of 2 number "<<a*b<<endl;
		}
			else if (c==4){
		cout<<"divide  of 2 number "<<a/b<<endl;
			}
			else if (c==5){
		cout<<"qutionet  of 2 number "<<a/b<<endl;
		}
		
		else {
			break;
		}
		
	}
	return 0;
}
