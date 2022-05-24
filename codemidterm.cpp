#include <iostream>
#include<string>
 
using namespace std;
#define N 5 

class Employee {
private:
    int id; //data member  
    string name; //data member
    float salary;
public:
    void setId(int it){
    	id = it;
	}
    int getId(){
    	return id;
	}
	void setName(string s){
    	name = s;
	}
    string getName(){
    	return name;
	}
	void setSalary(float sal){
    	salary = sal;
	}
    float getSalary(){
    	return salary;
	}
    void display() {
        cout << id <<"    " << name <<"    " << salary << endl;
    }
    
};
class Array_employee{
	public:
		Employee employee[];
		void input_employee(Employee employee[], int n){
			for(int i=0; i<n;i++){
				int x;
	    		string y;
				float z;
				cout <<"Enter id:     "; cin >> x;
				cout <<"Enter name:   "; cin >> y;
				cout<< "Enter salary: "; cin >> z;
				employee[i].setId(x);
				employee[i].getId();
				employee[i].setName(y);
				employee[i].getName();
				employee[i].setSalary(z);
				employee[i].getSalary();
			}	
		}	
		
	void output_employee(Employee employee[], int n){
		cout <<"Output is: "<<endl;
		for(int i=0; i<n;i++){
			employee[i].display();
    	}
	}
	
    void sort_employee_salary(Employee employee[], int n){
    int i;
	Employee temp;
	for(i=0; i<n; ++i){
		if(employee[i].getSalary() > employee[i+1].getSalary()){		
			temp=employee[i];
			employee[i+1]=employee[i];
			employee[i]=temp;	
			cout<<employee[i].getSalary(); 
		}
		}
    //sort in salary
    }	
 	//Student code this function here
    void sort_employee_name(Employee employee[], int n){
  	int i;
	Employee temp;
	for(i=0; i<n; ++i){
		if(employee[i].getName() > employee[i+1].getName()){		
			temp=employee[i];
			employee[i+1]=employee[i];
			employee[i]=temp;	
			cout<<employee[i].getName(); 
		}
		}
	}

    	
 	//Student code this function here
 
	
}; 
int main() 
{
	Employee employee[N];
	Array_employee arrayem;
		//input an array of employees
	arrayem.input_employee(employee, N);
	/*THINK AND DESIGN OUTPUT?????  */
	//SWITCH CASE..???
	arrayem.sort_employee_salary(employee, N)	;
    //callfunction here
    //ouput employee		
	arrayem.output_employee(employee, N);
	
	arrayem.sort_employee_name(employee, N)	;
    //callfunction here
    //ouput employee		
	arrayem.output_employee(employee, N);

return 0;
}
