/*
 * Filename: classyCar.cpp
 * Name: Huthsady Legend Boun
 * Professor: Grace A. Comp
 * Date: March 5, 2025
 * Description: Constructs a "car" object and allows the user to specify make & model.
 * The program will speed the car up 5 times, and print out the speed each iteration. Then, will slow down the car 5 times, printing out the speed each iteration.
 *
*/


#include <iostream>
#include <string>


class Car
{
public:
    Car(int x, std::string y); // Constructor

    void callAccelerate() // Priv method callers
    {
        accelerate();
    }

    void callBrake()
    {
        brake();
    }

    int getYearModel() // Getters
    {
        return yearModel;
    }

    std::string getMake()
    {
        return make;
    }

private:
    int yearModel;      // Members
    std::string make;
    int speed;

    void accelerate(); // Method Declarations
    void brake();
};

Car::Car(int x, std::string y)
{
    yearModel = x;
    make = y;
    speed = 0;

    // Debug
    std::cout << "Debug Successful \n";
}

void Car::accelerate()
{
    speed += 5;
    std::cout << speed;
}

void Car::brake()
{
    speed -= 5;
    std::cout << speed;
}


// Main function. Every cpp program needs it!
int main()
{
    Car myLexus(1986, "Lexus");
    myLexus.callAccelerate();
}
