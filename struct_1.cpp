// use one structure to represent two games

struct myGames {
  string brand; 
  string model;
  int year;
} Game1, Game2;

// first structure
Game1.brand = "Half Life";
Game1.year = 1998;

// second structure
Game2.brand = "Half Life 2";
Game2.year = 2004;

// print structure members
std::cout << Game1.brand << " " << Game1.year << " " << "\n";
std::cout << Game2.brand << " " << Game2.year << " " << "\n";
