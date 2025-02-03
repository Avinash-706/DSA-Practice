#include <iostream>
using namespace std;

// Base class
class Payment {
public:
    virtual void processPayment(double amount) = 0;  // Pure virtual function
    virtual ~Payment() {}  // Virtual destructor for proper cleanup
};

// Derived class for Credit Card Payment
class CreditCardPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing Credit Card payment of $" << amount << endl;
    }
};

// Derived class for PayPal Payment
class PayPalPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing PayPal payment of $" << amount << endl;
    }
};

// Derived class for Bank Transfer Payment
class BankTransferPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing Bank Transfer payment of $" << amount << endl;
    }
};

// Function to simulate a payment
void makePayment(Payment* paymentMethod, double amount) {
    paymentMethod->processPayment(amount);  // Late binding occurs here
}

int main() {
    CreditCardPayment cc;
    PayPalPayment pp;
    BankTransferPayment bt;

    Payment* payment = nullptr;

    // Simulating user choice at runtime
    int choice;
    cout << "Select Payment Method (1: Credit Card, 2: PayPal, 3: Bank Transfer): ";
    cin >> choice;

    switch (choice) {
        case 1: payment = &cc; break;
        case 2: payment = &pp; break;
        case 3: payment = &bt; break;
        default: cout << "Invalid choice!"; return 1;
    }

    // Processing payment (Late binding in action)
    makePayment(payment, 100.50);

    return 0;
}