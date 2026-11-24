#ifndef PET_H
#define PET_H

using namespace std;


class Pet {
    private: 
    
    string name;
    int age;
    int hunger; 
    
   
    public:
    void setName (string n);
    void setAge (int a);
    string getName() const ;
    int getAge() const;
    int getHunger() const;
    void birthday();
    void feedPet();
    Pet();
    };
    #endif