#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class animal{
private:
 string name;
 int age;
public:
 void setname(string name){
 	this->name=name;
 	 }
 void setage(int age){
 	this->age=age;
 }
 string getname(){
 	return this->name;
 }
 int getage(){
 	return this->age;
 }
};
int main(){
animal dog;
dog.setname("Tommy");
dog.setage(2);
cout<<dog.getname()<<" "<<dog.getage()<<endl;
			return 0;
}
