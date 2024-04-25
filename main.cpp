#include <iostream>
#include <ctime>

using namespace std;

class welcome
{
public:
    void display_time()
    {
        cout << "Welcome to the bookstore" << endl;
        time_t currentTime = time(nullptr);
        tm *localTime = localtime(&currentTime);
        cout << "Current time: "
             << localTime->tm_hour << ":"
             << localTime->tm_min << ":"
             << localTime->tm_sec << endl;
    };
};

class bookstore
{
public:
    int sum = 0;

    void bill()
    {
        cout << "Your total bill is: " << sum << " Rs." << endl;
    }

    void genres()
    {
        cout << "--------------GENRES--------------" << endl;
        cout << "1. Fiction" << endl;
        cout << "2. Self-Help" << endl;
        cout << "3. Money-making" << endl;
        cout << "4. Children's books" << endl;
    }

    void price(int price)
    {
        cout << "The price of the book is: " << price << " Rs." << endl;
        sum += price; // Adding book price to the total bill
    }

    void Fiction()
    {
        cout << "--------------FICTION BOOKS--------------" << endl;
        cout << "1. Harry Potter and the Philosopher's Stone - Rs. 550" << endl;
        cout << "2. Maze Runner - Rs. 600" << endl;
        cout << "3. Divergent - Rs. 500" << endl;
        cout << "4. Frankenstein - Rs. 700" << endl;
    }

    void SelfHelp()
    {
        cout << "--------------SELF-HELP BOOKS--------------" << endl;
        cout << "1. Atomic Habits - Rs. 600" << endl;
        cout << "2. Feel-good Productivity - Rs. 650" << endl;
        cout << "3. 4000 Weeks - Rs. 450" << endl;
        cout << "4. Deep Work - Rs. 700" << endl;
    }

    void MoneyMaking()
    {
        cout << "--------------MONEY-MAKING BOOKS--------------" << endl;
        cout << "1. The Entrepreneur Revolution - Rs. 500" << endl;
        cout << "2. Millionaire Fastlane - Rs. 550" << endl;
        cout << "3. Crush It! - Rs. 600" << endl;
        cout << "4. Key Person of Influence - Rs. 650" << endl;
    }

    void ChildrenBooks()
    {
        cout << "--------------CHILDREN'S BOOKS--------------" << endl;
        cout << "1. Mary had a Little Lamb - Rs. 450" << endl;
        cout << "2. Peppa Pig - Rs. 500" << endl;
        cout << "3. Thomas Engine - Rs. 550" << endl;
        cout << "4. Bob the Builder - Rs. 600" << endl;
    }

    void ask()
    {
        char choice;
        do
        {
            string genre;
            cout << "Enter the number of the genre you'd like to explore: ";
            cin >> genre;

            if (genre == "1")
            {
                Fiction();
                int book;
                cout << "Enter the number of the book you'd like to buy: ";
                cin >> book;
                if (book == 1)
                    price(550);
                else if (book == 2)
                    price(600);
                else if (book == 3)
                    price(500);
                else if (book == 4)
                    price(700);
                else
                    cout << "Invalid book selection." << endl;
            }
            else if (genre == "2")
            {
                SelfHelp();
                int book;
                cout << "Enter the number of the book you'd like to buy: ";
                cin >> book;
                if (book == 1)
                    price(550);
                else if (book == 2)
                    price(600);
                else if (book == 3)
                    price(500);
                else if (book == 4)
                    price(700);
                else
                    cout << "Invalid book selection." << endl;
            }
            else if (genre == "3")
            {
                MoneyMaking();
                int book;
                cout << "Enter the number of the book you'd like to buy: ";
                cin >> book;
                if (book == 1)
                    price(550);
                else if (book == 2)
                    price(600);
                else if (book == 3)
                    price(500);
                else if (book == 4)
                    price(700);
                else
                    cout << "Invalid book selection." << endl;
            }
            else if (genre == "4")
            {
                ChildrenBooks();
                int book;
                cout << "Enter the number of the book you'd like to buy: ";
                cin >> book;
                if (book == 1)
                    price(550);
                else if (book == 2)
                    price(600);
                else if (book == 3)
                    price(500);
                else if (book == 4)
                    price(700);
                else
                    cout << "Invalid book selection." << endl;
            }
            else
            {
                cout << "Invalid genre selection." << endl;
            }

            cout << "Do you want to buy another book? (y/n): ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');
    }
};

int main()
{
    welcome w;
    bookstore b;
    w.display_time();
    cout << "We have a range of books for you. Here are the genres:" << endl;
    b.genres();
    b.ask();
    b.bill();
}
