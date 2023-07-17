// use one structure to represent two games

// structure named "Games"
struct Games {
  string brand; 
  string model;
  int year;
} Game1, Game2;

// first structure
int main() {
  // created Games structure, stored it in Game1; 
  Games Game1;
  Game1.brand = "Half Life";
  Game1.year = 1998;

  // Game2 stored in Games structure
  Games Game2;
  Game2.brand = "Half Life 2";
  Game2.year = 2004;

  // print structure members
  std::cout << Game1.brand << " " << Game1.year << " " << "\n";
  std::cout << Game2.brand << " " << Game2.year << " " << "\n";

  return 0;
}
