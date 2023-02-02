#include<iostream>
using namespace std;
class Monitor{
private:
	char *name;
	int size;
	float price;
public:
	void setname(char*n){
		int length = 0;
		for (int i = 0; n[i] != '\0'; i++){
			length++;
		}
		name = new char[length + 1];
		for (int i = 0; i < length; i++){
			name[i] = n[i];
		}
		name[length] = '\0';
	}
	char* getname(){
		return name;
	}
	void setsize(int s){
		size = s;
	}
	int getsize(){
		return size;
	}
	void setprice(float p){
		price = p;
	}
	float getprice(){
		return price;
	}
	void show_monitor(){
		cout << "Here are the details of Monitor" << endl;
		cout << "Name " << name << endl;
		cout << "Size" << size << endl;
		cout << "Price" << price << endl;
	}
};
class CPU{
private:
	char* cpuname;
	int speed;
	float cpuprice;
public:
	void setcpuname(char*n){
		int length = 0;
		for (int i = 0; n[i] != '\0'; i++){
			length++;
		}
		cpuname = new char[length + 1];
		for (int i = 0; i < length; i++){
			cpuname[i] = n[i];
		}
		cpuname[length] = '\0';
	}
	char* getcpuname(){
		return cpuname;
	}
	void setspeed(int s){
		speed = s;
	}
	int getspeed(){
		return speed;
	}
	void setcpuprice(float p){
		cpuprice = p;
	}
	float getprice(){
		return cpuprice;
	}
	void show_cpu(){
		cout << "Here are the details of CPU" << endl;
		cout << "Name " << cpuname << endl;
		cout << "Speed" << speed << endl;
		cout << "Price" << cpuprice << endl;
	}
};
class Keyboard{
private:
	char* keyboardname;
	int noofkeys;
	float keyboardprice;
public:
	void setkeyboardname(char*n){
		int length = 0;
		for (int i = 0; n[i] != '\0'; i++){
			length++;
		}
	 keyboardname = new char[length + 1];
		for (int i = 0; i < length; i++){
			keyboardname[i] = n[i];
		}
		keyboardname[length] = '\0';
	}
	char* getkeyboardname(){
		return keyboardname;
	}
	void setnoofkeys(int s){
		noofkeys = s;
	}
	int getnoofkeys(){
		return noofkeys;
	}
	void setkeyboardprice(float p){
		keyboardprice = p;
	}
	float getkeyboardprice(){
		return keyboardprice;
	}
	void show_keyboard(){
		cout << "Here are the details of Keyboard" << endl;
		cout << "Name " << keyboardname << endl;
		cout << "No of Keys" << noofkeys << endl;
		cout << "Price" << keyboardprice << endl;
	}
};
class Computer_System{
public:
	Monitor m2;
	CPU c2;
	Keyboard k2;
	void show_system(){
		m2.show_monitor();
		c2.show_cpu();
		k2.show_keyboard();
	}
};
int main(){
	
	Computer_System s1;

	s1.m2.setname("HP");
	s1.m2.getname();
	s1.m2.setsize(15);
	s1.m2.getsize();
	s1.m2.setprice(15000.0);
	s1.m2.getprice();

	s1.c2.setcpuname("HP");
	s1.c2.getcpuname();
	s1.c2.setspeed(10000);
	s1.c2.getspeed();
	s1.c2.setcpuprice(20000.0);
	s1.c2.getcpuname();

	s1.k2.setkeyboardname("HP");
	s1.k2.getkeyboardname();
	s1.k2.setnoofkeys(101);
	s1.k2.getnoofkeys();
	s1.k2.setkeyboardprice(5000);
	s1.k2.getkeyboardprice();

	cout << "Your system details are below" << endl;
	s1.show_system();
	cout << endl;
	system("pause");
	return 0;
}