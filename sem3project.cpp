#include<iostream>
#include<cmath>
#include<stack>
#include<queue>
using namespace std;
int main(){
	while(true){
		double length,width,area,bricks,cement,paint,sewage;
		const double brick_size=0.2*0.1*0.05;//in meters
		const double mortar_waste=0.05;
		const double paint_coverage=0.2;//in sqr meter per liter
		cout<<"Enter the length of house in meters=";
		cin>>length;
		cout<<"Enter the width of the house in meters=";
		cin>>width;
		area=length*width;
		bricks=ceil(area/brick_size*1.025);//2.5 unusable bricks
		cement=ceil(area*0.05*1.05/1.05);//5% mortar waste
		paint=ceil(area/paint_coverage);
		sewage=ceil(area*0.05);
		stack<int>s;
queue<int>q;
//loop for pusing values into stack and queue
for(int i=0;i<3;i++){
	switch(i){
		case 0:
			s.push(bricks);
			cout<<"Number of bricks required after asuming 2.5 % of bricks are wasted ="<<s.top()<<endl;
			s.pop();
			break;
			case 2:
				q.push(paint);
				cout<<"amount of paint required in liters after asuming 5% of the paint is wasted="<<q.front()<<endl;
				q.pop();
                break;
                default:
				break;	}
                        }
                        s.push(sewage);
                        cout<<"amount of sewage required in cubic meters ="<<s.top()<<endl;
						
						cout<<"DO you want to run the program again? (y/n):";
						char choice;
						cin>>choice;
						if( choice !='y'&& choice != 'Y') {
							break;
						}         
}
return 0;
}
