#include <iostream>
#include <string>
#include "phone.h"

Address::Address() {
    init();
}

Address::~Address() {
    setFirst("");
    setLast("");
    setPhoneNumber("");
}

void Address::print() {
    std::cout << toString();
}
std::string Address::toString() {
    std::string strAddress = getLast() + " " + getLast() + " " + getPhoneNumber();
    return strAddress;
}

void Address::init() {
    setFirst("");
    setLast("");
    setPhoneNumber("(000)-000-0000");
}
void Address::setFirst(std::string strpFirst) {
    if(strpFirst.size() < 1) {
        strpFirst = "Default";  
    }
    strFirst = strpFirst;
}
void Address::setLast(std::string strpLast) {
    strLast = strpLast;
}
void Address::setPhoneNumber(std::string strpPhoneNumber){
    strPhoneNumber = strpPhoneNumber;
}

std::string Address::getFirst() {
    return strFirst;
}
std::string Address::getLast() {
    return strLast;
}
std::string Address::getPhoneNumber() {
    return strPhoneNumber;
}