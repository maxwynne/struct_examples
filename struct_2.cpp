// add two distances together using struct

#include <iostream> 

using namespace std;

struct distance {
    int feets;
    float inches;
}

a1, a2, add;

int main()
{
    
    std::cout << "Please enter first distance: " << "\n";

    std::cout << "Please enter feets: ";
    cin >> a1.feets;

    std::cout << "Please enter inches: ";
    cin >> a1.inches;

    std::cout << "Please enter second distance: " << "\n";

    std::cout << "Please enter feets: ";
    cin >> a2.feets;

    std::cout << "Please enter inches: ";
    cin >> a2.inches;

    add.feets = a1.feets + a2.feets;
    add.inches = a1.inches + a2.inches;

    count << endl << "The sum of distances= " << add.feets << " feet " << add.inches << "inches" << "\n";
    return 0;
    
}
