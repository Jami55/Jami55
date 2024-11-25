#include <iostream>
#include <cstring>
#include <cmath>
using namespace std ;

class Car {
public:
            string car_name ;
            int car_id , model , rental_price_per_day , how_many_available ;
            bool is_available ;
            void d (string car_name , int car_id , int model , int rental_price_per_day) {
                        cout << "Car name : " << car_name << "\n" ;
                        cout << "Car ID : " << car_id << "\n" ;
                        cout << "Car model : " << model << "\n" ;
                        cout << "Car rental price per day : " << rental_price_per_day << "\n" ;
            }
            void rent_car (bool is_available , bool is_returned , int user_how_many_car , int how_many_available , int rent) {
                        cout << boolalpha << "\n" ;
                        cout << "Car is available ? " << is_available << "\n" ;
                        cout << "How many cars available ? " << how_many_available << "\n" ;
                        cout << "How many cars rented ? " << rent << "\n" ;
                        cout << "Car available : " << abs (how_many_available - rent) << "\n" ;
                        cout << "Is car returned ? " << is_returned << "\n" ;
                        cout << "How many returned ? " << abs (rent - user_how_many_car) << "\n" ;
                        cout << "How many cars remaining to return ? " << abs ((rent - user_how_many_car) - user_how_many_car) << "\n" ;
            }
} ;

int main () {
            cout << "Noakhali Jahangir Rent-A-Car service" << "\n" ;
            Car object_1 ;
            object_1.d ("Toyota SI Noah" , 8 , 2013 , 5000) ;
            object_1.rent_car (true , false , 15 , 25 , 20) ;
            return 0 ;
}