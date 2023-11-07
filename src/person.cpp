#include "../include/Person.h"
#include <iostream>
using namespace std;

Person::Person(string name, int age): name(name), age(age){}

int Person::getAge() const{
    return age;
}