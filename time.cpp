#include<iostream>
using namespace std;
 
class time{
	public:
 		int hr;
		int min;
		int sec;
	public:
	int time_in_sec(int hr,int min,int sec){
			int a= hr*3600;
			int b=min*60;
			 return (a+b+sec);
			
			
		}
	
	
};

int main()
{
	time t;
	cout<<"Enter time: "<<endl;
	cout<<" hours?: ";
	cin>>t.hr;
	cout<<"\n minute? : ";
	cin>>t.min;
    cout<<"\n seconds? : ";
	cin>>t.sec;
	 cout<<"\nThe time is = "<<t.hr<<":"<<t.min<<":"<<t.sec;
	 cout <<"\nTime in total seconds : "<<t.time_in_sec(t.hr,t.min,t.sec);
	 return 0;	
}
