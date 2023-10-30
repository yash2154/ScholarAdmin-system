#include <string>
#include <iostream>
#include <vector>
#include <memory>
#ifndef STUDENT_H
#define STUDENT_H

struct Information
{
    std::string Name_;
    std::string Class_;
    std::string Section_;
    std::string RollNumber_;
    int ScholarNumber_;
};

struct Node
{
    std::string Name;
    std::string  Class;
    std::string Section;
    std::string RollNumber;
    int ScholarNumber;
    std::shared_ptr<Node> next = nullptr; // Use std::shared_ptr<Node> instead of Node*
};

class Student
{
public:
    std::shared_ptr<Node> head = nullptr; // Use std::shared_ptr<Node> for head
    std::shared_ptr<Node> tail = nullptr;

    void InsertAtTheEnd(std::string name, std::string class_, std::string sect, std::string roll_no, int sch)
    {
        std::shared_ptr<Node> newnode = std::make_shared<Node>(); // Use std::make_shared
        newnode->Name = name;
        newnode->Class = class_;
        newnode->Section = sect;
        newnode->RollNumber = roll_no;
        newnode->ScholarNumber = sch;
        if (!head)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    Information DropSStudentDetials(int scholar)
    {
        std::shared_ptr<Node> current = head;
        std::shared_ptr<Node> temp = head;
        Information rval;
        while (current)
        {
            if (current->ScholarNumber == scholar)
            {
                rval.Name_ = current->Name;
                rval.Class_ = current->Class;
                rval.Section_ = current->Section;
                rval.RollNumber_ = current->RollNumber;
                rval.ScholarNumber_ = current->ScholarNumber;
                return rval;
            }
            current = current->next;
        }
        return rval;
    }

    

    std::vector<Information> PullDetails()
    {
        std::shared_ptr<Node> current = head;
        std::vector<Information> detailslist;
        while (current)
        {
            Information temp;
            temp.Name_ = current->Name;
            temp.Class_ = current->Class;
            temp.Section_ = current->Section;
            temp.RollNumber_ = current->RollNumber;
            temp.ScholarNumber_ = current->ScholarNumber;
            detailslist.push_back(temp);

            current = current->next;
        }
        return detailslist;
    }

    Information Target(int scholar)
    {
        std::shared_ptr<Node> current = head;
        Information rval;
        while (current)
        {
            if (current->ScholarNumber == scholar)
            {
                rval.Name_ = current->Name;
                rval.Class_ = current->Class;
                rval.Section_ = current->Section;
                rval.RollNumber_ = current->RollNumber;
                rval.ScholarNumber_ = current->ScholarNumber;


                return rval;
            }
            current = current->next;
        }
        return rval;
    }
};

#endif
