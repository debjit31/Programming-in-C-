#include<iostream>
#include<string>
using namespace std;
class Movie {        // The class
  public:          // Access specifier
    string name;  // Attribute
    string format;
    string language;  // Attribute
    int duration;      // Attribute
    Movie(string x, string y, string z, int a) { // Constructor with parameters
      name = x;
      format = y;
      language = z;
      duration = a;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Movie mobj1("BMW", "X5", "english", 1999);
  //Movie mobj2("Ford", "Mustang", 1969);

  // Print values
  cout << mobj1.name << " " << mobj1.format << " " << mobj1.language << " " << mobj1.duration << "\n";
  //cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}