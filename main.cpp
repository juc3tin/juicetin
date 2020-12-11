//this code is geared to help me express my emotions
//more of a mental health program hehe

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

void day()
{
  //declare variables
  std::string day;

  std::cout << "The goal of this option is to allow you to " <<
  "talk about your day to your heart's content. \n";

  //the "listening" begins hehe
  std::cout << "Whenever you're ready, type away your feelings: ";
  getline(std::cin, day);

  std::cout << day << std::endl;
  std::cout << std::endl;
  std::cout << "Thank you for telling me about your day :D";
}

void vent()
{
  //declare variables
  std::string vent;

  std::cout << "The goal of this option is to allow you to vent to your heart's content. \n\n";
  std::cout << "  -Whatever was typed will be deleted after the program is finished.\n";
  std::cout << "  -After you are done venting, press enter.\n\n";
  std::cout << "Whenever you're ready, vent :D \n";
  std::cin >> vent;
  std::cout << "Thank you for telling me this, hope your day is better next time.";
}

int main()
{
  //declare variables
  std::string feeling, name, secret;
  char option1, option2;

  //opening statement
  std::cout << "Thank you for using this way of expressing feelings...\n";
  std::cout << "What is your name? ";
  getline(std::cin, name);
  std::cout << "\nHow are you feeling today " << name << " (GOOD/BAD)? ";
  std::cin >> feeling;


    if (feeling == "GOOD" || feeling == "good" || feeling == "Good")
    {
      std::cout << "That's nice to hear, what can i do for you? \n";

      //show options
      std::cout << "  A) Tell me about your day? \n";
      std::cout << "  B) Hear some encouraging words? \n";
      std::cout << "  C) Have some tea to spill? \n";
      std::cout << "  D) Exit the program... \n";
      std::cout << "Option: ";
      std::cin >> option1;
      std::cin.ignore();

      //another if statement
      if (option1 == 'A' || option1 == 'a')
      {
        day();
      }
      else if (option1 == 'B' || option1 == 'b')
      {
        std::cout << "okkayyyyyYYYY";
      }
      else if (option1 == 'C' || option1 == 'c')
      {
        std::cout << "Tell me the tea sis dafaq...\n";
        getline(std::cin, secret);
        std::cout << "\n So the tea is: " << secret << std::endl;
      }
      else if (option1 == 'D' || option1 == 'd')
      {
        std::cout << "Thank you for coming to my ted talk hehe.";
      }

    }
    else if (feeling == "BAD" || feeling == "bad" || feeling == "Bad")
    {
      std::cout << "That's sad to hear, what would you like to do? \n";

      //show options
      std::cout << "  W) vent \n";
      std::cout << "  X) read some words of encouragement? \n";
      std::cout << "  Y) talk to a friend? \n";
      std::cout << "  Z) exit the program... \n";
      std::cout << "Option: ";
      std::cin >> option2;
      std::cin.ignore();

      //another if statement
      if (option2 == 'X' || option2 == 'x')
      {
        //words of encourgaement
        std::cout << "They hate us cause' they ain't us.\n";
      }
      else if (option2 == 'W' || option2 == 'w')
      {
        vent();
      }
      else if (option2 == 'Y' || option2 == 'y')
      {
        std::cout << "You don't have any friends to talk to, that's why you're taling to a computer...\n";
        std::cout << "Get some friends first bud...";
      }
      else if (option2 == 'Z' || option2 == 'z')
      {
        std::cout << "I hope you do better the next day ;(";
      }
    }

  return 0;
}
