#include <iostream>
#include <vector>
using namespace std;
int convertBinary(int num)
{
    int ans = 0;
    int pow = 1;
    while (num > 0)
    {
        int last = num % 2;
        ans = ans + (last * pow);
        num /= 2;
        pow *= 10;
    };
    return ans;
};

int sumOfNumber(int num)
{
    int ans = 0;
    while (num > 0)
    {
        int last = num % 10;
        ans += last;
        num /= 10;
    };
    return ans;
};
int majorityElement(int arr[], int size)
{
    int ans = 0;
    int count = 0;
    int lc = 0;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        };
        if (lc < count)
        {
            lc = count;
            ans = arr[i];
        }
    };
    return ans;
}
int sumOfNums(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    };
    for(int i = 0; i<size; i++){
        sum += arr[i];
    };
    return sum;
}
int productOfArr(int arr[], int size){
    int product = 1;
    for(int i = 0; i<size; i++){
        product*=arr[i];
    };
    return product;
}
void swapMin(int arr[], int size){
    int min = 99999999;
    int max = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] < min){
            min = i;
        }
    };
    for(int i = 0; i<size; i++){
        if(arr[i] > max){
            max = i;
        }
    };
    swap(arr[min],arr[max]);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<max<<" max"<<endl;
    cout<<min<<" min"<<endl;
}

int main()
{
    cout << convertBinary(10) << endl;
    cout << sumOfNumber(1089908) << endl;
    cout << (4 & 8) << endl;
    cout << (4 | 8) << endl;
    cout << (4 << 4) << endl;
    cout << (4 >> 4) << endl;
    int size = 10;
    int arr[size] = {8, 2, 3, 4, 5, 6, 7, 8, 9, 6, 20};
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[size - (i + 1)];
        cout << temp << "temp" << endl;
        arr[size - i] = arr[i];
        cout << arr[size - i] << "last element" << endl;
        arr[i] = temp;
        cout << arr[i] << "first index" << endl;
    };
    // cout<<arr<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    };
    vector<int> num;
    num.push_back(59);
    num.push_back(69);
    num.push_back(79);
    num.push_back(79);
    num.push_back(79);
    num.push_back(79);
    for (int val : num)
    {
        cout << val << " ";
    }

    num.pop_back();
    cout << endl;
    for (int val : num)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << num.front() << endl;
    cout << num.back() << endl;
    cout << num.at(4) << endl;
    cout << num[4] << endl;
    int arr3[] = {1, 2, 3, 5, 6, 7, 8, 9, 0, 5, 5, 5, 5, 3};
    int size3 = 14;
    cout << majorityElement(arr3, size3) << " major" << endl;
    swapMin(arr,size);
    return 0;
}