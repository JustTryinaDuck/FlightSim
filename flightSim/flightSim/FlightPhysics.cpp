#include <iostream>
#include <cmath>

using namespace std;
double currentVelocity = 0.0;
double currentAltitude = 1000.0;
double surfaceArea = 42.7;
int weight = 13290;
double mass = 1354.94;
double G = 9.81;


double airDensity(double altitude) {
	double temp = -altitude / 8500;
	return 1.225 * pow(2.71828, temp);
}

double dynamicPressure(double airSpeed, double airDensity) {

}

double drag() {
	double density = airDensity(currentAltitude);
	double speed = airSpeed(currentVelocity);
	
	double drag = (density * pow(speed, 2) * dragCoef * surfaceArea) / 2;
	return drag;

}

double lift(double airSpeed, airDensity, double ) {

}

double liftCoef(double aOA) {

}

double dragCoef(double aOA) {

}

bool stall(double aOA) {

}

double thrust(int double, double maxThrust) {

}

double acceleration(double netForce, double mass) {

}

double velocityChange(double acceleration, int time) {

}
