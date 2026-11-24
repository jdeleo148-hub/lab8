///////////////////////////////////////////////////////////////////// 
// Name: Joel De Leon
// Date: Today's date 11/25
// Class: CSCI 1470.0X 
// Semester: Fall 2026 
// CSCI 1470 Instructor: Dr. Jonatan Reyes 
// Program Description: interactive pet  
/////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include <"PET.h">


using namespace std;

int main()
{
    char choice;
    Pet pet1; //object using default constructor
    bool petCreated = false;
    
    
    
    do {
        cout << "Welcome to your Virtual Pet!  Pick an option..." << endl;
        
        if (petCreated == false){
        cout << "Enter (N) to create a new pet" << endl;
        cout << "Enter (E) for exit" << endl;
    }
        else {
        cout << "(F) Feed your pet" << endl;
        cout << "(B) Celebrate birthday" << endl;
        cout << "(V) View pet information" << endl;
        cout << "(C) Change pet's name" << endl;
        cout << "(E) Exit" << endl;
        }
    
        cout << "Enter your choice...";
        cin >> choice;
        if ((choice=='N' or choice=='n') and petCreated==false) {
            string petName;
            int petAge;
            cout << "Enter your pet's name: ";
            cin.ignore();            
            getline(cin, petName);
            cout << "What's " << petName << "'s age: ";
            cin >>petAge;
            

    pet1.setName(petName);
    pet1.setAge(petAge);
    petCreated = true;
    
    cout << "Your pet "<< pet1.getName() << " has been created!" << endl;
    }
    else if ((choice == 'F' or choice == 'f') and petCreated == true) {

            pet1.feedPet();

            cout << pet1.getName()
                 << " has been fed!" << endl;

            cout << "Hunger Level: "
                 << pet1.getHunger() << endl;
        }
    else if ((choice == 'B' or choice == 'b') and petCreated == true) {

            pet1.birthday();

            cout << "Happy Birthday to " << pet1.getName() << "!" << endl;
            cout << pet1.getName()<< " is "<< pet1.getAge() << " years old!" << endl;
        }
    else if ((choice == 'V' or choice == 'v') and petCreated == true) {

            cout << "Pet Information:" << endl;
            cout << "Name: "
                 << pet1.getName() << endl;
            cout << "Age: "
                 << pet1.getAge() << endl;
            cout << "Hunger Level: "
                 << pet1.getHunger() << endl;
        }
    else if ((choice == 'C' or choice == 'c') and petCreated == true) {

            string newName;

            cout << "Enter new pet name: ";
            cin.ignore();
            getline(cin, newName);
            pet1.setName(newName);
            cout << "Pet's name is "<< pet1.getName() << endl;
        }
else if (choice == 'E' or choice == 'e') {
            cout << "Goodbye!" << endl;
        }

    else {
            cout << "Invalid, choice something else." << endl;
        }

    } while (choice != 'E' and choice != 'e');
    
    return 0;
}
