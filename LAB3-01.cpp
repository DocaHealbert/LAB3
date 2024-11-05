#include<iostream>
using namespace std;

int main(){
	
	const float NormalPayRate = 10.00;
	int NormalHours = 20;
	float OvertimePayRate = 5;
	int OvertimeHours = 8;
	float TotalPay = 0;
	
	TotalPay = (NormalPayRate * NormalHours)+(OvertimePayRate * OvertimeHours);
	
	cout << "TotalPay : RM" <<TotalPay<<endl;
	
	system("pause");
	
}
