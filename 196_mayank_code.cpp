#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Username validation
bool validUsername(string username)
{
    // chetan123#
    if (username.length() < 8)
    {
        return false;
    }
    bool valid = false;

    for (int i = 0; i < username.length(); i++) // 1
    {
        if (username[i] >= 'A' && username[i] <= 'Z')
        {
            valid = true;
            break;
        }
    }
    if (valid == false)
    {
        return false;
    }

    valid = false;
    // fdjhgkj
    for (int i = 0; i < username.length(); i++) // 1
    {
        if (username[i] >= 'a' && username[i] <= 'z')
        {
            valid = true;
            break;
        }
    }
    if (valid == false)
    {
        return false;
    }
    valid = false;
    // fdjhgkj
    for (int i = 0; i < username.length(); i++) // 1
    {
        if (username[i] >= '0' && username[i] <= '9')
        {
            valid = true;
            break;
        }
    }
    if (valid == false)
    {
        return false;
    }
    valid = false;
    // fdjhgkj
    for (int i = 0; i < username.length(); i++) // 1
    {
        if (!(username[i] >= 'a' && username[i] <= 'z' || username[i] >= 'A' && username[i] <= 'Z' || username[i] >= '0' && username[i] <= '9'))
        {
            valid = true;
            break;
        }
    }
    if (valid == false)
    {
        return false;
    }
    return true;
}
bool validPhonNumber(string phone)
{
    // dsf5677756
    if (phone.length() != 10)
    {
        return false;
    }
    int i;
    for (i = 0; i < phone.length(); i++)
    {
        if (!(phone[i] >= '0' && phone[i] <= '9'))
        {
            return false;
        }
    }
    return true;
}
// OTP generate
int generateOTP()
{
    return rand() % 9000 + 1000; 
}

// Registration
void registerUser()
{
    string username, phone, email, password;

    cout << "\nEnter Username: ";
    cin >> username; // chetan@_#

    if (!validUsername(username))
    {
        cout << "Invalid Username\n";
        return;
    }

    cout << "Enter Phone: ";
    cin >> phone;

    if (!validPhonNumber(phone))
    {
        cout << "Invalid phon number";
        return;
    }
    cout << "Enter Email: ";
    cin >> email;

    cout << "Enter Password: ";
    cin >> password;

    ofstream f("data.txt", ios::app);
    f << username << " " << phone << " " << email << " " << password << endl;
    f.close();

    cout << "Registration Successful\n";
}

// Login
void loginUser()
{
    string username, password;
    string fileUser, filePhone, fileEmail, filePass;

    cout << "\nEnter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    ifstream file("data.txt");

    bool found = false;

    while (file >> fileUser >> filePhone >> fileEmail >> filePass)
    {
        if (username == fileUser && password == filePass)
        {
            found = true;
            break;
        }
    }

    file.close();

    if (found == true)
    {
        cout << "Login Successful\n";

        int otp = generateOTP();
        int userOTP, attempts = 0;

        cout << "Your OTP: " << otp << endl;

        while (attempts < 3)
        {
            cout << "Enter OTP: ";
            cin >> userOTP;

            if (userOTP == otp)
            {
                cout << "succesful OTP\n";
                return;
            }
            else
            {
                cout << "Wrong OTP\n";
                attempts++; // 3
            }
        }

        cout << "Account Blocked (3 wrong OTP)\n";
    }
    else
    {
        cout << "Login Failed\n";
    }
}

int main()
{

    srand(time(0));

    int choice;

    cout << "\n===== Secure Cyber System =====\n";
    cout << "1. Register\n";
    cout << "2. Login\n";

    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        registerUser();
        break;

    case 2:
        loginUser();
        break;

    default:
        cout << "Invalid choice! please enter 1 to 3 number ";
    }

    return 0;
}