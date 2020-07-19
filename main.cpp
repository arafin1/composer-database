// Main.cpp, Arafin Saad
//
//This class implements the Composer and database class
// Also, implements Interface.

#include <iostream>
#include "database.h"
using namespace std;

void PrintUtility(){

    cout<<"Composer Database"<<endl;
    cout<<"---------------------------------------------"<<endl;

    cout<<"1) Add a new composer"<<endl;
    cout<<"2)Retrieve a composer's data"<<endl;
    cout<<"3)List all composers"<<endl;
    cout<<"4) Promote a composer's rank"<<endl;
    cout<<"5) Demote a composer's rank"<<endl;
    cout<<"6) List all composers by rank"<<endl;
    cout<<"0) Quit"<<endl;
    cout<<"---------------------------------------------"<<endl;

}

void GapLine(){
 cout<<endl;
}

int main(){

Database myDB;

string in_first_name;
string in_last_name;
string in_genre;
int in_yob;
string in_fact;
int ranking;
int p;
int q;

    PrintUtility();
    int done;
    do {
        cin>>done;
        if(done == 1){
            cout<<"First Name: ";
            cin>>in_first_name;
            cout<<"Last Name: ";
            cin>>in_last_name;
            cout<<"Genre: ";
            cin>>in_genre;
            cout<<"Birth Year: ";
            cin>>in_yob;
            cout<<"Facts: ";
            cin>>in_fact;
            cout<<"Ranks: ";
            cin>>ranking;
            myDB.AddComposer(in_first_name,in_last_name,in_genre,in_yob,in_fact,ranking);
            cout<<"successfully Added"<<endl;
            //cin.clear();
            GapLine();
            PrintUtility();
            GapLine();

        }
        if(done == 2){
            myDB.GetComposer(in_last_name);
            GapLine();
            PrintUtility();
            GapLine();
        }

        if(done == 3){

            myDB.DisplayAll();
            GapLine();
            PrintUtility();
            GapLine();
        }
         if(done == 4){
            cout<<"To Promote/Demote Enter Last Name"<<endl;
            cin>>in_last_name;
            cout<<"Now enter Number between 1 to 10"<<endl;
            cin>>q;
            myDB.Promot(in_last_name, q);
            cout<<"promoted Succesfull"<<endl;
            GapLine();
            PrintUtility();
            GapLine();

        }

        if(done == 5){
               cout<<"To Promote/Demote Enter Last Name"<<endl;
               cin>>in_last_name;
               cout<<"Now enter Number between 1 to 10"<<endl;
               cin>>p;
               myDB.Demot(in_last_name, p);
               cout<<"Demoted Succesfull"<<endl;
               GapLine();
               PrintUtility();
               GapLine();
        }

        if(done == 6){
            myDB.DisplayByRank();
            GapLine();
            PrintUtility();
            GapLine();
        }
    } while (done != 0);


}

