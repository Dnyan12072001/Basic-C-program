#include<iostream>
using namespace std;

class Vehicle
{
public:
    string name= "Pulsor";
    int cost = 500000;

    void Vehicle_detail(){
    cout<<"vehicle company name : "<<name<<endl;
    cout<<"vehicle cost : "<<cost;


    }


};
class Car : public Vehicle
{
    public:
        string car_name = "audi";
        int tyres = 4;

        void Car_detail()
        {
            cout<<"car name is : "<<car_name<<endl;
            cout<<"tyres of car : "<<tyres;

        }


};

int main()
{
    Car c1;

    c1.Vehicle_detail();

    return 0;
}
