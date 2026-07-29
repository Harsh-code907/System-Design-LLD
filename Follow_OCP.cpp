#include<bits/stdc++.h>
using namespace std;

// Abstract Base Class
class Customer {
public:
    virtual double getDiscount(double amount) const = 0;
    virtual ~Customer() = default;
};

// Derived Classes
class RegularCustomer : public Customer {
public:
    double getDiscount(double amount) const override {
        return amount * 0.10;
    }
};

class PremiumCustomer : public Customer {
public:
    double getDiscount(double amount) const override {
        return amount * 0.20;
    }
};

class VIPCustomer : public Customer {
public:
    double getDiscount(double amount) const override {
        return amount * 0.30;
    }
};

int main() {

    VIPCustomer customer = VIPCustomer();

    cout << "Discount = Rs."<< customer.getDiscount(1000)<< endl;

    return 0;
}