#include <iostream>
using namespace std;
#include "object.h"

int main ()
{
  // creat an animal object
  Animal animal("dog","woof");
  animal.makesound(); // output: dog says: woof
  animal.displayinfo();
  cout << endl;
  
  // creat an dog object
  Dog dog("buddy","eskimo");
  dog.makesound(); // output: buddy says: woof
  dog.statu(); // output: buddy feel joy
  dog.displayinfo();
  cout << endl;

return 0;
}