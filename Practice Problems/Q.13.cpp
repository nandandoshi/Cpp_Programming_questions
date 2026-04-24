    // Write a program using Class to display book details in a library. If a student
    // wants to issue a book, write a condition about availability of a book.

    #include <iostream>
    using namespace std;
    class detailbook
    {
        public:
        int bookno;
        struct bookdetail
        {
            string name,author;
            int available_int;
            bool available;
        }book[6];
        public:
        void addinfo()
        {
            for (int i = 1; i <= 5; i++)
            {
                cout << "\nEnter the name of the book: ";
                cin >> book[i].name;
                cout << "\nEnter the author of the book: ";
                cin >> book[i].author;
                cout << "\nIs the book available (True: 1 False: 0): ";
                cin >> book[i].available_int;
                if (book[i].available_int == 1)
                {
                    book[i].available = true;
                }
                else
                {
                    book[i].available = false;  
                }
            }
        }
        void check()
        {
            int choice;
            cout << "\nWhich book do you want? : ";
            cin >> bookno;
            cout << "\nName: " << book[bookno].name;
            cout << "\nAuthor: " << book[bookno].author;
            if (book[bookno].available == true)
            {
                cout << "\nYes, It is available";
                cout << "Do you want to issue the book: ";
                switch (choice)
                {
                case 1:
                    cout << "The book has been issued to you";
                    break;
                case 2:
                    cout << "Thank you for visiting.";
                default:
                    cout << "Error!";
                    break;
                }
            }
            else
                cout << "\nNo, It is not available";
        }
    };

    int main()
    {
        detailbook bookcheck;
        bookcheck.addinfo();
        bookcheck.check();
        return 0;
    }