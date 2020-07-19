// composer.cpp, Arafin Saad
// Description: Implementation class for a Composer record.
// The default ranking is 10 which is the lowest possible.

#include<iostream>
#include<string>
#include "composer.h"

using namespace std;



  // Accessors and Mutators
  void Composer::set_first_name(string in_first_name){
    first_name_ = in_first_name;
  }

  string Composer::first_name(){
    return first_name_;
  }

  void Composer::set_last_name(string in_last_name){
    last_name_ = in_last_name;
  }

  string Composer::last_name(){
    return last_name_;
  }

  void Composer::set_composer_yob(int in_composer_yob){
    composer_yob_ = in_composer_yob;
  }

  int Composer::composer_yob(){
    return composer_yob_;
  }

  void Composer::set_composer_genre(string in_composer_genre){
    composer_genre_ = in_composer_genre;
  }

  string Composer::composer_genre(){
    return composer_genre_;
  }


  void Composer::set_fact(string in_fact){
    fact_ = in_fact;
  }

  string Composer::fact(){
    return fact_;
  }

   void Composer::set_ranking(int in_ranking){
     ranking_ = in_ranking;
  }

  int Composer::ranking(){
    return ranking_;
  }

  // Methods
  // This method increases a composer's rank by increment.
  void Composer::Promote(int increment){
    ranking_ = ranking_+ increment;

  }
  // This method decreases a composer's rank by decrement.
  void Composer::Demote(int decrement){
    ranking_ = ranking_ - decrement;

  }

  // This method displays all the attributes of a composer.
  void Composer::Display(){
    cout<<first_name()<<endl;
    cout<<last_name()<<endl;
    cout<<composer_yob()<<endl;
    cout<<composer_genre()<<endl;
    cout<<fact()<<endl;
    cout<<Composer::ranking()<<endl;
  }


