#include <string>
#include <iostream>

using namespace std;

class animal
{
private:
    int id;
    string sound = "yyy";
    char sex;
public:
    int age;
    string name;
    //getters
    int getAge() {return age;}
    string getSound(){return sound;}
    //setter
    void setSound(string newSound) { sound = newSound;}

};

class dog: public animal
{
private:
    int id = 1;
    string sound = "bay";
public:
    string getSound(){return sound;}
};

class cat: animal
{
private:
    int id = 1;
    string sound = "miay";
public:
    string getSound(){return sound;}
};

int main()
{
    animal a;
    a.age = 5;
    int x = a.age;
    a.setSound("Mimi");
    cout << "Age " << a.age<< endl;
    cout << "Sound " << a.getSound()<< endl;

    cat c;
    cout << "Sound cat " << c.getSound()<< endl;
    dog d;
    cout << "Sound dog " << d.getSound()<< endl;

    return 0;
}

