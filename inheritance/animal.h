#include <iostream>
using namespace std;

// base class: Animal
class Animal 
{
  protected:
    // attributes (accessible by derived classes)
    string sound_;
    string name_;

  public:
    // constructor
    Animal (string name, string sound) : sound_(sound), name_(name){}
    
    // method to make a sound
    void makesound() const 
    {
         cout << name_ << " says: " << sound_ << endl;
    }

    // method to display info about the animal
    void displayinfo() const
    {
         cout << "name : " << name_ << endl;
         cout << "sound : " << sound_ << endl;
    }
    
};

// Derived Class: Dog
class Dog : public Animal 
{
  private:
    // Additional attribute specific to dog
    string breed_;

  public:
    // constructor
    Dog (string name, string breed) : Animal(name, "Woof"), breed_(breed){}
    
    // method to display info about the dog
    void displayinfo() const 
    {
         Animal::displayinfo(); //  call the base class's displayinfo() method
         cout << "breed : " << breed_ << endl;
    }

    // New method specific to the dog class
    void statu() const 
    {
         cout << name_ << " : " << "fell joy" << endl;
    }

};
