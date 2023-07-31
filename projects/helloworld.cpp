#include <iostream> 
//header file library, tahle pracuje s objektama input/output
using namespace std; 
//means that we can use names for objects and variables from the standard library. (wtf)

int main() {
  cout << "Hello World! \n\n";
  cout << "c++ je mrcha \n";
  cout << "ne jen kecam proboha funguj" << endl;
  cout << "takovej příklad\\ backslash" << endl;
  cout << "example citát \"jsem to co jsem\"" << endl;
  cout << "došly mi nápady na věci \t horizontal tab" << endl;
  
  double ggSlay = 420.69;
  std::cout << ggSlay << endl;

  int myNum = 15;
  myNum = 10;
  cout << myNum << endl; //ted to je 10

  int myAge = 14;
  cout << "I am" << myAge << " years old." << endl;

  int x = 42;
  int y = 69;
  int sum = x + y;
  cout << sum << endl;

  int z, a, b;
  z = a = b = 4;
  cout << z+b+a << endl;

  const int newMyNum = 54;
  const float PI = 3.14;
  
  double t = 62;
  cout << t;

  return 0;
};

/*multiline
comment*/

/*TYPY PROMĚNNÝCH
  int - celý čísla bez desetinných (69)
  double - čísla s des. místy (19.69)
  char - jednotlivá písmena, hraničeny ('A', 'b')
  string - prostě string, co víc chceš ("hehe")
  bool - boolean (true/false)
*/