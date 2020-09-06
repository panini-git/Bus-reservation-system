#include<iostream>
#include<string>
using namespace std;
class Bus
{
private:
  int seat[30]={0};
  int seat_no;
  string passenger_name[30];
  string driver_name;
  string arr_time,dep_time;
public:
  void install()
  {
    cout<<"Enter the drivers name: ";
    cin>>driver_name;
    cout<<"Arrival time: ";
    cin>>arr_time;
    cout<<"Departure time: ";
    cin>>dep_time;
  }
  void reservation()
  {
     cout<<"Enter your seat number: ";
     cin>>seat_no;
     if(seat[seat_no]==0){
       cout<<"Enter your name: ";
       cin>>passenger_name[seat_no];
       seat[seat_no]=1;
       cout<<"Your seat is booked"<<endl;

     }
     else{
       cout<<"This seat is booked, kindly pick other one"<<endl;
       reservation();
     }
  }
  void show()
  {
    cout<<"The bus seats are reserved as follows: ";
    for(int i=0;i<30;i++){
        cout<<i+1<<". "<<passenger_name[i]<<" ";
    }
  }
};

int main()
{
  Bus b[5];
  int bs;
  int ch;
  cout<<"Enter the bus number: ";
  cin>>bs;
  while(1){
    cout<<"1. Install\n2. Reservation\n3. Show\n4. Change bus number\n5. Exit\nEnter the choice: ";
      cin>>ch;
    if(ch==1)
      b[bs].install();
    if(ch==2)
      b[bs].reservation();
    if(ch==3)
      b[bs].show();
      if(ch==4){
          cout<<"Enter the bus number: ";
        cin>>bs;
      }
    if(ch==5)
      break;
  }
}
