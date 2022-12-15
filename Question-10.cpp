#include <iostream>
#include <math.h>
using namespace std;
class triangle{
	private:
		float h;
		float b;
		float side_a;
		float side_c;
		float side_d;
		
	public:
       void get_data(float height ,float base ,float a ,float c ,float d){
			h=height;
			b=base;
			side_a=a;
			side_c=c;
			side_d=d;
		}
void print () const{
        cout<<"the height h: "<<h<<" and the base b: "<<b<<endl;
        cout<<"the sides of triangle are a: "<<side_a<<" ,c: "<<side_c<<" and d: "<<side_d<<endl;
		}
void area(float a, float c, float d){
		double p=0.0;
		p=a + c + d;
		cout<<"the perimeter of the tringle is :"<<p<<endl;
		float q=p*0.5;
		a = sqrt(q*(q-a)*(q-c)*(q-d));
		cout<<"area of the tringle is: "<<a;
		}
void area(float h ,float b){
		double a=0.0;
		a = 0.5*h*b;
		cout<<"the area of the triangle is: "<<a;
	    }
void operator = (const triangle &t){    //assignment operator 
	        int height=t.h;
	    	int base=t.b;
	    	int a=t.side_a;
	    	int c=t.side_c;
	    	int d=t.side_d;
		}
		
friend bool operator == ( const triangle &tr , const triangle &tr1 ){       //equality operator 
if( tr.side_a == tr1.side_a && tr.side_c == tr1.side_c && tr.side_d == tr1.side_d && tr.h == tr1.h && tr.b == tr1.b){
                return 1;}
else {
		return 0;
	}
		}
};

int main(){
	float height ,base ,a, c ,d;
	cout<<"enter the height and base of the triangle as well the sides of the triangle: ";
	cin>>height>>base>>a>>c>>d;
	triangle tr;
	tr.get_data(height ,base ,a ,c ,d);
	tr.print();
	cout<<endl;
	cout<<"area using sides of the triangle: "<<endl;
	tr.area(a,c,d);
	cout<<endl;
	cout<<"area using height and base of the triangle: "<<endl;
	tr.area(height ,base);
	cout<<endl;
	triangle tr1;
	cout<<"the another triangle is: "<<endl;
       cin>>height>>base>>a>>c>>d;
	tr1.get_data(height ,base ,a,c,d);
	tr1.print();
	cout<<"area using sides of the triangle: "<<endl;
	tr1.area(a,c,d);
	cout<<endl;
	cout<<"area using height and base of the triangle: "<<endl;
	tr1.area(height, base);
	cout<<endl;
	if(tr==tr1){
cout<<"the area of the two triangle are equal";
	}
	else{
		cout<<"the area of the two triangle are not equal";
	}
	return 0;
}
