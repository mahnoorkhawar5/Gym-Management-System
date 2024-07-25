#include<iostream>
#include<conio.h>
#include<string.h>
#include<windows.h>
using namespace std;
int login()
{
	string userName;
    string userPassword;
    int loginAttempt = 0;

    {
        int num;
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSelect:";
        cout<<"\n\t\t\t\t\t\t\t1)Sign in";
        cout<<"\n\t\t\t\t\t\t\t2)Sign up"<<endl;
        cout<<"\t\t\t\t\t\t\tChosen number: ";
        cin>>num;
        system("cls");
        Sleep(200);
        
        if (num==1)
        {
        cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPlease enter your user name: ";
        cin >> userName;
        cout << "\n\t\t\t\t\t\t\tPlease enter your user password: ";
        cin >> userPassword;

        if (userName == "Yaafth" && userPassword == "12345")
        {
            system("cls");
			cout <<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWelcome Yaafth!\n";
            Sleep(1000);
            
        }
        else if (userName == "Mahnoor" && userPassword == "12345")
        {
            system("cls");
			cout <<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWelcome Mahnoor!\n";
            Sleep(1000);
            
        }
        else if (userName == "M.Yahya" && userPassword == "12345")
        {
            system("cls");
			cout <<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWelcome Yahya!\n";
            Sleep(1000);
            
        }
        else
        {
            cout << "\n\t\t\t\t\t\t\tInvalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts!.";
            return 0;
    }

    
    if(num==2)
    {
            string un;
            cout<<"\n\n\t\t\t\t\t\t\tPLease give your username: ";
            cin>>un;
            
            cout<<"\n\t\t\t\t\t\t\tPlease give your password in numbers: ";
            int pas;
            cin>>pas;
            cout<<"\n\t\t\t\t\t\t\tPlease enter your phone number: ";
            int pn;
            cin>>pn;
            cout<<"\n\t\t\t\t\t\t\tPLease enter your email: ";
            string mail;
            cin>>mail;
            cout<<"\n\t\t\t\t\t\t\tAccount created succsesfully!";
            getch();
 		    system("CLS");
 		    login();
    }
    }
     
    }
    

int main()
{
	system("color 3");
	string ch1,ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9;
	system("cls");
cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                        WELCOME TO                                     |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                   GYM MANAGEMENT SYSTEM                               |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                            Made by MAHNOOR,M.YAHYA,YAAFTH               |@@\n";
cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
cout << "Press Y to choose another option...";
char A;
cin>>A;
if(A=='y' || A=='Y'){


getch();
system("cls");

 login();
    system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||                                                  | 12% ....";
							Sleep(500);
							system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading |||||||||||||||||||||||||||||||||                       | 61% ....";
							Sleep(500);
							system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||        | 95% ....";
							Sleep(500);
							system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100% ....";
							Sleep(1000);
mainmenu:
cout << endl << endl;
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the GYM Management System ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1> ADMIN" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2> CUSTOMER" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3> TRAINER" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<4> Exit" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
    cin >> ch1;
    cout << endl << endl << endl;
    
	if(ch1 == "1")
    {	
		menu:
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Main Menu ***" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<1> Enter into Member's DataBase" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<2> Enter into Employes's DataBase" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<3> Registeration" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<4> Enter into gym's Equipment Database " << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<5> View Feedback" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<6> Go Back" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tEnter Your choice:     ";
        cin >> ch2;
        if(ch2=="3")
        {
        	cout<<"\t\t\t\t\t\t\t\t<1>Enter new member's Name"<<endl;
        	string newname;
        	cin>>newname;
        	cout<<"\t\t\t\t\t\t\t\t<2>Enter new member's Age"<<endl;
        	int age;
        	cin>>age;
        	cout<<"\t\t\t\t\t\t\t\t<3>Enter new member's Address"<<endl;
        	string address;
        	cin>>address;
        	cout<<"\t\t\t\t\t\t\t\t<4>Enter new member's Phone number"<<endl;
        	int phone;
        	cin>>phone;
        if(ch2=="4")
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Gym Equipment Database ***"	<<endl;
		cout<<"n\n\t\t\t\t\t\t\t\t 1) Equipment in working"<<endl;
		cout<<"n\n\t\t\t\t\t\t\t\t 2) Equipment out of order "<<endl;
		int equip;
		cin>>equip;
		if(equip==1)
		{
			cout<<"n\t\t\t\t\t\t\t\t 1)Carddio Machines - 6" <<endl;
			cout<<"n\t\t\t\t\t\t\t 2)Dumble- 30" <<endl;
			cout<<"n\t\t\t\t\t\t\t 3)Chest Machines- 10" <<endl;
			cout<<"n\t\t\t\t\t\t\t 4)Biscep Machines- 10" <<endl;
			cout<<"n\t\t\t\t\t\t\t 5)Rods with Plates- 20" <<endl;
			cout<<"n\t\t\t\t\t\t\t 6)Front and Backmachine- 5"<<endl;
		    cout<<"n\t\t\t\t\t\t\t 7)Wings Machine- 2"<<endl;
		}
		if(equip==2)
		{
		    cout<<"n\t\t\t\t\t\t\t Machines Out of Order "<<endl;
			cout<<"n\t\t\t\t\t\t\t Tricep Machine- 5"<<endl;
		}
		}
        
        
        
        
                               //trainer Section
    if(ch2=="3")
{
		system("cls");
		string id;
		cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPlease enter your trainer ID: ";
        cin >>id;
        if(id=="Mahnoor123")
        {
        	cout<<"login succsesful"<<endl;
		}
		  if(id=="Yafth123")
        {
        	cout<<"login succsesful"<<endl;
		}
		  if(id=="M.Yahya123")
        {
        	cout<<"login succsesful"<<endl;
		}
		else
		{
			cout<<"Wrong ID! Try again!"<<endl;
		}
        int sel;
		cout<<"Select from the options:"<<endl;
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t1) Manage Training programs:"<<endl;
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t2) Diet Plane Records:"<<endl; 
		cout<<"\n\t\t\t\t\t\t2) Enter into Customer data base:"<<endl;
		cout<<"\n\t\t\t\t\t\t3) Enter into Gym Equipment Data base:"<<endl;
        cout<<"\n\t\t\t\t\t\t4) Contact Admin:"<<endl;
        cout<<"\n\t\t\t\t\t\t5) Exit"<<endl;
		cin>>sel;

if(sel==1)
              {
                         cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||                                                  | 12% ....";
							Sleep(500);
							system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading |||||||||||||||||||||||||||||||||                       | 61% ....";
							Sleep(500);
							system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||        | 95% ....";
							Sleep(500);
							system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100% ....";
							Sleep(1000);
 }
{
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t Programs currently running:"<<endl;
     cout<<"\n\n\t\t\t\t\t\t*SOLO SQUATS "<<endl;
     cout<<"\n\n\t\t\t\t\t\t*PULL UPS"<<endl;
     cout<<"\n\n\t\t\t\t\t\t*BISCEPS / TRISCEPS"<<endl;
     cout<<"\n\n\t\t\t\t\t\t*SHOULDER "<<endl;
     cout<<"\n\n\t\t\t\t\t\t*BACK"<<endl;
     cout<<"\n\n\t\t\t\t\t\t*CHEST"<<endl;
     cout<<"\n\n\t\t\t\t\t\t*LEGS"<<endl;
     cout<<"\n\n\t\t\t\t\t\t*WINGS"<<endl;
     cout<<"1) "<<endl;
 
 }
 if(sel==3)
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Gym Equipment Database ***"	<<endl;
		cout<<"n\n\t\t\t\t\t\t\t\t 1) Equipment in working"<<endl;
		cout<<"n\n\t\t\t\t\t\t\t\t 2) Equipment out of order "<<endl;
		int equi;
		cin>>equi;
		if(equi==1)
		{
			cout<<"n\t\t\t\t\t\t\t\t 1)Carddio Machines - 6" <<endl;
			cout<<"n\t\t\t\t\t\t\t 2)Dumble- 30" <<endl;
			cout<<"n\t\t\t\t\t\t\t 3)Chest Machines- 10" <<endl;
			cout<<"n\t\t\t\t\t\t\t 4)Biscep Machines- 10" <<endl;
			cout<<"n\t\t\t\t\t\t\t 5)Rods with Plates- 20" <<endl;
			cout<<"n\t\t\t\t\t\t\t 6)Front and Backmachine- 5"<<endl;
		    cout<<"n\t\t\t\t\t\t\t 7)Wings Machine- 2"<<endl;
		}
		if(equi==2)
		{
		    cout<<"n\t\t\t\t\t\t\t Machines Out of Order "<<endl;
			cout<<"n\t\t\t\t\t\t\t Tricep Machine- 5"<<endl;
		}
		}
}
}
}

