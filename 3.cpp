#include <iostream>
using namespace std;

class op{
private:
    int a;
    int b;
public:
    op(int i, int j){
        a = i;
        b = j;
    }
    int add(){
        return a+b;
    }
    int sub(){
        return a-b;
    }
    int mul(){
        return a*b;
    }
    float div(){
        return a/b;
    }
};



int main(){
    int ans;
    float ans1;
    while(true){
        cout << "Input two First Num" << endl;
        int a, b;
        cin >> a >> b;
        op op1(a, b);
        int t;
        cout << "Input '1' for addition, '2' for subtraction, '3' for multiplication, '4' for division\n:";
        cin >> t;
        switch(t){
            case 1:
               ans =  op1.add();
               cout << ans << endl;
               break;
            case 2:
                ans = op1.sub();
                cout << ans << endl;
                break;
            case 3:
                ans = op1.mul();
                cout << ans << endl;
                break;
            case 4:
                ans1 = op1.div();
                cout << ans1 << endl;
                break;
            default:
                cout << "invalid input\n";
                break;
                
        }
    }

    return 0;
}
