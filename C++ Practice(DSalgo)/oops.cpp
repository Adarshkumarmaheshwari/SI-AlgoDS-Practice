#include<iostream>
using namespace std;

class student{
    string name; 
    public:
    int age;
    bool gender;

    student(){
        cout<<"Default constructer"<<endl;
    }
    //paramerterised constructor
    student (string s, int a, int g){
        name=s;
        age=a;
        gender=g;
        cout<<"paramerterised constructor called"<<endl;

    }
    //copy constructor
    student(student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
        cout<<"Copy constructor called"<<endl;
    }
    ~student(){
        cout<<"Destructor called"<<endl;
    }
   //operator overloading
    bool operator==(student &a){
        if(name==a.name && age==a.age &&gender==a.gender){
            return true;
        }
        return false;
    }
    
};

int main()
{
    student a("Adarsh", 24,0);
    student b;
    student c(a);
    if(c==a){
        cout<<"same"<<endl;
    }else{
        cout<<"Not same"<<endl;
    }
    return 0;
}

/*
Shallow Copy(By default copy constructor) - It copies the pointers but not the locations where poiinters are pointing to
Deep copy => It copy pointer as well as location where it is pointing to
*/