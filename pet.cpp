#include <iostream>
#include "PET.h"

using namespace std;

class Pet {
    private: 
    
    string name;
    int age;
    int hunger; ///0-10 scale 
    
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
   
    
    Pet();
    
    void Pet::feedPet(){
        if (hunger > 0){
            hunger--;
        }
    }
    
    
};
