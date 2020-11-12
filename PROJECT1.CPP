/*PROJECT ON
  RECHARGE MANAGEMENT SYSTEM
  MADE BY SUSHANT AA
  AND TANMAY ARORA*/
#include<bits/stdc++.h>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<time.h>
using namespace std;

fstream file,f1,f2;     //declaring file globally
void customer();
void recharge();
int pay();
void pay_menu();
class payment;
COORD coord= {0,0}; // this is global variable
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
HANDLE hCon;

enum Color { DARKBLUE = 1, DARKGREEN, DARKTEAL, DARKRED, DARKPINK, DARKYELLOW, GRAY, DARKGRAY, BLUE, GREEN, TEAL, RED, PINK, YELLOW, WHITE };

void setcolor(Color c){
        if(hCon == NULL)
                hCon = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hCon, c);
}
void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}
void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}
void clreol() {

COORD coord;
DWORD written;
CONSOLE_SCREEN_BUFFER_INFO info;

GetConsoleScreenBufferInfo(GetStdHandle
(STD_OUTPUT_HANDLE), &info);
coord.X = info.dwCursorPosition.X;
coord.Y = info.dwCursorPosition.Y;

FillConsoleOutputCharacter (GetStdHandle
(STD_OUTPUT_HANDLE), ' ',
info.dwSize.X - info.dwCursorPosition.X *
info.dwCursorPosition.Y, coord, &written);
gotoxy (info.dwCursorPosition.X + 1,
info.dwCursorPosition.Y + 1);
}
//UDF FOR MOBILE PHONE
void phone()
{
    //setcolor(RED);
	system("cls");
	SetColorAndBackground(4,1);
	int i,j;
	for(i=0;i<20;i++)
	{
		gotoxy(10+i,5);
		cout<<char(177);
	}
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	for(i=0;i<15;i++)
	{
		gotoxy(10,5+i);
		cout<<char(177);
	}
	for(i=0;i<15;i++)
	{
		gotoxy(30,5+i);
		cout<<char(177);
	}

	for(i=0;i<17;i++)
	{
		gotoxy(12+i,6);
		cout<<"_";
	}
	for(i=0;i<17;i++)
	{
		gotoxy(12+i,12);
		cout<<"_";
	}
	for(i=0;i<6;i++)
	{
		gotoxy(12,7+i);
		cout<<char(221);
	}
	for(i=0;i<6;i++)
	{
		gotoxy(28,7+i);
		cout<<char(221);
	}
	gotoxy(12,13);
	cout<<"___";
	gotoxy(19,14);
	cout<<char(177)<<char(177)<<char(177);
	gotoxy(26,13);
	cout<<"___";
	gotoxy(12,14);
	cout<<"___";
	gotoxy(26,14);
	cout<<"___";

	gotoxy(12,16);        //printing numbers in mobile
	cout<<"1";
	gotoxy(20,16);
	cout<<"2";
	gotoxy(27,16);
	cout<<"3";
	gotoxy(12,17);
	cout<<"4";
	gotoxy(20,17);
	cout<<"5";
	gotoxy(27,17);
	cout<<"6";
	gotoxy(12,18);
	cout<<"7";
	gotoxy(20,18);
	cout<<"8";
	gotoxy(27,18);
	cout<<"9";
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	//for dialing and displaying on screen
	gotoxy(20,18);
	sleep(0.2); 
	clreol();
	gotoxy(27,18);
	cout<<"9";
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	gotoxy(30,18);
	cout<<char(177);
	gotoxy(30,19);
	cout<<char(177);
	gotoxy(10,19);
	cout<<char(177);
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	gotoxy(14,9);
	cout<<"8";
	sleep(0.3); 
	gotoxy(20,18);
	cout<<"8";

	gotoxy(20,18);
	sleep(0.2); 
	clreol();
	gotoxy(27,18);
	cout<<"9";
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	gotoxy(30,18);
	cout<<char(177);
	gotoxy(30,19);
	cout<<char(177);
	gotoxy(10,19);
	cout<<char(177);
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	gotoxy(15,9);
	cout<<"8";
	sleep(0.3); 
	gotoxy(20,18);
	cout<<"8";

	gotoxy(20,17);
	sleep(0.2); 
	clreol();
	gotoxy(27,17);
	cout<<"6";
	gotoxy(27,18);
	cout<<"9";
	gotoxy(20,18);
	cout<<"8";
	gotoxy(12,18);
	cout<<"7";
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	gotoxy(30,17);
	cout<<char(177);
	gotoxy(30,18);
	cout<<char(177);
	gotoxy(30,19);
	cout<<char(177);
	gotoxy(10,18);
	cout<<char(177);
	gotoxy(10,19);
	cout<<char(177);
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	gotoxy(16,9);
	cout<<"5";
	sleep(0.3); 
	gotoxy(20,17);
	cout<<"5";

	gotoxy(12,16);
	sleep(0.2); 
	clreol();
	gotoxy(30,16);
	cout<<char(177);
	gotoxy(20,16);
	cout<<"2";
	gotoxy(27,16);
	cout<<"3";
	gotoxy(12,17);
	cout<<"4";
	gotoxy(20,17);
	cout<<"5";
	gotoxy(27,17);
	cout<<"6";
	gotoxy(27,18);
	cout<<"9";
	gotoxy(20,18);
	cout<<"8";
	gotoxy(12,18);
	cout<<"7";
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	gotoxy(30,17);
	cout<<char(177);
	gotoxy(30,18);
	cout<<char(177);
	gotoxy(30,19);
	cout<<char(177);
	gotoxy(10,17);
	cout<<char(177);
	gotoxy(10,18);
	cout<<char(177);
	gotoxy(10,19);
	cout<<char(177);
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	gotoxy(17,9);
	cout<<"1";
	sleep(0.3); 
	gotoxy(12,16);
	cout<<"1";

	gotoxy(12,16);
	sleep(0.2); 
	clreol();
	gotoxy(30,16);
	cout<<char(177);
	gotoxy(20,16);
	cout<<"2";
	gotoxy(27,16);
	cout<<"3";
	gotoxy(12,17);
	cout<<"4";
	gotoxy(20,17);
	cout<<"5";
	gotoxy(27,17);
	cout<<"6";
	gotoxy(27,18);
	cout<<"9";
	gotoxy(20,18);
	cout<<"8";
	gotoxy(12,18);
	cout<<"7";
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	gotoxy(30,17);
	cout<<char(177);
	gotoxy(30,18);
	cout<<char(177);
	gotoxy(30,19);
	cout<<char(177);
	gotoxy(10,17);
	cout<<char(177);
	gotoxy(10,18);
	cout<<char(177);
	gotoxy(10,19);
	cout<<char(177);
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	gotoxy(18,9);
	cout<<"1";
	sleep(0.3); 
	gotoxy(12,16);
	cout<<"1";

	gotoxy(20,17);
	sleep(0.2);
	clreol();
	gotoxy(27,17);
	cout<<"6";
	gotoxy(27,18);
	cout<<"9";
	gotoxy(20,18);
	cout<<"8";
	gotoxy(12,18);
	cout<<"7";
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	gotoxy(30,17);
	cout<<char(177);
	gotoxy(30,18);
	cout<<char(177);
	gotoxy(30,19);
	cout<<char(177);
	gotoxy(10,18);
	cout<<char(177);
	gotoxy(10,19);
	cout<<char(177);
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	gotoxy(19,9);
	cout<<"5";
	sleep(0.3);
	gotoxy(20,17);
	cout<<"5";

	gotoxy(12,17);
	sleep(0.2);
	clreol();
	gotoxy(30,17);
	cout<<char(177);
	gotoxy(27,17);
	cout<<"6";
	gotoxy(20,17);
	cout<<"5";
	gotoxy(27,18);
	cout<<"9";
	gotoxy(20,18);
	cout<<"8";
	gotoxy(12,18);
	cout<<"7";
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	gotoxy(30,17);
	cout<<char(177);
	gotoxy(30,18);
	cout<<char(177);
	gotoxy(30,19);
	cout<<char(177);
	gotoxy(10,18);
	cout<<char(177);
	gotoxy(10,19);
	cout<<char(177);
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	gotoxy(20,9);
	cout<<"4";
	sleep(0.3);
	gotoxy(12,17);
	cout<<"4";

	gotoxy(20,17);
	sleep(0.2);
	clreol();
	gotoxy(27,17);
	cout<<"6";
	gotoxy(27,18);
	cout<<"9";
	gotoxy(20,18);
	cout<<"8";
	gotoxy(12,18);
	cout<<"7";
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	gotoxy(30,17);
	cout<<char(177);
	gotoxy(30,18);
	cout<<char(177);
	gotoxy(30,19);
	cout<<char(177);
	gotoxy(10,18);
	cout<<char(177);
	gotoxy(10,19);
	cout<<char(177);
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	gotoxy(21,9);
	cout<<"5";
	sleep(0.3);
	gotoxy(20,17);
	cout<<"5";

	gotoxy(27,18);
	sleep(0.2);
	clreol();
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	gotoxy(30,18);
	cout<<char(177);
	gotoxy(30,19);
	cout<<char(177);
	gotoxy(10,19);
	cout<<char(177);
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	gotoxy(22,9);
	cout<<"9";
	sleep(0.3);
	gotoxy(27,18);
	cout<<"9";

	gotoxy(12,17);
	sleep(0.2);
	clreol();
	gotoxy(30,17);
	cout<<char(177);
	gotoxy(27,17);
	cout<<"6";
	gotoxy(20,17);
	cout<<"5";
	gotoxy(27,18);
	cout<<"9";
	gotoxy(20,18);
	cout<<"8";
	gotoxy(12,18);
	cout<<"7";
	gotoxy(12,19);
	cout<<"*";
	gotoxy(20,19);
	cout<<"0";
	gotoxy(27,19);
	cout<<"#";
	gotoxy(30,17);
	cout<<char(177);
	gotoxy(30,18);
	cout<<char(177);
	gotoxy(30,19);
	cout<<char(177);
	gotoxy(10,18);
	cout<<char(177);
	gotoxy(10,19);
	cout<<char(177);
	for(i=0;i<21;i++)
	{
		gotoxy(10+i,20);
		cout<<char(177);
	}
	gotoxy(23,9);
	cout<<"4";
	sleep(0.3);
	gotoxy(12,17);
	cout<<"4";

	sleep(0.5);
	gotoxy(15,10);
	cout<<"DIALING...";

	sleep(1.0);
	gotoxy(15,10);
	cout<<"NO BALANCE";
	gotoxy(13,11);
	cout<<"PLEASE RECHARGE";

	sleep(1.0);
	gotoxy(35,10);
	cout<<"NOW RECHARGE ON ULTIMATE STORE";
	gotoxy(35,11);
	cout<<" AT LOWEST PRICES";
	sleep(2.0);
}
//UDF FOR OUTER BOX OF PASSWORD
void box()
{	
	int i;
	for(i=0;i<26;i++)      //for main big box
	{	gotoxy(22+i,9);
		cout<<"_";
	}
	for(i=0;i<26;i++)
	{       gotoxy(22+i,16);
		cout<<"_";
	}
	for(i=0;i<7;i++)
	{	gotoxy(22,10+i);
		cout<<"|";
	}
	for(i=0;i<7;i++)
	{	gotoxy(47,10+i);
		cout<<"|";
	}
		for(i=0;i<14;i++)            //for box of user id
		{	gotoxy(33+i,10);
			cout<<"_";
		}
		for(i=0;i<14;i++)
		{       gotoxy(33+i,12);
			cout<<"_";
		}
		for(i=0;i<2;i++)
		{	gotoxy(33,11+i);
			cout<<"|";
		}
		for(i=0;i<2;i++)
		{	gotoxy(46,11+i);
			cout<<"|";
		}
			for(i=0;i<14;i++)            //for box of password
			{	gotoxy(33+i,13);
				cout<<"_";
			}
			for(i=0;i<14;i++)
			{       gotoxy(33+i,15);
				cout<<"_";
			}
			for(i=0;i<2;i++)
			{	gotoxy(33,14+i);
				cout<<"|";
			}
			for(i=0;i<2;i++)
			{	gotoxy(46,14+i);
				cout<<"|";
			}
}
//UDF for userid password
int userid_pass()
{
	string userid;//password;
	char password[10],ch,r;
	gotoxy(23,11);
	cout<<"user id =";
	gotoxy(23,14);
	cout<<"password =";

	setcolor(BLUE);
	SetColorAndBackground(5,3);
	for(int i=0;i<3;i++)
	{
		gotoxy(34,11);
		cin>>userid;

		gotoxy(34,14);
		for(int j=0;j>=0;)
		{
			ch=getch();

		if(ch!=8 && ch!=13)
		{
			cout<<"*";
			password[j]=ch;
			j++;
		}
		else if(ch == 8)
		{
			cout<<"\b \b";
			j--;
		}
		else if(ch == 13)
		{
			password[j]='\0';
			break;
		}
		else break;
		}
		if((strcmpi(password,"sushant")==0)&&(userid == "1234tanmay"))
		   {
			gotoxy(28,24);
			cout<<"PROCESSING PLEASE WAIT...";
			int x=0;
			for(int y=1;y<=10;y++)
			{	
				gotoxy(25+x,22);
				sleep(0.25);
				cout<<char(219)<<char(219);
				x=x+2;
				gotoxy(35,27);
				cout<<y<<"0%";
			}
			sleep(0.5);
			break;
		   }
		else
		   {    if(i==2)
			{	system("cls");
				for(i=0;i<5;i++)
			       {        
					int j=(rand()%25);
					int k=(rand()%50);
					gotoxy(j,k);
					cout<<"please re run the programme";
					sleep(1.0);
					system("cls");
					
			       }
				   return -1;
			}
			else
			{	
				gotoxy(35,20);
				cout<<"wrong password or userid try again";
				sleep(0.6);
				system("cls");
				box();
				gotoxy(23,11);
				cout<<"user id =";
				gotoxy(23,14);
				cout<<"password =";
				
			}
		   }
	}
	return 0;
}

class user{ 
		int customerno;
	    string name,location;

	    protected:
	    long long mobileno;
		long amount;
		int bal_val;
		int data_val;
		int bal_amt;
		int data_amt;
	    public:
		int mobilebal;
	    int databal;
	    user()
	    {	
			customerno=0;
			name = " ";
			location = " ";
			mobileno=0;
			mobilebal=0;
			databal=0;
	    }
	    void getdata();
	    void showdata();
	    void showall();
	    void modify();
	    int retcustno()
	    {	
			return customerno;
	    }
	    long long mobile1()
	    {	
			return mobileno;
	    }
		string retname()
		{
			return name;
		}
		int retmob()
		{
			return mobilebal;
		}
		int retdata()
		{
			return databal;
		}
	  };
void user::getdata()
{	
	setcolor(YELLOW);
	SetColorAndBackground(10,1);
	system("cls");
	customerno++;
	cout<<"customer no "<<customerno;
	gotoxy(10,4);
	cout<<"enter the name =";
	cin>>name;
	gotoxy(10,6);
	cout<<"enter the mobile number:";
	cin>>mobileno;
	string s = to_string(mobileno);
	while(s.length()!=10)
	{	
		gotoxy(9,6);
		clreol();
		gotoxy(10,6);
		cout<<"enter the mobile number:";
		cin>>mobileno;
		s = to_string(mobileno);
	}
	gotoxy(10,8);
	cout<<"enter the location:";
	cin>>location;
}

void user::showdata()
{	setcolor(YELLOW);
	SetColorAndBackground(8,3);
	system("cls");
	cout<<"\n\tCustomer number ="<<customerno;
	cout<<"\n\tCustomer name ="<<name;
	cout<<"\n\tCustomer location ="<<location;
	cout<<"\n\tCustomer mobile number : "<<mobileno;
	cout<<"\n\tCustomer mobile balance ="<<mobilebal;
	cout<<"\n\tCustomer data balance ="<<databal<<"MB";
}

void user::showall()
{	
	cout<<setw(6)<<customerno<<setw(10)<<name<<setw(20)<<location;
	cout<<"\t+91-"<<mobileno<<"\tRs."<<mobilebal<<"\t\t"<<databal<<"MB\n";
}

void user::modify()
{	
	string nm,add;
	long long mno1;
	setcolor(BLUE);
	SetColorAndBackground(5,3);
	system("cls");
	showdata();
	gotoxy(10,12);
	cout<<"enter new details";
	gotoxy(10,13);
	cout<<"enter new name(press '.' if don't want to change):";
	gotoxy(10,14);
	cin>>nm;
	gotoxy(10,15);
	cout<<"enter new mobile number(press -1 if don't want to change):";
	gotoxy(10,16);
	cin>>mno1;
	gotoxy(10,17);
	string s = to_string(mno1);
	while(s.length()>10)
	{ 	
		gotoxy(10,16);
		clreol();
		gotoxy(10,16);
		cin>>mno1;
		s = to_string(mno1); 
	}
	gotoxy(10,19);
	cout<<"enter the new location(press '.' if dont want to change):";
	gotoxy(10,20);
	cin>>add;
	if(nm != ".")
	name = nm;
	if(add != ".")
	location = add;
	if(mno1!=-1)
	mobileno=mno1;
}

class rechge:virtual public user
	{	
		friend class payment;
		public:
		void balrech(int);
		void datrech(int);
		void moball();
		void dataall();
		void chkbal();
		void chkdata();
	};

void rechge::balrech(int c)
{
	switch(c)
	{	
		case 1: bal_val = 40;
				mobilebal+=40;
				break;
		case 2: bal_val = 110;
				mobilebal+=110;
				break;
		case 3: bal_val = 250;
				mobilebal+=250;
				break;
		case 4: bal_val = 550;
				mobilebal+=550;
				break;
		case 5: bal_val = 770;
				mobilebal+=770;
				break;
		case 6: bal_val = 1000;
				mobilebal+=1000;
				break;
		case 7: recharge();
				break;
		case 8: mobilebal=0;
				break;
		default: cout<<"invalid choice enter again";
		sleep(1.5);
	}
}

void rechge::datrech(int c)
{
	switch(c)
	{
		case 1: data_val = 200;
				databal+=200;
				break;
		case 2: data_val = 300;
				databal+=300;
				break;
		case 3: data_val = 450;
				databal+=450;
				break;
		case 4: data_val = 1024;
				databal+=1024;
				break;
		case 5: data_val = 3072;
				databal+=3072;
				break;
		case 6: recharge();
				break;
		case 7: databal=0;
				break;
		default: cout<<"invalid choice enter again";
		sleep(1.5);
	}
}

void rechge::moball()
{
	cout<<"\n\t+91-"<<mobile1()<<"\t\t"<<bal_val<<"\n";
}

void rechge::dataall()
{
	cout<<"\n\t+91-"<<mobile1()<<"\t\t"<<data_val<<"MB\n";
}

void rechge::chkbal()
{
	cout<<"\n\n\tyour mobile number is +91-"<<mobileno
	    <<" having mobile balance Rs "<<mobilebal<<"\n\n";
}

void rechge::chkdata()
{
	cout<<"\n\n\tyour mobile number is +91-"<<mobileno
	    <<" having data balance "<<databal<<" MB\n\n";
}

class payment:virtual public user
{
	long long card_no;
	int cvv;
	string card_holder;
	string exp_date;
	friend class rechge;

	public:
	long long mobno;
	long money;
	payment()
	{
		card_no = 0;
		cvv= 0 ;
		card_holder = "Unknown";
		exp_date = "nil";
		amount = 0;
	}
	void credit_card();
	int net_banking();
	int upi();
	void pay_bal(int);
	void pay_data(int);
	void chk_bhis();
	void chk_dhis();
	/*long long getmobno()
	{
		return mobno;
	}*/
	void detail()
	{
		cout<<"\t\t Rs "<<money<<" transferred to +91"<<mobno<<endl;
	}
	
};
void payment::credit_card()
{
		string s,c;
		gotoxy(10,14);
		cout<<"\t\tEnter card Holder name=";
		cin>>card_holder;
		gotoxy(10,16);
		cout<<"\t\tEnter card number=";
		cin>>card_no;
		s = to_string(card_no);
		while(s.length()!=16)
		{
			gotoxy(10,16);
			clreol();
			gotoxy(10,16);
			cout<<"\t\tEnter card number(16 digit)=";
			cin>>card_no;
			s = to_string(card_no);
		}
		gotoxy(10,18);
		cout<<"\t\tEnter CVV=";
		cin>>cvv;
		c = to_string(cvv);
		while(c.length()!=3)
		{
			gotoxy(9,18);
			clreol();
			gotoxy(10,18);
			cout<<"\t\tEnter CVV(3 digit)=";
			cin>>cvv;
			c = to_string(cvv);
		}
		gotoxy(10,20);
		cout<<"\t\tEnter expiry date(mm/yyyy)=";
		cin>>exp_date;
}
int payment::net_banking()
{
		int c,t;
		cout<<"Choose from following banks"<<endl;
		cout<<"\t\t1.State Bank of India\n";
		cout<<"\t\t2.AXIS Bank\n";
		cout<<"\t\t3.ICICI Bank\n";
		cout<<"\t\t4.Canara Bank\n";
		cout<<"\t\t5.HDFC Bank\n";
		cout<<"\t\t6.Syndicate Bank\n\n";
		cout<<"\t\t"; cin>>c;
		cout<<endl;
		switch(c)
		{
			case 1: system("cls");
					cout<<"\n\n\t\tState Bank of India"<<endl;
					box();
					t = userid_pass();
					break;
			case 2: system("cls");
					cout<<"\n\n\t\tAXIS Bank"<<endl;
					box();
					t = userid_pass();
					break;
			case 3: system("cls");
					cout<<"\n\n\t\tICICI Bank"<<endl;
					box();
					t = userid_pass();
					break;
			case 4: system("cls");
					cout<<"\n\n\t\tCanara Bank"<<endl;
					box();
					t = userid_pass();
					break;
			case 5: system("cls");
					cout<<"\n\n\t\tHDFC Bank"<<endl;
					box();
					t = userid_pass();
					break;
			case 6: system("cls");
					cout<<"\n\n\t\tSyndicate Bank"<<endl;
					box();
					t = userid_pass();
					break;
			default:cout<<"\t\tWrong choice enter again"<<endl;
		}
		if(t == -1)
		{
			return -1; 
		}
		else return 0;
}
int payment::upi()
{
	string upi_id;
	long long pin;
	char confirm ='y';
	gotoxy(10,14);
	cout<<"Enter your upi id";
	cin>>upi_id;
	gotoxy(10,16);
	cout<<"Pay now(y/n)";
	cin>>confirm;
	if(confirm == 'y')
	{
		gotoxy(10,18);
		cout<<"Enter upi pin(6 digit)";
		cin>>pin;
		string s = to_string(pin);
		while(s.length()!=6)
		{
			gotoxy(9,18);
			clreol();
			gotoxy(10,18);
			cout<<"Enter upi pin(6 digit)";
			cin>>pin;
			s = to_string(pin);
		}
	}
	else
	{
		return -1;
	}
	return 0;
	

}
void payment::pay_bal(int c)
{
	switch(c)
	{	
		case 1: bal_amt = 40;
				amount+=40;
				break;
		case 2: bal_amt =100;
				amount+=100;
				break;
		case 3: bal_amt =250;
				amount+=250;
				break;
		case 4: bal_amt =565;
				amount+=565;
				break;
		case 5: bal_amt =800;
				amount+=800;
				break;
		case 6: bal_amt =1100;
				amount+=1100;
				break;
		case 7: recharge();
				break;
		case 8: amount=0;
				break;
		default: cout<<"invalid choice enter again";
		sleep(1.5);
	}
}
void payment::pay_data(int c)
{
	switch(c)
	{	
		case 1: data_amt = 11;
				amount+=11;
				break;
		case 2: data_amt = 37;
				amount+=37;
				break;
		case 3: data_amt = 69;
				amount+=69;
				break;
		case 4: data_amt = 147;
				amount+=147;
				break;
		case 5: data_amt = 250;
				amount+=250;
				break;
		case 6: recharge();
				break;
		case 7: amount=0;
				break;
		default: cout<<"invalid choice enter again";
		sleep(1.5);
	}
}
void payment::chk_bhis()
{
	cout<<"\t\tpayment of Rs "<<bal_amt<<" made"<<endl;
}
void payment::chk_dhis()
{
	cout<<"\t\tpayment of Rs "<<data_amt<<" made"<<endl;
}
class customer:public rechge,public payment
{

}u,u1;
//UDF FOR MAIN MENU
void intro()
{       setcolor(YELLOW);
	SetColorAndBackground(5,3);
	int op;
	
	system("cls");
	do
	{	cout<<"\n\n\n";
		cout<<"\t\t1.Customer Menu \n";
		cout<<"\t\t2.Recharge Menu \n";
		cout<<"\t\t3.Payment Menu \n";
		cout<<"\t\t4.Exit    \n\n\n\n";
		cout<<"\t\t********what you want to do??********\n\n";
		cout<<"\t\t"; cin>>op;

		switch(op)
		{  	case 1: customer();
			   		break;
		   	case 2: recharge();
			   		break;
			case 3: pay_menu();
					break;
		   	case 4: exit(0);
		   	default:cout<<"\n\twrong option enter again";
			    	sleep(2.0);
			    	intro();
		}
	} while(op!=4);
   getch();
}
//UDF FOR ADDING CUSTOMER
void addcustomer()
{   
	setcolor(YELLOW);
	SetColorAndBackground(5,3);
	file.open("customer.dat",ios::binary|ios::out|ios::app);
	if(!file)
		cout<<"\n!!!! File doesn't exists\n";
	u.getdata();
	u.mobilebal = 0;
	u.databal = 0;
	file.write((char *)&u,sizeof(u));
	
	file.close();
	cout<<"\n\n\t\tRECORD ENTERED\n";
	getch();
	customer();
}
//UDF FOR VIEWING A CUSTOMER
void viewcustomer()
{   
	setcolor(YELLOW);
	SetColorAndBackground(5,3);
	system("cls");
	string iname;
	char found='f';
	file.open("customer.dat",ios::binary|ios::in);
	cout<<"\n\n\tenter customer name to search\n";
	cout<<"\t\t";cin>>iname;
	while(file.read((char *)&u,sizeof(u)))
	{  
		if(u.retname()==iname)
		{	
			u.showdata();
			found='t';
			break;
		}
	}
	if(found =='f')
		cout<<"\n\n\tRecord does not exists\n";
	file.close();
	cout<<"\n\npress enter to continue\n";
	getch();
	customer();
}
//UDF FOR DELETING A CUSTOMER
void deletecustomer()
{      
	setcolor(GREEN);
	SetColorAndBackground(5,3);
	system("cls");
	string iname;
	char found='f',confirm;
	file.open("customer.dat",ios::binary|ios::in|ios::out|ios::ate);
	f1.open("temp.dat",ios::binary|ios::out);
	cout<<"\n\n\tEnter customer name to search\n";
	cout<<"\t\t";cin>>iname;
	file.seekg(0);
	while(file.read((char *)&u,sizeof(u)))
	{	
		if(u.retname()==iname)
		{	
			u.showdata();
			found='t';
			cout<<"\nAre u sure want to delete this record?(y/n)";
			cin>>confirm;
			if(confirm!='y')
			{       
				f1.write((char*)&u,sizeof(u));
			}
			else
				cout<<"RECORD DELETED"<<endl;
		}
		else
			f1.write((char*)&u,sizeof(u));
	}
	if(found=='f')
		cout<<"\n\t\trecord not found\n\n";
	cout<<"\n\tpress enter to continue\n";
	f1.close();
	file.close();
	remove("customer.dat");
	rename("temp.dat","customer.dat");
	getch();
	customer();
}
//UDF TO DELETE ALL CUSTOMERS
void deleteall()
{
	setcolor(TEAL);
	SetColorAndBackground(5,3);
	system("cls");
	remove("customer.dat");
	remove("datarecha.dat");
	remove("mobrecha.dat");
	cout<<"\n\n\t\tALL RECORDS ARE DELETED\n\n\n";
	cout<<"\n\tpress any key to continue";
	getch();
	customer();
}
//UDF TO VIEW DETAILS OF ALL CUSTOMER
void viewall()
{	 
	setcolor(PINK);
	SetColorAndBackground(5,3);
	system("cls");
	file.open("customer.dat",ios::binary|ios::in);

	cout<<"\t\tDISPLAYING ALL CUSTOMER INFORMATION\n";
	cout<<"\t   ***************************************\n\n";
	cout<<setw(8)<<"customer no"<<setw(6)<<"name"<<setw(20)<<"location"<<"\tphoneno \tmobileno \tdata \n";
	cout<<"\t\t\t\t \t\t\tbalance\t\tbalance\n";
	cout<<"--------------------------------------------------------------------------------\n\n";
	while(file.read((char*)&u,sizeof(u)))
	{	
		u.showall();
	}
	cout<<"\n\tpress any key to continue\n";
	file.close();
	getch();
	customer();
}
//UDF TO MODIFY A CUSTOMER
void modifycustomer()
{    
	setcolor(TEAL);
	SetColorAndBackground(5,3);
	system("cls");
	int recc=0;
	string iname;
	char found='f',confirm;
	file.open("customer.dat",ios::binary|ios::in|ios::out|ios::ate);
	cout<<"\n\n\tenter customer name to search\n";
	cout<<"\t\t";
	cin>>iname;
	file.seekp(0);
	while(file.read((char*)&u,sizeof(u)))
	{
		if(u.retname()==iname)
		{       
			u.showdata();
			cout<<"\nwant to modify this record(y/n)";
			cin>>confirm;
			found='t';
			if(confirm=='y')
			{       
				file.seekp(recc*(sizeof(u)),ios::beg);
				u.modify();
				file.seekp(recc*(sizeof(u)),ios::beg);
				file.write((char *)&u,sizeof(u));
				break;
			}
		}
		recc++;
	}
	if(found=='f')
		cout<<"\n\n\tRecord does not exists\n";
	file.close();
	cout<<"\n\npress enter to continue\n";
	getch();
	customer();
}
//UDF OF CUSTOMER MENU
void customer()
{       setcolor(PINK);
	SetColorAndBackground(5,3);
	int op1;
	system("cls");
	cout<<"\n\n\n";
	cout<<"\t\t1.\tAdd a customer information             \n";
	cout<<"\t\t2.\tview a particular customer information \n";
	cout<<"\t\t3.\tdelete one customer information        \n";
	cout<<"\t\t4.\tmodify a particular record             \n";
	cout<<"\t\t5.\tdelete all records                     \n";
	cout<<"\t\t6.\tview the list of all customers         \n";
	cout<<"\t\t7.\tto go back to main  menu         \n\n\n\n";
	cout<<"\t\t*******what do you want to do??*******     \n";
	cout<<"\t\t";cin>>op1;

	switch(op1)
	{	case 1: addcustomer();
			break;
		case 2: viewcustomer();
			break;
		case 3: deletecustomer();
			break;
		case 4: modifycustomer();
			break;
		case 5: deleteall();
			break;
		case 6: viewall();
			break;
		case 7: intro();
			break;
		default : cout<<"\t\twrong choice enter again";
			  sleep(2.0);
			  customer();
	}
	getch();
}
//UDF TO RECHARGE BALANCE
void BalRech()
{         
	 setcolor(TEAL);
	 SetColorAndBackground(5,3);
	 int ch,recc=0,rec=0,flag = 0;
	 long long mno1;
	 char found='f';
	 system("cls");
	 file.open("customer.dat",ios::binary|ios::in|ios::out);
	 f1.open("mobrecha.dat",ios::binary|ios::out|ios::app);
	 cout<<"\n\n\t\tenter phone number";
	 cout<<"\t\t";cin>>mno1;
	 cout<<"\n\n"<<"\t###### Available Plans ######\n\n";
	 cout<<"\t\t\tCost\tPlans 		      \n";
	 cout<<"\t\t\t1\t40 pe 40		      \n";
	 cout<<"\t\t\t2\t100 pe 110		      \n";
	 cout<<"\t\t\t3\t250 pe 250		      \n";
	 cout<<"\t\t\t4\t565 pe 550		      \n";
	 cout<<"\t\t\t5\t800 pe 770		      \n";
	 cout<<"\t\t\t6\t1100 pe 1000		      \n";
	 cout<<"\t\t\t7\tTo Go Back To Main Menu    \n\n";
	 cout<<"\t\t\t******enter your choice****** \n\n";
	 cout<<"\t\t";cin>>ch;
	 file.seekg(0,ios::beg);
	 while(file.read((char*)&u,sizeof(u)))
	 {
		 if(ch==7)
		 {
			recharge();
		 }
		 else if(ch>7 || ch<1)
		 {
			cout<<"Wrong choice enter again"<<endl;
		 }
		 else if((u.mobile1()==mno1))
		 {      
			char confirm = 'y';
			flag = pay();
			if(flag == 0)
			{
				cout<<"\n\tConfirm Payment??(y/n)";
				cin>>confirm;
				
			if(confirm == 'y')
			{
				//sleep(2.0);
				u.balrech(ch);
				u.pay_bal(ch);
				file.seekp(recc*(sizeof(u)),ios::beg);
				file.write((char*)&u,sizeof(u));
				f1.seekp(rec*(sizeof(u)),ios::beg);
				f1.write((char*)&u,sizeof(u));
			}
			else
			{
				cout<<"\t\trecharge unsuccesful"<<endl;
			}
			found='t';
			}
		 }
	     /*	 else
		 {
			u.balrech(8);
			f1.seekp(rec*(sizeof(u)),ios::beg);
			f1.write((char*)&u,sizeof(u));
		 }
		 */
		 recc++;
		 rec++;
	}
	if(flag == 0)
	{
		if(found=='f')
		cout<<"\n\t\trecord not found\n";
	}
	else
	{
		cout<<"\n\t\ttransaction aborted\n";
	}

	cout<<"\n\tpress any key to continue\n";
	file.close();
	f1.close();
	getch();
	system("cls");
	recharge();
}
//UDF TO RECHARGE DATA
void DataRech()
{       
	 setcolor(TEAL);
	 SetColorAndBackground(5,3);
	 int ch,recc=0,rec=0,flag = 0,getb;
	 long long mno1;
	 char found='f';
	 system("cls");
	 file.open("customer.dat",ios::binary|ios::in|ios::out);
	 f1.open("datarecha.dat",ios::binary|ios::out|ios::app);
	 cout<<"\n\n\t\tenter phone number";
	 cout<<"\t\t";cin>>mno1;
	 cout<<"\n\n"<<"\t###### Available Plans ######\n\n";
	 cout<<"\t\t\t\tPlans\tCOST 		      \n";
	 cout<<"\t\t\t1\t4G 11->200 MB for 1 DAY      \n";
	 cout<<"\t\t\t2\t4G 37->300 MB for 3 DAYS     \n";
	 cout<<"\t\t\t3\t4G 69->450 MB for 10 DAYS    \n";
	 cout<<"\t\t\t4\t4G 147->1GB for 28 DAYS      \n";
	 cout<<"\t\t\t5\t4G 250->3GB for 28 DAYS      \n";
	 cout<<"\t\t\t6\tTo Go Back To Main Menu    \n\n";
	 cout<<"\t\t\t******enter your choice****** \n\n";
	 cout<<"\t\t";cin>>ch;
	 file.seekg(0,ios::beg);
	 while(file.read((char*)&u,sizeof(u)))
	 {
		  if(ch==6)
		 {
			recharge();
		 }
		 else if(ch>6 || ch<1)
		 {
			cout<<"Wrong choice enter again"<<endl;
		 }
		 else if((u.mobile1()==mno1))
		 {
			char confirm = 'y';
			flag = pay();
			if(flag == 0)
			{
				cout<<"\n\tConfirm Payment??(y/n)";
				cin>>confirm;
			if(confirm == 'y')
			{
				//sleep(2.0);
				u.datrech(ch);
				u.pay_data(ch);
				file.seekp(recc*(sizeof(u)),ios::beg);
				file.write((char*)&u,sizeof(u));
				f1.seekp(rec*(sizeof(u)),ios::beg);
				f1.write((char*)&u,sizeof(u));
			}
			else
			{
				cout<<"\t\tpayment unsuccessful"<<endl;
			}
			found='t';
			
		 }
		 }

	      /* else
		 {
			u.datrech(7);
			f1.seekp(rec*(sizeof(u)),ios::beg);
			f1.write((char*)&u,sizeof(u));
		 }
		*/
		 recc++;
		 rec++;
	 }
	if(flag == 0)
	{
		if(found=='f')
		cout<<"\n\t\trecord not found\n";
	}
	else
	{
		cout<<"\n\t\ttransaction aborted\n";
	}

	cout<<"\n\tpress any key to continue\n";
	file.close();
	f1.close();
	getch();
	system("cls");
	recharge();
}
//UDF TO CHECK BALANCE
void Checkbal()
{        
	 setcolor(YELLOW);
	 SetColorAndBackground(5,3);
	 int ch,pos;
	 long long mno1;
	 char found='f';
	 system("cls");
	 file.open("mobrecha.dat",ios::binary|ios::in);
	 cout<<"\n\n\t\tenter phone number";
	 cout<<"\t\t";cin>>mno1;
	 file.seekp(0,ios::beg);
	 while(file.read((char*)&u,sizeof(u)))
	 {	
		 if(((u.mobile1()==mno1)))
		 {	
			u.chkbal();
			found='t';
		 }
	 }
	 if(found=='f')
	 cout<<"\n\t\trecord not found\n";
	 cout<<"\n\tpress any key to continue\n";
	 file.close();
	 getch();
	 system("cls");
	 recharge();
}
//UDF TO CHECK DATA
void Chkdata()
{      
	setcolor(YELLOW);
	SetColorAndBackground(5,3);
	int ch;
	long long mno1;
	char found='f';
	system("cls");
	file.open("datarecha.dat",ios::binary|ios::in);
	cout<<"\n\n\t\tenter phone number";
	cout<<"\t\t";cin>>mno1;
	file.seekp(0,ios::beg);
	while(file.read((char*)&u,sizeof(u)))
	{ 
		 if(((u.mobile1()==mno1)))
		 {	
			u.chkdata();
			found='t';
		 }
	}
	if(found=='f')
	cout<<"\n\t\trecord not found\n";
	cout<<"\n\tpress any key to continue\n";
	file.close();
	getch();
	system("cls");
	recharge();
}
//UDF TO VIEW RECHARGES OF ALL CUSTOMERS
void ViewRech()
{       
	setcolor(BLUE);
	SetColorAndBackground(5,3);
	system("cls");
	file.open("mobrecha.dat",ios::binary|ios::in);
	cout<<"\n\tDISPLAYING ALL MOBILE BALANCE RECHARGE INFORMATION\n";
	cout<<"\t****************************************************";
	cout<<"\n\n\tPhoneNo\t\t\tMobile\n";
	cout<<"\t\t\t\tBalance\n";
	cout<<"\t________________________________________________\n\n";
	file.seekg(0,ios::beg);
	while(file.read((char*)&u,sizeof(u)))
	{
		u.moball();
	}
	file.close();
	file.open("datarecha.dat",ios::binary|ios::in);
	cout<<"\n\tDISPLAYING ALL DATA BALANCE RECHARGE INFORMATION\n";
	cout<<"\t****************************************************";
	cout<<"\n\n\tPhoneNo\t\t\tMobile\n";
	cout<<"\t\t\t\tDATA\n";
	cout<<"\t________________________________________________\n\n";
	file.seekg(0,ios::beg);
	while(file.read((char*)&u,sizeof(u)))
	{
		u.dataall();
	}
	file.close();
	setcolor(BLUE);
	SetColorAndBackground(5,3);
	cout<<"\npress any key to continue\n";
	getch();
	system("cls");
	recharge();
}
//UDF FOR RECHARGE MENU
void recharge()
{       setcolor(PINK);
	SetColorAndBackground(5,3);
	int op2;
	system("cls");
	cout<<"\n\n\n";
	cout<<"\t\t1.\t\tMobile Balance Recharge\n";
	cout<<"\t\t2.\t\tData Balance Recharge\n";
	cout<<"\t\t3.\t\tCheck Mobile Balance\n";
	cout<<"\t\t4.\t\tCheck Data Balance\n";
	cout<<"\t\t5.\t\tView Overall Recharge\n";
	cout<<"\t\t6.\t\tTransfer money/view payment details\n";
	cout<<"\t\t7.\t\tTo Go Back To Main Menu\n\n\n\n\n";
	cout<<"\t\t******What you want to do??******\n\n";
	cout<<"\t\t";cin>>op2;

	switch(op2)
	{
		case 1: BalRech();
				break;
		case 2: DataRech();
				break;
		case 3: Checkbal();
				break;
		case 4: Chkdata();
				break;
		case 5: ViewRech();
				break;
		case 6: pay_menu();
				break;
		case 7: intro();
				break;
		default: cout<<"\t\twrong choice enter again";
		sleep(2.0);
		recharge();
	}
	getch();
}
void transfer()
{
	long long mobilen;
	char found = 'f';
	int recc = 0,rec = 0,flag = 0;
	system("cls");
	file.open("customer.dat",ios::binary|ios::in|ios::out|ios::ate);
	f1.open("transfer.dat",ios::binary|ios::out|ios::app);
	gotoxy(11,8);
	cout<<"Enter your mobileno: ";
	cin>>mobilen;
	file.seekp(0,ios::beg);
	while(file.read((char *)&u,sizeof(u)))
	{
		if((u.mobile1()==mobilen))
		{
			gotoxy(11,10);
			cout<<"Enter mobile number for money transfer: ";
			cin>>u.mobno;
			gotoxy(11,12);
			cout<<"Enter amount to transfer: ";
			cin>>u.money;
			char confirm = 'y';
			flag = pay();
			if(flag == 0)
			{
				cout<<"\n\tConfirm Payment??(y/n)";
				cin>>confirm;

			if(confirm == 'y')
			{
				file.seekp(recc*(sizeof(u)),ios::beg);
				file.write((char*)&u,sizeof(u));
				f1.seekp(rec*(sizeof(u)),ios::beg);
				f1.write((char*)&u,sizeof(u));
			}
			else
			{
				cout<<"\t\ttransfer unsuccesful"<<endl;
			}
			found='t';
			}
		}
		recc++;
		rec++;
	}
	if(flag == 0)
	{
		if(found=='f')
		cout<<"\n\t\trecord not found\n";
	}
	else
	{
		cout<<"\n\t\ttransaction aborted\n";
	}
	
	cout<<"\n\tpress any key to continue\n";
	file.close();
	f1.close();
	getch();
	system("cls");
	pay_menu();
}
//UDF FOR TRANSFER HISTORY
void transfer_his()
{
	SetColorAndBackground(5,3);
	long long mno1;
	char found='f';
	system("cls");
	file.open("transfer.dat",ios::binary|ios::in);
	cout<<"\n\n\t\tenter phone number";
	cout<<"\t\t";cin>>mno1;
	file.seekg(0,ios::beg);
	while(file.read((char*)&u,sizeof(u)))
	{	
		if(((u.mobile1()==mno1)))
		{	
			u.detail();
			found='t';
		}
	}
	if(found=='f')
	cout<<"\n\t\trecord not found\n";
	cout<<"\n\tpress any key to continue\n";
	file.close();
	getch();
	system("cls");
	pay_menu();
}
void payment_history()
{
	setcolor(YELLOW);
	SetColorAndBackground(5,3);
	int ch,pos;
	long long mno1;
	char found='f';
	system("cls");
	file.open("mobrecha.dat",ios::binary|ios::in);
	cout<<"\n\n\t\tenter phone number";
	cout<<"\t\t";cin>>mno1;
	cout<<"\n\t\tBalanceRecharge payment"<<endl;
	file.seekg(0,ios::beg);
	while(file.read((char*)&u,sizeof(u)))
	{	
		if(((u.mobile1()==mno1)))
		{	
			u.chk_bhis();
			found='t';
		}
	}
	if(found=='f')
	cout<<"\n\t\trecord not found\n";
	file.close();
	file.open("datarecha.dat",ios::binary|ios::in);
	cout<<"\n\t\tDataRecharge payment"<<endl;
	file.seekg(0,ios::beg);
	while(file.read((char*)&u,sizeof(u)))
	{	
		if(((u.mobile1()==mno1)))
		{	
			u.chk_dhis();
			found='t';
		}
	}
	if(found=='f')
	cout<<"\n\t\trecord not found\n";
	
	cout<<"\n\tpress any key to continue\n";
	file.close();
	getch();
	system("cls");
	pay_menu();
}
void delete_history()
{
	setcolor(TEAL);
	SetColorAndBackground(5,3);
	system("cls");
	remove("transfer.dat");
	remove("payment.dat");
	cout<<"\n\n\t\tHISTORY DELETED\n\n\n";
	cout<<"\n\tpress any key to continue";
	getch();
	pay_menu();
}
//UDF FOR SWITCH-CASE PAYMENT
int pay()
{
	system("cls");
		int choice,flag = 0,getb;
		cout<<"\n\n\n";
		cout<<"\t\t1.\t\tDebit/Credit Card\n";
		cout<<"\t\t2.\t\tNet Banking\n";
		cout<<"\t\t3.\t\tUPI\n";
		cout<<"\t\t4.\t\tTo Go Back To Main Menu\n\n\n\n\n";
		cout<<"\t\t******What you want to do??******\n\n";
		cout<<"\t\t";cin>>choice;
		switch(choice)
		{
			case 1: u.credit_card();
					break;
			case 2: getb = u.net_banking();
					if(getb == -1)
					flag = 1;
					break;
			case 3: getb = u.upi();
					if(getb == -1)
					flag = 1;
					break;
			case 4: flag = 1;
					break;
			default:cout<<"Wrong choice enter again"<<endl;
					sleep(1.0);
					clreol();
		}
		if(flag == 1)
		{
			return -1;
		}
		else return 0;
}
//UDF FOR PAYMENT MENU
void pay_menu()
{
	SetColorAndBackground(5,3);
	int choice;
	
	system("cls");
	cout<<"\n\n\n";
	cout<<"\t\t1.Transfer Money \n";
	cout<<"\t\t2.View Transfer history\n";
	cout<<"\t\t3.View Payment history\n";
	cout<<"\t\t4.Delete Transfer history\n";
	cout<<"\t\t5.Want to Recharge\n";
	cout<<"\t\t6.Go back to main menu  \n\n\n\n";
	cout<<"\t\t********what you want to do??********\n\n";
	cout<<"\t\t"; cin>>choice;

	switch(choice)
	{
		case 1:	transfer();
				break;
		case 2: transfer_his();
				break;
		case 3: payment_history();
				break;
		case 4: delete_history();
				break;
		case 5: recharge();
				break;
		case 6: intro();
				break;
		default: cout<<"\t\twrong choice enter again";
				sleep(2.0);
				pay_menu();
	}
	getch();
}
//UDF FOR DISPLAYING RECHARGE
void recharge1()
{	
	system("cls");
	SetColorAndBackground(5,3);
	sleep(0.8);
	system("cls");
	cout<<"\n\n\n\n\t\tPROJECT REPORT ON \n\n\n\n";
	for(int i=0;i<80;i++)
	{	
		cout<<"-";
		sleep(0.02);
	}
	cout<<endl;
	sleep(0.1);
	cout<<"@@@@@   @@@@@@@@    @@@@@   @@   @@       @@       @@@@@      @@@@@       @@@@@@\n";
	sleep(0.1);
	cout<<"@@  @@  @@         @@       @@   @@     @@   @@    @@   @@   @@           @@ \n";
	sleep(0.1);
	cout<<"@@  @@  @@@@@@@@  @@        @@@@@@@    @@     @@   @@   @@   @@           @@@@@@\n";
	sleep(0.1);
	cout<<"@@@@@   @@        @@        @@   @@   @@@@@@@@@@   @@ @@     @@    @@@@@  @@ \n";
	sleep(0.1);
	cout<<"@@  @@  @@         @@       @@   @@   @@      @@   @@   @@   @@     @@    @@ \n";
	sleep(0.1);
	cout<<"@@  @@  @@@@@@@@    @@@@@   @@   @@   @@      @@   @@   @@    @@@@@@      @@@@@@";
	cout<<endl;
	for(int j=0;j<80;j++)
	{ cout<<"-";
	  sleep(0.02);
	}
	cout<<"\n\t\t\tMANAGEMENT \n\t\t\t\tSYSTEM";
	cout<<"\n\t\t\tLOADING";
	for(int k=0;k<9;k++)
	{       sleep(0.3);
		cout<<char(177);
	}
}

int main()
{       setcolor(PINK);
	SetColorAndBackground(5,3);
	//phone();
	//recharge1();
	/*srand(time(0));
	system("cls");
	box();
	int a = userid_pass();
	if(a!=-1)*/
	intro();
	//else exit(0);
return 0;
}
