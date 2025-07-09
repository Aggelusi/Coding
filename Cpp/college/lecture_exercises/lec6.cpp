#include <iostream>
using namespace std;

class Product {
    private:
        int code, quantity;
        string descrption;
    public: 
        Product() {
            code = 0;
            descrption = "";
            quantity = 0;
        }
        Product(int c, string p, int q) {
            code = c;
            descrption = p;
            if (q >= 0) 
                quantity = q;
            else quantity = 0;
        }
        
        int getCode() {return code;}
        string getDescription() {return descrption;}
        int getQuantity() {return quantity;}
        void setCode(int c) {code = c;}
        void setDescription(string p) {descrption = p;}
        void setQuantity(int q) {
            if (q >= 0) 
                quantity = q;
            else quantity = 0;
        }
        void print() {
            cout << "Code = " << code << "\nDescription = " << descrption << "\nQuantity = " << quantity << endl;
        }
};

class Storage {
    private:
        Product *products;
        int size, filled_slots;
    public: 
        Storage(int s) {
            size = s;
            products = new Product[size];
            filled_slots = 0;
        }
        ~Storage() {delete[] products;}
        Product* getProducts() {return products;}
        int getSize() {return size;}
        int getFilledSlots() {return filled_slots;}
        void receive_product(int code, int q) {
            for (int i = 0; i < filled_slots; i++) {
                if (products[i].getCode() == code)
                    products[i].setQuantity(products[i].getQuantity() + q);
            }
        }
        int sell_product() {
            
        }
};

int main() {


    return 0;
}