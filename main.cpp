//Dajanek Davis
// Football Scoreboard using 
//Object Oriented Programming in C++
//Updates 4-23-2021 - Dajanek Davis
 

#include <iostream>
#include <string> 
#include <unistd.h>
#include "Input_Validation_Extended.h"
using namespace std; 

class Team
{
  private:
  string name;
  string coach_name;
  string home_city;
  int score;
  double timeout_count;
  int shotsOnGoal; 
  bool home_status;

  public:
      Team() //default constructor
      {
        score = 0;
        home_status = false; // (visitor = false / home = true)
        name = "DefaultTeamName";
        shotsOnGoal = 0;
        coach_name = "DefaultCoachName";


      }


  void set_name(string n) { name = n; }
  void set_coachName(string scN){coach_name =scN;}
  void set_homeCity(string hC){ home_city = hC; }
  void set_Score(int s) {score = s; }
  void set_TimeoutCount(double tC){ timeout_count = tC; }
  void set_HomeStatus(bool hs) {home_status = hs;}
  void setShotsOnGoal(int sog) { shotsOnGoal = sog; }
 


}