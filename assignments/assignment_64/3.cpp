#include<iostream>
#include<unordered_map>
using namespace std;

void ADD(unordered_map<int,int>& product, int id, int quantity){

    product[id] = quantity;
}

void LL(unordered_map<int,int>& product, int id, int quantity){

    if(product.find(id) != product.end()){

        product[id] -= quantity;

        cout << "Product " << id
             << " available quantity : "
             << product[id] << endl;
    }
    else{

        cout << "Product " << id
             << " does not exist" << endl;
    }
}

void STOCK(unordered_map<int,int>& product, int id, int quantity){

    if(product.find(id) != product.end()){

        product[id] += quantity;
    }
    else{

        cout << "Product " << id
             << " does not exist" << endl;
    }
}

void SEARCH(unordered_map<int,int>& product, int id){

    if(product.find(id) != product.end()){

        cout << "Product " << id << " exists" << endl;
        cout << "Available quantity : "
             << product[id] << endl;
    }
    else{

        cout << "Product " << id
             << " does not exist" << endl;
    }
}

int main(){

    unordered_map<int,int> product;

    ADD(product, 101, 50);
    ADD(product, 102, 30);

    LL(product, 101, 5);

    STOCK(product, 102, 20);

    SEARCH(product, 101);

    return 0;
}