#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int i, input, maxElement, maxElementIndex, elementy;
vector<int> a;

int main() {
    cout<<"Podaj liczbę elementów wektora: ";
    cin>>elementy;
    for(i = 0; i < elementy; i++)
    {
        cout<<"Wpisz liczbe nr "<<i+1<<" : ";
        cin>>input;
        a.push_back(input);
    }
    maxElement = *max_element(a.begin(), a.end()); 
    maxElementIndex = max_element(a.begin(),a.end()) - a.begin();
    cout << "Maksymalny element wektora = "
    <<maxElement<<"\nIndex = "<<maxElementIndex;
    return 0;
}