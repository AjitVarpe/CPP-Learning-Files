#include <iostream>
using namespace std;

class Grandfather{
   public:
      void grandfather_info(){
         cout<<"this is grand father class and you have called grandfather info function"<<endl;
      }
};

class Father : public Grandfather{
   public:
      void father_info(){
         cout<<"this is father class and you have called the father info function"<<endl;
      }
};

class child : public Father{
   public:
      void child_info(){
         cout<<"this is child class and you have called the child function "<<endl;
      }
};
int main(){

    // Object of child class 
   child obj; 
   obj.child_info();
   obj.father_info();
   obj.grandfather_info();
   return 0;
}