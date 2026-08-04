#include<bits/stdc++.h>
using namespace std;

// Abstraction
class Database {

public:

    virtual void save() = 0;

    virtual ~Database() = default;

};

// Concrete Class
class MySQLDatabase : public Database {

public:

    void save() override {

        cout << "Saving to MySQL\n";

    }

};

// Another Concrete Class
class MongoDatabase : public Database {

public:

    void save() override {

        cout << "Saving to MongoDB\n";

    }

};

// High-Level Module
class OrderService {

private:

    Database* database;

public:
  
//Dependency Injection : By using Constructor Injection
    OrderService(Database* db)
        : database(db)
    {
    }

    void placeOrder() {

        database->save();

    }

};

int main() {

    MySQLDatabase mysql;

    OrderService order(&mysql);

    order.placeOrder();

    return 0;
}