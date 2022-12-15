#include<iostream>
#include<cstring>
using namespace std;
int main(){
	
	while(1){
    cout<<"press 1 to show address of each character in string"<<endl;
    cout<<"press 2 to concatenate two strings using strcat function"<<endl;
    cout<<"press 3 to compare two strings "<<endl;
    cout<<"press 4 to calculate length of the string  "<<endl;
    cout<<"press 5 to convert all lowercase characters to uppercase (to upper function) "<<endl;
    cout<<"press 6 to reverse the string "<<endl;
    cout<<"press 7 to quit the program "<<endl;
	                                                                    
       int choice;
	cout<<"\nenter your choice: ";
	cin>>choice;
	switch(choice){
		case 1:
			{
			char str[100];
			cout<<"enter string: ";
			cin>>str;
			int i=0;
			while(str[i]!='\0'){
				cout<<"the address of "<<str[i]<<"       is: "<< (int*)&str[i]<<endl;
				i++;
			}
			break;}
			
	          case 2:
			{
				char str1[100],str2[100],str3[100];
			    cout<<"enter first string: ";
			    cin>>str1;
			    cout<<"enter second string: ";
			    cin>>str2;
			    strcat(str1,str2);
			    cout<<str3<<endl;
				break;
			}
		case 3:
			{
				string str1,str2;
			    cout<<"enter first string: ";
			    cin>>str1;
			    cout<<"enter second string: ";
			    cin>>str2;
			    if(str1 != str2){
			    	cout<<str1<<" is not equal to "<<str2<<endl;
			    	if(str1>str2){ cout<<str1<<" greater than "<<str2<<endl; }
					else{ cout<<str2<<" greater than "<<str1<<endl; }
				}
				else{ cout<<"they are equal"<<endl; }
				
				break;
			}
		case 4:
			{
			char s[100];
			cout<<"enter string: ";
			cin>>s;
			int count=0;
			char *ptr;
			ptr = &s[0];
			while(*ptr!='\0'){
				ptr++,count++;
			}	
			cout<<"length of string is: "<<count<<endl;
			break;
			}
		    
		case 5:
		    {
		    	char str[100];
		    	cout<<"enter your string: ";
		    	cin>>str;
		    	int i=0;
		    	while(str[i]!='\0'){
		    		str[i]=tolower(str[i]);
		    		i++;
				}
				cout<<str<<endl;
				break;
		        
		    }	
		case 6:
			{
				char str[100];
				cout<<"enter string: ";
				cin>>str;
				int count=0;
				int i=0;
				while(str[i]!='\0'){
					count++;
					i++;
				}
				cout<<"reverse of your string is: ";
				for(int j=count ;j>=0;j--){
					cout<<str[j];
				}
				cout<<endl;
				break;
			}
			
		case 7:
			{
				cout<<"program ended";
				exit(0);
				break;
			}
			
		default:
			cout<<"invalid choice"<<endl;
	}
}	
	return 0;
}




