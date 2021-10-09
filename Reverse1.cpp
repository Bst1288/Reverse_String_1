#include<iostream>
using namespace std;

int main(){
	string message;
	cout << "Pls,enter message..."<<endl;
	cin >> message;
	
	string new_message = "";

	for(int i = message.size()-1;i>=0;--i){
		new_message += message[i];
	}
	cout<<new_message;
}


