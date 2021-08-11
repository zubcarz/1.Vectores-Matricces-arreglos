
#include "iostream"
#include <vector>

using namespace std;

// punto A
void getUser(int);

//punto B
void getfrequencyAge();

//punto C
void addUser();

//punto D
void deleteUser();

//punt E
void printDB();

struct User
{
    int id;
    string lastname;
    string name;
    int age;

    void createUser(int *vid, string vlastname, string vname, int vage)
    {
        *vid = *vid + 1;
        id = *vid;
        lastname = vlastname;
        name = vname;
        age = vage;
    }

    void printCurrentUser()
    {
        cout << "id => " << id << endl;
        cout << "lastname => " << lastname << endl;
        cout << "name => " << name << endl;
        cout << "age => " << age << endl << endl;
    }
} user;

int main()
{

    int currentId = 0;
    vector<User> users;
    // int *currentPtr = &currentId;

    cout << "start program" << endl;
    user.createUser(&currentId, "Cortez", "Manuel", 5);
    users.push_back(user);

    user.createUser(&currentId, "Sanchez", "Andrea", 15);
    users.push_back(user);

    getUser(1, &users);


    return 0;
}

// punto A
void getUser(int position, vector<User> *users)
{
    // BUG access to vector pointer
    // *user[position].printCurrentUser();
}

//punto B
void getfrequencyAge()
{
}

//punto C
void addUser()
{
}

//punto D
void deleteUser()
{
}

//punt E
void printDB()
{
}