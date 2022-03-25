//Virtual Base classs************

#include <iostream>
using namespace std;

class students{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void){
        cout<<"Your roll no. is "<<roll_no<<endl;
    }
};
   
   class Test : virtual public students{
       protected:
       float maths, physics;
       public:
       void set_marks(float m1,float m2){
           maths = m1;
           physics = m2;
       }

       void print_marks(void){
           cout<<"Your result is here :"<<endl
               <<"Maths: "<<maths<<endl
               <<"Physics: "<<physics<<endl;
       }

   };

    class Sports : virtual public students{
       protected:
       float score;
       public:
       void set_score(float sc){
          
          score = sc;
       }

       void print_score(void){
           cout<<"Your PT score is "<<score<<endl;
       }

   };

   class Result : public Test, public Sports{
      protected:
         float total;
     public:
     void display(void){
         total = maths + physics + score;
         print_number();
         print_marks();
         print_score();
         cout<<"Your total score is : "<<total<<endl;
     }

   };


int main()
{
    Result Adarsh;
    Adarsh.set_number(1200);
    Adarsh.set_marks(78.7,98.3);
    Adarsh.set_score(9);
    Adarsh.display();

    return 0;
}