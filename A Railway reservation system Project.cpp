#include <iostream.h>
#include <conio.h>
#define max 100
int noofpass,i;
class pass
{
	private:
		char name[20];
		char gender;
		int age;
		int seatno;
		struct pass1
		{
			int age2;

			char gender2;
			int seatno2;
			char passenger[20];
		}p[max];
	public:
		void input();
		void output();
};
void pass::input()
{
	cout << "\nEnter passenger details: ";
	cout << "\nEnter number of passengers=";
	cin >> noofpass;
	cout << "\nEnter passenger name=";
	cin >> name;
	cout << "\nEnter gender (m/f)=";
	cin >> gender;
	cout << "\nEnter age=";
	cin>>age;
	cout << "\nEnter seat no=";
	cin >> seatno;
	if(noofpass>1)
	{
		for(i=0;i<noofpass;i++)
		{
			cout<<"\nEnter passenger name=";
			cin>>p[i].passenger;
			cout<<"\nEnter gender(m/f)=";
			cin>>p[i].gender2;
			cout<<"\nEnter age=";
			cin>>p[i].age2;
			cout<<"\nEnter seat no=";
			cin>>p[i].seatno2;
		}
	}
}
void pass::output()
{
	cout << "\n\n\n_________________________Passengers details_________________________";
	cout << "\n\t\t\tNo of passengers=" << noofpass;
	cout << "\n\t\t\tPassenger name=" << name ;
	cout << "\n\t\t\tGender=" << gender ;
	cout << "\n\t\t\tAge=" << age ;
	cout << "\n\t\t\tSeat no=" << seatno ;
	if(noofpass>1)
	{
		for(i=0;i<noofpass;i++)
		{
			cout <<"\n\t\t\tPassenger name="<<p[i].passenger;
			cout << "\n\t\t\tGender=" << p[i].gender2 ;
			cout << "\n\t\t\tAge=" << p[i].age2 ;
			cout << "\n\t\t\tSeat no= "<< p[i].seatno2 ;
		}
	}
}
class train
{
	private:
		char trainname[20];
		int trainno;
		char section_code[5];
		char boogieno[5];
		char date[10];
		char from[10];
		char to[10];
	public:
		void in();
		void out();
};
void train::in()
{
	cout << "\nEnter train name=";
	cin >> trainname;
	cout << "\nenter train no=";
	cin >> trainno;
	cout << "\nEnter section=";
	cin >> section_code;
	cout << "\nEnter boogie no=";
	cin >> boogieno;
	cout << "\nEnter date=";
	cin >> date;
	cout <<" \nEnter from=";
	cin >> from;
	cout <<" \nEnter to=";
	cin >> to;
}
void train::out()
{
	cout << "\n\t\t\tTrain name=" << trainname;
	cout << "\n\t\t\tTrain no=" << trainno ;
	cout << "\n\t\t\tSection=" << section_code;
	cout << "\n\t\t\tBoogie no=" << boogieno;
	cout << "\n\t\t\tDate=" << date ;
	cout << "\n\t\t\tFrom=" << from ;
	cout << "\n\t\t\tTo=" << to ;
}
class ticket:public train,public pass
{
	private:
		int rate;
		int total;
	public:
		void getdetails();
		void showdetails();
};
void ticket::getdetails()
{
	cout << "\nEnter rate=";
	cin >> rate;
	cout << "\n";
	total = rate*noofpass;
}
void ticket::showdetails()
{
cout << "\n\t\t\tRate="<< rate ;
	cout << "\n\t\t\tTotal rate=" << total;
	cout << "\n";
}
void main()
{
	int count;
	int i;
	clrscr();
	cout << "Enter the count of passengers : ";
	cin >> count;
	if (count > 0)
	{
		ticket t[max];
		for (i = 0; i < count; i++)
		{
			t[i].input();
			t[i].in();
			t[i].getdetails();
		}
		cout << "\n Entered details: " << endl;
		for (i = 0; i < count; i++)
		{
			t[i].output();
			t[i].out();
			t[i].showdetails();
		}
	}
	else
	{
		cout << "Please enter a valid number.";
	}
	getch();
}
