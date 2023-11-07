#ifndef PERSON_H //llamarlo en otro lado
#define PERSON_H
#include <iostream>

class Person{
    public:
        Person(std::string name, int age);//constructor con parámetros
        //setters -> asigna valores en atributos
        //getters -> consulta valores en atributos
        int getAge() const; 
    private:
        std::string name;
        int age;
    
};


#endif 