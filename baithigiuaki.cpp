#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define N 5

class Gradebook
{
private:
    int id;               
    string name, instruc; 
    float diem1, diem2, diem3, gpa;

public:
    void setName(string s)
    {
        name = s;
    }
    string getName()
    {
        return name;
    }
    void setIns(string s)
    {
        instruc = s;
    }
    string getIns()
    {
        return instruc;
    }
    void setDiem1(float d)
    {
        diem1 = d;
    }
    float getDiem1()
    {
        return diem1;
    }
    void setDiem2(float d)
    {
        diem2 = d;
    }
    float getDiem2()
    {
        return diem2;
    }
    void setDiem3(float d)
    {
        diem3 = d;
    }
    float getDiem3()
    {
        return diem3;
    }
    float getAve()
    {
        return gpa;
    }
    void setGpa()
    {
        gpa = (diem1+diem2+diem3)/3;
    }
    void display()
    {
        cout<<fixed<<setprecision(1);
        cout << name << "                 " << diem1 << "         " << diem2 << "         " << diem3 << "         " << gpa << endl;
    }
};
class Array_Gadebook
{
public:
    Gradebook student[N];
    void input_student(Gradebook student[], int n)
    {
        string s;
        cout << "Enter instructor's name:   ";
        getline(cin, s);
        for (int i = 0; i < n; i++)
        {
            string t;
            float x, y, z;
            cout << "Enter name:   ";
            cin >> t;
            cout << "Enter toan: ";
            cin >> x;
            cout << "Enter ly: ";
            cin >> y;
            cout << "Enter hoa: ";
            cin >> z;
            student[i].setIns(s);
            student[i].setName(t);
            student[i].setDiem1(x);
            student[i].setDiem2(y);
            student[i].setDiem3(z);
            student[i].setGpa();
        }
    }
    void output_student(Gradebook student[], int n)
    {
        cout << "Instructor's Name: " << student[1].getIns() << endl;
        cout << "Student's Name"
             << "    "
             << "subject1"
             << "    "
             << "subject2"
             << "    "
             << "subject3"
             << "    "
             << "average" << endl;
        for (int i = 0; i < n; i++)
        {
            student[i].display();
        }
    }
    void swap(Gradebook &a, Gradebook &b)
    {
        string name1;
        float diem;
        name1 = a.getName();
        a.setName(b.getName());
        b.setName(name1);
        diem = a.getDiem1();
        a.setDiem1(b.getDiem1());
        b.setDiem1(diem);
        diem = a.getDiem2();
        a.setDiem2(b.getDiem2());
        b.setDiem2(diem);
        diem = a.getDiem3();
        a.setDiem3(b.getDiem3());
        b.setDiem3(diem);
        a.setGpa();
        b.setGpa();
    }
    void sort_stu_ave(Gradebook stu[], int n)
    {
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
            {
float a = stu[i].getAve(), b = stu[j].getAve();
                if (a < b)
                    swap(stu[i], stu[j]);
            }
    }
    void sort_stu_name(Gradebook stu[], int n)
    {
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
            {
                string a = stu[i].getName(), b = stu[j].getName();
                if (a > b)
                    swap(stu[i], stu[j]);
            }
    }
    void sort_stu_ave1(Gradebook stu[], int n)
    {
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
            {
                float a = stu[i].getAve(), b = stu[j].getAve();
                if (a > b)
                    swap(stu[i], stu[j]);
            }
    }
    void sort_stu_name1(Gradebook stu[], int n)
    {
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
            {
                string a = stu[i].getName(), b = stu[j].getName();
                if (a < b)
                    swap(stu[i], stu[j]);
            }
    }
};
int main()
{
    Gradebook student[N];
    Array_Gadebook arraystu;

    arraystu.input_student(student, N);
    arraystu.output_student(student, N);

    // 1 output; 2 sort ave giam dan ; 3 sort ave tang dan; 
    // 4 sort name a-z; 5 sort name z-a; 6 ket thuc;
    int t;
    cout << "Enter your case: ";
    while (cin >> t)
    {
        switch (t)
        {
        case 1:
            arraystu.output_student(student, N);
            break;
        case 2:
            arraystu.sort_stu_ave(student, N);
            break;
        case 3:
            arraystu.sort_stu_ave1(student, N);
            break;
        case 4:
            arraystu.sort_stu_name(student, N);
            break;
        case 5:
            arraystu.sort_stu_name1(student, N);
            break;
        case 6:
            return 0;
            break;
        default:
            cout << " re_enter your case\n";
            break;
        }
    }
