#include <iostream>
using namespace std;
class vehicle{
protected:
    string plate;
    string brand;
    int wheels_number;

public:
    vehicle(string plate, string brand, int wheels_number) : plate(plate), brand(brand), wheels_number(wheels_number){}
    string get_plate()const{
        return plate;
    }
    string get_brand()const{
        return brand;
    }
    int get_wheels_number()const{
        return wheels_number;
    }
    void set_plate(string plate){
        this->plate = plate;
    }
    void set_brand(string brand){
        this->brand = brand;
    }
    void set_wheels_number(int wheels_number){
        this->wheels_number = wheels_number;
    }

};
class Bugatti : public vehicle{
private:
    int horses_number;
    int price;
public:
    Bugatti(string plate, string brand, int wheels_number, int horses_number, int price): vehicle(plate, brand, wheels_number), horses_number(horses_number), price(price){}
    int get_horses_number()const{
        return horses_number;
    }
    int  get_price()const{
        return price;
    }  
    void set_horses_number(int horses_number){
        this->horses_number = horses_number;
    }
    void set_price(int price){
        this->price = price;
    }

};
int main(){ 
    Bugatti obj("3ghjh45", "buggatti", 4, 600, 300000);  
    cout << obj.get_price(); 
}

