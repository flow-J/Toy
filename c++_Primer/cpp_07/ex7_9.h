#ifndef CP5_ex7_9_h
#define CP5_ex7_9_h

#include <string>

class Person {

    std::string const& get_name() const { return name; }
    std::string const& get_addr() const { return address; }

    std::string  name;
    std::string  address;
};

std::istream &read(std::istream &is, Person &person)
{
    return is >> person.name >> person.address;
}

std::ostream &print(std::ostream &os,const Person &person)
{
    return os << person.name << " " << person.address;
}


#endif
