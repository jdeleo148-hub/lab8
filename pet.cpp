#include <iostream>
#include "PET.h"

using namespace std;

Pet::Pet (){ ///default constructor
    name = "Unknown";
    age = 0;
    hunger = 5;
        
    }
    public:
    
    void Pet::setName (string n){
        name = n;
    }
    void Pet::setAge (int a) {
        age = a;
    }
    
    string Pet::getName() const {
        return name;
    }
    int Pet::getAge() const {
        return age;
    }
    int Pet::getHunger() const {
        return hunger;
    }
   
    void Pet::feedPet(){
        if (hunger > 0){
            hunger--;
        }
    }
    
    
};
