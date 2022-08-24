#include <bits/stdc++.h>
using namespace std;
class arra
{
private:
    int n;
    int *arr;
public:

    arra()
    {
        cout << "Enter the size of array: \n";
        cin >> n;
        arr = new int[n];
        cout << "Enter the elements of array: \n";
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
        }
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << arr[i] << " ";
        }
    }
    void sum()
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            sum += arr[i];
        }
        cout << sum << endl;
    }
    void max()
    {
        int maxi = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxi)
            {
                maxi = arr[i];
            }
        }
        cout << maxi << endl;
    }
    void sort()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    void reverse()
    {
        int i = 0;
        while (i <= n/2)
        {
            int temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = temp;
            i++;
        }
    }
};
int main()
{
    arra a;
    a.display();

    cout << "Sum of array: \n";
    a.sum();
    cout << "Max of array: \n";
    a.max();
    cout << "The sorted array is:\n";
    a.sort();
    a.display();
    cout << "The reversed array is: \n";
    a.reverse();
    a.display();
    return 0;
}