#include <iostream>
#include "teacher.h"
#include "student.h"
#include <string>
#include <conio.h>


int main()
{
    int choice;
    Student Studentobj;
    Teacher Teacherobj;

    while (true)
    {
        std::cout << "Welcome To The School Management System"
                  << "\n";

        std::cout << "1.add Student"
                  << "\n";
        std::cout << "2.Find student"
                  << "\n";
        std::cout << "3.display all Student"
                  << "\n";
        std::cout << "4.add Teacher"
                  << "\n";
        std::cout << "5.Find Teacher"
                  << "\n";
        std::cout << "6.Display all Teacher details"
                  << "\n";
        std::cout << "7.Exit"
                  << "\n";
        std::cout << "Enter Your Choice ::";
        std::cin >> choice;
        if (choice == 1)
        {
            system("cls");
            Information values;
            std::cout << "\n";
            std::cout << "Enter Name ::";
            std::cin.ignore();
            std::getline(std::cin, values.Name_);
            std::cout << "Enter Class ::";
            std::getline(std::cin, values.Class_);

            std::cout << "\n";
            std::cin.ignore();
            std::cout << "Enter Section ::";
            std::getline(std::cin, values.Section_);
            std::cout << "\n";
            std::cout << "Enter Roll number  ::";
            std::getline(std::cin, values.RollNumber_);
            std::cout << "\n";

            std::cout << "Enter Scholar Number ::";
            std::cin >> values.ScholarNumber_;
            Studentobj.InsertAtTheEnd(values.Name_, values.Class_, values.Section_, values.RollNumber_, values.ScholarNumber_);
            std::cout << "Entry succesful"
                      << "\n";
            std::cout << "Enter to Continue";
            getch();
            system("cls");
        }
        else if (choice == 2)
        {
            system("cls");

            Information obj1;

            int targetscholarnumber;
            std::cout << "Enter Scholar number for fetching the details:: ";
            std::cin >> targetscholarnumber;
            obj1 = Studentobj.Target(targetscholarnumber);

            std::cout << "Name :" << obj1.Name_ << "\n";
            std::cout << "class :" << obj1.Class_ << "\n";
            std::cout << "section :" << obj1.Section_ << "\n";
            std::cout << "scholar number :" << obj1.ScholarNumber_ << "\n";
            std::cout << "roll number :" << obj1.RollNumber_ << "\n";
            std::cout << "Enter to Continue";
            getch();
            system("cls");
        }
        else if (choice == 3)
        {
            std::vector<Information> details;
            details = Studentobj.PullDetails();
            system("cls");
            for (Information info : details)
            {
                std::cout << "Name :" << info.Name_ << "\n";
                std::cout << "class :" << info.Class_ << "\n";
                std::cout << "section :" << info.Section_ << "\n";
                std::cout << "scholar number :" << info.ScholarNumber_ << "\n";
                std::cout << "roll number :" << info.RollNumber_ << "\n";
                std::cout << "-----------------------------------------------"
                          << "\n";
            }
            std::cout << "Enter to Continue";
            getch();
            system("cls");
        }
        else if (choice == 4)
        {
            TInformation value;
            std::cout << "\n";
            std::cout << "Enter Name ::";
            std::cin.ignore();
            std::getline(std::cin, value.Name);
            std::cout << "Enter Class ::";
            std::cin >> value.Class;
            std::cout << "\n";
            std::cin.ignore();
            std::cout << "Enter Section ::";
            std::getline(std::cin, value.Section);
            std::cout << "\n";
            std::cout << "Enter Employee ID ::";
            std::getline(std::cin, value.EmpolyeeID);
            std::cout << "\n";
            std::cout << "Enter Subject  ::";
            std::getline(std::cin, value.Subject);
            std::cout << "\n";
            Teacherobj.insertattheend(value.Name, value.EmpolyeeID, value.Subject, value.Class, value.Section);
            std::cout << "Entry succesful"
                      << "\n";
            std::cout << "Enter to Continue";
            getch();
            system("cls");
        }
        else if (choice == 5)
        {
            system("cls");

            TInformation obj1;

            std::string targetempid;
            std::cin.ignore();
            std::cout << "Enter Emplyee ID for fetching the details:: ";
            std::getline(std::cin, targetempid);
            obj1 = Teacherobj.Target(targetempid);

            std::cout << "Name :" << obj1.Name << "\n";
            std::cout << "class :" << obj1.Class << "\n";
            std::cout << "section :" << obj1.Section << "\n";
            std::cout << "Employee ID :" << obj1.EmpolyeeID << "\n";
            std::cout << "Subject :" << obj1.Subject << "\n";
            std::cout << "Enter to Continue";
            getch();
            system("cls");
        }
        else if (choice == 6)
        {
            std::vector<TInformation> details;
            details = Teacherobj.PullDetails();
            system("cls");
            for (TInformation info : details)
            {
                std::cout << "Name :" << info.Name << "\n";
                std::cout << "class :" << info.Class << "\n";
                std::cout << "section :" << info.Section << "\n";
                std::cout << "employee ID :" << info.EmpolyeeID << "\n";
                std::cout << "Subject ::" << info.Subject << "\n";
                std::cout << "-----------------------------------------------"
                          << "\n";
            }
            std::cout << "Enter to Continue";
            getch();
            system("cls");
        }
        else if (choice == 7)
        {
            break;
        }

        else
        {
            std::cout << "please  correct choice"
                      << "\n";
        }
    }

    return 0;
}