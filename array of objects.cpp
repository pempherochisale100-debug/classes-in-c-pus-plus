# include <iostream>
# include<string>

using namespace std;

	class Student 
		{
			private:
				string name;
				int age;
				
				public :
					
					void insert(){
						
						cout<<" Enter Name: ";
						getline(cin,name);
						
						cout<<"Enter Age: ";
						cin>>age;
						cin.ignore();
					}
					
					void display(){
						
					
						
						cout<<"Name :"<<name<<endl;
						cout<<"Age: "<<age<<endl;
					}
		};
		
		
		int main (){
			
			Student student[3];
			
			for(int i=0;i<3;i++){
					cout<<"\nStudent details"<<i+1<<endl;
						cout<<"===================="<<endl;
				student[i].insert();
			}
			
			for(int i=0;i<3;i++){
					cout<<"\nStudent details"<<i+1<<endl;
						cout<<"===================="<<endl;
				student[i].display();
			}
			return 0;
		}