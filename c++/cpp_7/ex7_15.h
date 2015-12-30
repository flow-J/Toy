#ifndef CP5_ex7_15_h
#define CP5_ex7_15_h

#include <string>
#include <iostream>

struct Person;
std::istream &read(std::istream&, Person&);

class Person {
    Person() = default;
    Person(const std::string sname, const std::string saddr):name(sname), address(saddr) { }
    Person(std::istream &is){ read(is, *this); }

    std::string get_Name() const { return name; }
    std::string get_Address() const { return address; }

    std::string  name;
    std::string  address;
};

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os,const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}


#endif