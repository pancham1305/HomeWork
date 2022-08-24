#include <iostream>
#define li long int
using namespace std;

class op{
    private:
    int n;
    int *arr;
    public:
    op(){
        cout << "Enter the size of array" << endl;
        cin >> n;
        arr = new int[n];
        cout << "Enter the elements of array" << endl;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
    }
    void max_and_min(){
        int maxi = arr[0];
        int mini = arr[0];
        for (int i = 0; i < 5; i++){
            
        if(arr[i] > maxi){
            maxi = arr[i];
        }
        if(arr[i] < mini){
            mini = arr[i];
        }
        
    }
    cout << maxi << endl;
    cout << mini << endl;
    }
    int sum(){
        int summ = 0;
        for(int i = 0;i < n; i++){
            summ+=arr[i];
        }
        return summ;
    }
};

int main(){
    op a;
    a.max_and_min();
    int summm = a.sum();
    cout << "The sum is " << summm << endl;

    

    return 0;
}