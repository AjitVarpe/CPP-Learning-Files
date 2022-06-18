#include <iostream>

using namespace std;

// Inheritance


// Chef is superclass
class Chef{      
    public:
        void make_chicken(){
            cout << "The chef makes chicken" << endl;
        }

        void make_salad(){
            cout << "The chef makes salad" << endl;
        }

        void make_special_dish(){
            cout << "The chef makes butter chicken" << endl;
        }
};


// ItalianChef is a subclass
class ItalianChef : public Chef{
    public:
        void make_pizza(){
            cout << "The chef makes pizza" << endl;
        }

        void make_special_dish(){
            cout << "The chef makes chole bhature" << endl;
        }

};

int main(){
    Chef chef;
    ItalianChef italian_chef;
    chef.make_chicken();
    italian_chef.make_pizza();
    italian_chef.make_chicken();
    chef.make_special_dish();
    italian_chef.make_special_dish();

}