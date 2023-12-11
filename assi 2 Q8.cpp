#include <iostream>
using namespace std;

int main()
{
    char gender;
    double weight, wrist, waist, hip, forearm, bodyFat, bodyFatPercentage;

    // Ask for gender input
 
   cout << "Are you a male or female? Enter M for male, F for female: ";
    cin >> gender;

    // Prompt for body measurements
  
  cout << "Enter your weight (in pounds): ";
    cin >> weight;
    cout << "Enter your wrist measurement (at fullest point in inches): ";
    cin >> wrist;
    cout << "Enter your waist measurement (at navel in inches): ";
    cin >> waist;
    cout << "Enter your hip measurement (at fullest point in inches): ";
    cin >> hip;
    cout << "Enter your forearm measurement (at fullest point in inches): ";
    cin >> forearm;

    // Calculate body fat based on gender
  
  if (gender == 'F' || gender == 'f')
    {
        double A1 = (weight * 0.732) + 8.987;
        double A2 = wrist / 3.140;
        double A3 = waist * 0.157;
        double A4 = hip * 0.249;
        double A5 = forearm * 0.434;
        double B = A1 + A2 - A3 - A4 + A5;
        bodyFat = weight - B;
        bodyFatPercentage = bodyFat * 100 / weight;
    }
    
else if (gender == 'M' || gender == 'm')
    {
        double A1 = (weight * 1.082) + 94.42;
        double A2 = wrist * 4.15;
        double B = A1 - A2;
        bodyFat = weight - B;
        bodyFatPercentage = bodyFat * 100 / weight;
    }
    else
    {
        cout << "Invalid gender input." << endl;
        return 0;
    }

    // Output the results
    cout << "Your body fat percentage is: " << bodyFatPercentage << "%" << endl;

    return 0;
}

