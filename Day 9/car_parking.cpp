#include<bits/stdc++.h>
using namespace std;
class Car{
private:
    string licensePlate;
    string owner;
public:
    Car(string lp,string o){
        licensePlate=lp;
        owner=o;
    }
    void setlp(string lp){
        licensePlate=lp;
    }
    void seto(string o){
        owner=o;
    }
    string getlp(){
        return licensePlate;
    }
    string geto(){
        return owner;
    }
    void display(){
        cout<<"License Plate: "<<licensePlate<<endl;
        cout<<"Owner Name: "<<owner<<endl;
    }
};
class ParkingLot{
private:
    vector<Car> parkedCars;
    int capacity;
public:
    ParkingLot(int cap){
        capacity=cap;
    }
    bool parkCar( Car& car){
        if(parkedCars.size()<capacity){
            parkedCars.push_back(car);
            return true;
        }
        else{
            cout<<"Parking lot is FULL!"<<endl;
            return false;

        }
    }
    void displayParkedCars(){
        cout<<"Parked Cars:\n";
        for( auto& car:parkedCars){
            car.display();
        }
    }
};
int main()
{
    ParkingLot myParkingLot(3);
    Car car1("BC123","Sanjay Gore");
    Car car2("YZ457","Janvi Manse");
    Car car3("MN423", "Aliya kapse");
    Car car4("QR6124", "meena sharma");
    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.parkCar(car3);
    myParkingLot.parkCar(car4);
    myParkingLot.displayParkedCars();
}
