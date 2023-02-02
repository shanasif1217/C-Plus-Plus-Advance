#include<iostream>
#include<string>
using namespace std;
template <typename T>
T MyMax(T val1, T val2){
	cout << "Maximum between " << val1 << "and " << val2 << "is" << endl;
	return val1 > val2 ? val1 : val2;
}
int main(){
	

	cout << MyMax<int>(20, 30) << endl;
	cout << MyMax<float>(10.9, 10.8) << endl;
	cout << MyMax<string>("Shan", "Asif");
	cout << endl;
	system("pause");
	return 0;
}