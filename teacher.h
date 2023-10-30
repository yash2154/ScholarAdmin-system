#include <iostream>
#include <string>
#include <memory>
#include <vector>
#ifndef TEACHER_H
#define TEACHER_H


struct TInformation
{
    std::string Name;
    std::string EmpolyeeID;
    std::string Subject;
    std::string  Class;
    std::string Section;


};

struct TNode
{
    std::string Name;
    std::string EmpolyeeID;
    std::string Subject;
    std::string  Class;
    std::string Section;
    std::shared_ptr<TNode> next = nullptr;
};



class Teacher
{
public:
    std::shared_ptr<TNode> head = nullptr;
    std::shared_ptr<TNode> tail = nullptr;

    void insertattheend(std::string name, std::string emid, std::string subject, std::string  class_, std::string section)
    {
        std::shared_ptr<TNode> newnode = std::make_shared<TNode>(); // Use std::make_shared
        newnode->Name = name;
        newnode->EmpolyeeID = emid;
        newnode->Class = class_;
        newnode->Section = section;
        newnode->Subject=subject;
        
        if (head == nullptr)
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

    TInformation Target(std::string employeeid)
    {
        TInformation rval;

        std::shared_ptr<TNode> current = head;
        while (current != nullptr)
        {
            if (current->EmpolyeeID == employeeid)
            {
                rval.Class = current->Class;
                rval.Name = current->Name;
                rval.EmpolyeeID = current->EmpolyeeID;
                rval.Section = current->Section;
                rval.Subject = current->Subject;
                return rval;
            }
            current = current->next;
        }

        return rval;
    }
    TInformation TargetBySujectAndClass(std::string  section_,std::string class_ )
    {
        TInformation rval;

        std::shared_ptr<TNode> current = head;
        while (current != nullptr)
        {
            if (current->Section== section_ &&  current->Class == class_)
            {
                rval.Class = current->Class;
                rval.Name = current->Name;
                rval.EmpolyeeID = current->EmpolyeeID;
                rval.Section = current->Section;
                rval.Subject = current->Subject;
                return rval;
            }
            current = current->next;
        }

        return rval;
    }

    std::vector<TInformation> PullDetails()
    {
        std::shared_ptr<TNode> current = head;
        std::vector<TInformation> rval;
        while (current)
        {
            TInformation temp;
            temp.Name = current->Name;
            temp.Class = current->Class;
            temp.Section = current->Section;
            temp.EmpolyeeID = current->EmpolyeeID;
            temp.Subject = current->Subject;
            rval.push_back(temp);
            current = current->next;
        }

        return rval;
    }
};

#endif