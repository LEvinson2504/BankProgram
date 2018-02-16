#include <iostream>
#include <conio.h>

class account
{
  float amount;
  char name[20], opt;
public:
  void splash();
  account () {amount=10000;}
  void getdata();
  void showdata();
  float deposit(float t);
  float withdraw(float t);
  float loan();
};
void account::splash()
{cout<<"@@@@@@@@@@@@@@@Welcome To LEvinson Banking@@@@@@@@@@@@@@@@@@"<<endl;}

void account::getdata()
{cout<<"Enter your name: ";
 cin>>name;
 cout<<"Please Proceed"<<name<<endl;
}
void account::showdata()
{
cout<<endl<<"Available Funds: "<<amount;

}

float account::deposit(float t)
{
 amount+=t;
 cout<<"Available funds :"<<amount;
return(amount);
}

float account::withdraw(float t)
{ if(t>amount){ cout<<"insufficient funds";}
else {amount-=t;
cout<<"Available funds :"<<amount;
return(amount);
}
}

float account::loan()
{ int n;
  float r=0,ln, in, tot;
  cout<<"How much loan do you need??";
  cin>>ln;
  cout<<"How many year do you need to repay it?";
  cin>>n;
  in=(ln*n*r)/100;
  cout<<"The interest will be : "<<in<<"rs";
  tot=in+ln;
  cout<<"The total amount to be paid will be :"<<tot<<"rs";
}

void main()
{account a;
 float amt;
 char opt;
clrscr();
 a.splash();
 a.getdata();
 a.showdata();

cout<<endl<<"Do you wish to Withdraw/Deposit/Loan(y/n)";
cin>>opt;
 if (opt=='y')
 {cout<<"Press 1: withdraw"<<endl<<"Press 2: deposit"<<endl<<"Press 3: loan";
  cin>>opt; }
  else {cout<<"Thank you";}
  if (opt=='1'){cout<<"How much do you want to withdraw?";
	      cin>>amt;
	      a.withdraw(amt);
	      }
  else if(opt=='2'){cout<<"How much do you want to deposit?";
	cin>>amt;
	a.deposit(amt);}
  else if (opt=='3'){a.loan();}

getch();


}
