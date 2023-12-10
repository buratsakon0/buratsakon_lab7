#include<iostream>
using namespace std;

char before(char x){
        if( x < 65 or x > 90){
            return '0';
        }
        if( x == 'A'){
            return 'Z';
        }else{
            return x-1;
        }
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
