#include <iostream>
using namespace std;

int main() {
  char customer_type;
  float BPF, BSF, PCF, BCF, total_fee; // Bill processing fee, Basic service fee, Premium channels fee
  int PC_count, b_acc_count;
  long long customer_number;

  cout << "Welcome to payment calculation process!\n";

  cout << "Input your account number: ";
  cin >> customer_number;
  while (customer_number <= 0) {
    cout << "Invalid number. Please input your account number again: ";
    cin >> customer_number;
  }
  
  cout << "Input the letter \"R\" or \"r\" for Private Customer or the letter \"B\" or \"b\" for Business Customer: ";
  cin >> customer_type;
  while (customer_type != 'R' && customer_type != 'r' && customer_type != 'B' && customer_type != 'b') {
    cout << "Invalid type. Please input the letter \"R\" or \"r\" for Private Customer or the letter \"B\" or \"b\" for Business Customer again: ";
    cin >> customer_type;
  }

  cout << "Input the amount of Premium channels you are subscribed to: ";
  cin >> PC_count;
  while (PC_count < 0) {
    cout << "Invalid amount. Please input the amount of Premium channels you are subscribed to again: ";
    cin >> PC_count;
  }

  if (customer_type == 'B' || customer_type == 'b') {
    cout << "Input the number of basic connection your business account currently utilizes: ";
    cin >> b_acc_count;
    while (b_acc_count <= 0) {
        cout << "Invalid amount. Please input the number of basic connection your business account currently utilizes again: ";
        cin >> b_acc_count;
    }
    BPF = 15.0, BSF = 75.0, PCF = 50.0, BCF = 5.0;
    if (b_acc_count <= 10)
      total_fee = BPF + BSF + (PC_count * PCF);
    else 
      total_fee = BPF + BSF + (BCF * (b_acc_count-10)) + (PC_count * PCF);
  } else {
    BPF = 4.5, BSF = 20.5, PCF = 7.5;
      total_fee = BPF + BSF + (PC_count * PCF);
  }
  
  cout << "The total cost of the service for number " << customer_number << " is: Є" << total_fee << ".\n";
  return 0;
}