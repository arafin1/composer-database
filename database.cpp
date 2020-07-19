// database.cpp,  Arafin Saad
// Description: Implementation class database of Composer records.
#include  <iostream>
#include <algorithm>    // std::sort
#include "database.h"

  int k = 0;
  Composer& Database::AddComposer(string in_first_name, string in_last_name,
                        string in_genre, int in_yob, string in_fact,int ranking){

        composers_[k].set_first_name(in_first_name);
        composers_[k].set_last_name(in_last_name);
        composers_[k].set_composer_genre(in_genre);
        composers_[k].set_composer_yob(in_yob);
        composers_[k].set_fact(in_fact);
        composers_[k].set_ranking(ranking);
        k++;
        return composers_[k];

  }
  // Search for a composer based on last name. Return a reference to the
  // found record.
  Composer& Database::GetComposer(string in_last_name){
    for(int i = 0; i<k;i++){
        if(composers_[i].last_name() == in_last_name){
            composers_[i].Display();
            return composers_[i];
        }
    }

  }

  Composer& Database::GetComposerBylastName(string in_last_name){
    for(int i = 0; i<k;i++){
        if(composers_[i].last_name() == in_last_name){
            return composers_[i];
        }
    }

  }


  void Database::Promot(string in_last_name, int p){

     GetComposer2(in_last_name).Promote(p);

   }

 void Database::Demot(string in_last_name, int p){
   GetComposer2(in_last_name).Demote(p);
}

  // Display all composers in the database.
  void Database::DisplayAll(){
    for(int i = 0; i<k;i++){
        composers_[i].Display();
        cout<<endl;
    }
  }
    // Sort database records by rank and then display all.
  void Database::DisplayByRank(){
    int i, j;
    Composer temp;
      for (i = 0; i < k; i++)
       for (j = k - 1; j > i; j--)
        if ( composers_[j].ranking() <composers_[j - 1].ranking() )
           {
            temp = composers_[j];
            composers_[j] = composers_[j - 1];
            composers_[j - 1] = temp;
         }

    DisplayAll();
  }


