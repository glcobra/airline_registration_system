#include <iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
public:

   Management()
   {
      mainMenu();
   }

};

class Details
{
   public:

       static string name, gender;
       int phoneNo;
       int age;
       string add;
       static int cId;
       char arr[100];

       void information()
       {
          cout<<"\nEnter the costumer ID :";
          cin>>cId;
          cout<<"\nEnter the name :";
          cin>>name;
          cout<<"\nEnter the age :";
          cin>>age;
          cout<<"\nAddress :";
          cin>>add;
          cout<<"\nGender :";
          cin>>gender;
          cout<<"Your details are saved with us\n"<<endl;

       };

};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{

public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
      string flightN[]={"Dubai", "Canada", "UK", "US","Australia", "Europe"};

      for(int a=0;a<6;a++)
      {
          cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
      }

      cout<<"Welcome to the Airlines!"<<endl,
      cout<<"Press the number of the country of which you want to book the flight :";
      cin>>choice;

      switch(choice)
      {
      case 1:
          cout<<"*****Welcome to Dubai Emirates*****\n"<<endl;

          cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

          cout<<"Following are the flights \n"<<endl;

          cout<<"1. DUB - 498"<<endl;
          cout<<"\t08.01.2022 8:00AM 10hrs Rs.1400"<<endl;
          cout<<"2. DUB - 658"<<endl;
          cout<<"\t09.01.2022 4:00AM 12hrs Rs.1000"<<endl;
          cout<<"3. DUB - 508"<<endl;
          cout<<"\t18.01.2022 11:00AM 11hrs Rs.1200"<<endl;

          cout<<"\nSelect the flight you want to book :";
          cin>>choice1;

          if(choice1==1)
          {
              charges=1400;
              cout<<"\nYou have successfully booked the flight DUB-498"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==2)
          {
            charges=1000;
              cout<<"\nYou have successfully booked the flight DUB-658"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==3)
          {
            charges=1200;
              cout<<"\nYou have successfully booked the flight DUB-508"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else
          {
           cout<<"Invalid input, shifting to the previous menu"<<endl;
          flights();
          }
          cout<<"Press any key to go back to the main menu"<<endl;
          cin>>back;

          if(back==1)
          {
            mainMenu();
          }
          else
            {
               mainMenu();
            }





      case 2:
          {
           cout<<"*****Welcome to Canadian Airlines*****\n"<<endl;

          cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

          cout<<"Following are the flights \n"<<endl;

          cout<<"1. CAN - 198"<<endl;
          cout<<"\t04.01.2022 2:00AM 11hrs Rs.2400"<<endl;
          cout<<"2. CAN - 258"<<endl;
          cout<<"\t05.01.2022 6:00AM 13hrs Rs.2000"<<endl;
          cout<<"3. CAN - 308"<<endl;
          cout<<"\t05.01.2022 11:00AM 14hrs Rs.2200"<<endl;

          cout<<"\nSelect the flight you want to book :";
          cin>>choice1;

          if(choice1==1)
          {
              charges=2400;
              cout<<"\nYou have successfully booked the flight CAN-198"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==2)
          {
            charges=2000;
              cout<<"\nYou have successfully booked the flight CAN-258"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==3)
          {
            charges=2200;
              cout<<"\nYou have successfully booked the flight CAN-308"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else
          {
           cout<<"Invalid input, shifting to the previous menu"<<endl;
          flights();
          }
          cout<<"Press any key to go back to the main menu"<<endl;
          cin>>back;

          if(back==1)
          {
            mainMenu();
          }
          else
            {
               mainMenu();
            }
          }

      case 3:
        {
            cout<<"*****Welcome to UK Airways*****\n"<<endl;

          cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

          cout<<"Following are the flights \n"<<endl;

          cout<<"1. UK - 298"<<endl;
          cout<<"\t09.01.2022 9:00AM 11hrs Rs.3400"<<endl;
          cout<<"2. UK - 358"<<endl;
          cout<<"\t10.01.2022 5:00AM 13hrs Rs.3000"<<endl;
          cout<<"3. UK - 408"<<endl;
          cout<<"\t11.01.2022 12:00AM 12hrs Rs.3200"<<endl;

          cout<<"\nSelect the flight you want to book :";
          cin>>choice1;

          if(choice1==1)
          {
              charges=3400;
              cout<<"\nYou have successfully booked the flight UK-298"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==2)
          {
            charges=3000;
              cout<<"\nYou have successfully booked the flight UK-358"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==3)
          {
            charges=3200;
              cout<<"\nYou have successfully booked the flight UK-408"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else
          {
           cout<<"Invalid input, shifting to the previous menu"<<endl;
          flights();
          }
          cout<<"Press any key to go back to the main menu"<<endl;
          cin>>back;

          if(back==1)
          {
            mainMenu();
          }
          else
            {
               mainMenu();
            }
        }

      case 4:
        {
           cout<<"*****Welcome to US Airways*****\n"<<endl;

          cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

          cout<<"Following are the flights \n"<<endl;

          cout<<"1. US - 098"<<endl;
          cout<<"\t08.01.2022 7:00AM 11hrs Rs.4400"<<endl;
          cout<<"2. US - 058"<<endl;
          cout<<"\t09.01.2022 5:00AM 13hrs Rs.4000"<<endl;
          cout<<"3. US - 008"<<endl;
          cout<<"\t18.01.2022 0:00AM 12hrs Rs.4200"<<endl;

          cout<<"\nSelect the flight you want to book :";
          cin>>choice1;

          if(choice1==1)
          {
              charges=4400;
              cout<<"\nYou have successfully booked the flight US-098"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==2)
          {
            charges=4000;
              cout<<"\nYou have successfully booked the flight US-058"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==3)
          {
            charges=4200;
              cout<<"\nYou have successfully booked the flight US-008"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else
          {
           cout<<"Invalid input, shifting to the previous menu"<<endl;
          flights();
          }
          cout<<"Press any key to go back to the main menu"<<endl;
          cin>>back;

          if(back==1)
          {
            mainMenu();
          }
          else
            {
               mainMenu();
            }
        }

      case 5:
        {
            cout<<"*****Welcome to Australian Airlines*****\n"<<endl;

          cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

          cout<<"Following are the flights \n"<<endl;

          cout<<"1. AUS - 998"<<endl;
          cout<<"\t08.07.2022 9:00AM 10hrs Rs.5400"<<endl;
          cout<<"2. AUS - 958"<<endl;
          cout<<"\t09.07.2022 1:00AM 12hrs Rs.5000"<<endl;
          cout<<"3. AUS - 908"<<endl;
          cout<<"\t18.08.2022 10:00AM 11hrs Rs.5200"<<endl;

          cout<<"\nSelect the flight you want to book :";
          cin>>choice1;

          if(choice1==1)
          {
              charges=5400;
              cout<<"\nYou have successfully booked the flight AUS-998"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==2)
          {
            charges=5000;
              cout<<"\nYou have successfully booked the flight AUS-958"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==3)
          {
            charges=5200;
              cout<<"\nYou have successfully booked the flight AUS-908"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else
          {
           cout<<"Invalid input, shifting to the previous menu"<<endl;
          flights();
          }
          cout<<"Press any key to go back to the main menu"<<endl;
          cin>>back;

          if(back==1)
          {
            mainMenu();
          }
          else
            {
               mainMenu();
            }
        }

      case 6:
        {
            cout<<"*****Welcome to European Airlines*****\n"<<endl;

          cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

          cout<<"Following are the flights \n"<<endl;

          cout<<"1. EU - 898"<<endl;
          cout<<"\t11.01.2022 8:00PM 5hrs Rs.8400"<<endl;
          cout<<"2. EU - 858"<<endl;
          cout<<"\t11.01.2022 4:00PM 4hrs Rs.8000"<<endl;
          cout<<"3. EU - 808"<<endl;
          cout<<"\t12.01.2022 11:00PM 6hrs Rs.8200"<<endl;

          cout<<"\nSelect the flight you want to book :";
          cin>>choice1;

          if(choice1==1)
          {
              charges=8400;
              cout<<"\nYou have successfully booked the flight EU-898"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==2)
          {
            charges=8000;
              cout<<"\nYou have successfully booked the flight EU-858"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else if(choice1==3)
          {
            charges=8200;
              cout<<"\nYou have successfully booked the flight EU-808"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
          }
          else
          {
           cout<<"Invalid input, shifting to the previous menu"<<endl;
          flights();
          }
          cout<<"Press any key to go back to the main menu"<<endl;
          cin>>back;

          if(back==1)
          {
            mainMenu();
          }
          else
            {
               mainMenu();
            }
        }

        default:
        {
          cout<<"Invalid input, Shifting you to the Main Menu!"<<endl;
          mainMenu();
          break;
        }

    }
}
};
float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
   public:

       void Bill()
       {
         string destination ="";
         ofstream outf("record,txt");
         {
           outf<<"*****XYZ Airlines*****"<<endl;
           outf<<"********Ticket********"<<endl;
           outf<<"**********************"<<endl;

           outf<<"Costumer ID:"<<Details::cId<<endl;
           outf<<"Costumer Name:"<<Details::name<<endl;
           outf<<"Costumer Gender:"<<Details::gender<<endl;
           outf<<"\tDescription"<<endl;

           if(registration::choice==1)
           {
               destination="Dubai";
           }

           else if(registration::choice==2)
           {
               destination="Canada";
           }

           else if(registration::choice==3)
           {
               destination="UK";
           }
           else if(registration::choice==4)
           {
               destination="USA";
           }
           else if(registration::choice==5)
           {
               destination="Australia";
           }
           else if(registration::choice==6)
           {
               destination="Europe";
           }

           outf<<"Destination\t\t"<<destination<<endl;
           outf<<"Flight cost:\t\t"<<registration::charges<<endl;

         }
         outf.close();


       }
       void dispBill()
       {
         ifstream ifs("records.txt");
         {
            if(!ifs)
            {
              cout<<"File error!"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline (arr, 100);
                cout<<arr<<endl;
            }
         }
         ifs.close();
       }
};







void mainMenu()
{
   int lchoice;
   int schoice;
   int back;


   cout<<"\t*****XYZ Airline*****\n"<<endl;
   cout<<"\t*****Main Menu*****"<<endl;
   cout<<"\t****************************************"<<endl;
   cout<<" \t\t\t\t\t\t\t\t"<<endl;

   cout<<"\t\t Press 1 to add the Costumer details \t"<<endl;
   cout<<"\t\t Press 2 for Flight registration     \t"<<endl;
   cout<<"\t\t Press 3 for Ticket and charges      \t"<<endl;
   cout<<"\t\t Press 4 to Exit                     \t"<<endl;
   cout<<" \t\t\t\t\t\t\t\t"<<endl;
   cout<<"\t****************************************"<<endl;

   cout<<"Enter the choice :";
   cin>>lchoice;

   Details d;
   registration r;
   ticket t;

   switch(lchoice)
   {
   case 1:
    {
        cout<<"*****Costumers*****\n"<<endl;
        d.information();
        cout<<"Press any key to go back to the Main Menu"<<endl;
        cin>>back;

        if(back==1)
        {
            mainMenu();
        }
     else{
        mainMenu();
     }
     break;

   }
   case 2:
    {
       cout<<"*****Book the flight using this system*****\n"<<endl;
       r.flights();
       break;
    }
   case 3:
    {
       cout<<"*****GET YOUR TICKET*****\n"<<endl;
       t.Bill();

       cout<<"Your ticket is printed, you can collect it \n"<<endl;
       cout<<"Press 1 to display your ticket";

       cin>>back;

       if(back==1)
       {
           t.dispBill();
           cout<<"Press any key to go back to the main menu:";
           cin>>back;

           if(back==1)
           {
              mainMenu();
           }

       }
       else
        {
           mainMenu();
       }
       break;
    }
   case 4:
    {
        cout<<"\n\n\t*****Thank you*****"<<endl;
        break;
    }

   default :
    {
        cout<<"Invalid input, Please try again!\n"<<endl;
        mainMenu();
        break;
    }



    }

}




int main()
{
    Management Mobj;
    return 0;
}
