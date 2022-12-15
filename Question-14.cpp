#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(){
	ifstream btxt;
	btxt.open("book.txt");
	ofstream ntxt;
	ntxt.open("new.txt");
	
	if(!btxt && !ntxt ){
		cerr<<"no such file exits ";
		exit(100);
	}
	
	char ch;
	int count=0;
	
	while(btxt.get(ch)){
		if(ch!=32 && ch!=10){
			cout<<ch;
		    ntxt.put(ch);
		    count++;
		}
	}
	
	btxt.close();
	ntxt.close();
	return 0;
}