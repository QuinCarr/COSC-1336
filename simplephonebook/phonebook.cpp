// Quinn C - 20210504
// phonebook
#include <iostream>
#include <vector>
#include "phone.h"

int main() {
    std::vector<Address> vtrAddress(2);
    Address objAddress = Address();
    Address objAddress2 = Address();

    vtrAddress.clear();

    objAddress.setFirst("Viktor");
    objAddress.setLast("Vaughn");
    objAddress.setPhoneNumber("(203)-204-2212");

    vtrAddress.push_back(objAddress);

    objAddress2.setFirst("Metal");
    objAddress2.setLast("Face");
    objAddress2.setPhoneNumber("(199)-202-9000");

    vtrAddress.push_back(objAddress2);

    objAddress = Address();

    objAddress.setFirst("Mad");
    objAddress.setLast("Villain");
    objAddress.setPhoneNumber("(204)-460-0323");

    vtrAddress.push_back(objAddress);
    
    for(int intIndex = 0; intIndex < vtrAddress.size(); intIndex++) {
        vtrAddress.at(intIndex).print();
        std::cout << std::endl;
    }


    return 0;
}