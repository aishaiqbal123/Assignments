#include <iostream>
using namespace std;

double calculateEndurance(double fuelCapacity, double fuelConsumptionRate) {
    double endurance = fuelCapacity / fuelConsumptionRate;
    return endurance;
}

int main() {
    double fuelCapacity, fuelConsumptionRate;

    cout << "Enter the fuel capacity of the aircraft (in liters): ";
    cin >> fuelCapacity;

    cout << "Enter the fuel consumption rate of the aircraft (in liters per hour): ";
    cin >> fuelConsumptionRate;

    double endurance = calculateEndurance(fuelCapacity, fuelConsumptionRate);

    cout << "Endurance: " << endurance << " hours\n";

    return 0;
}