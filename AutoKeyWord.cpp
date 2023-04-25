/*
 * @Author: kkke
 * @Date: 2023-04-25 22:34:02
 * @LastEditors: kkke
 * @LastEditTime: 2023-04-25 22:53:38
 * @Description: auto关键字会自动推断变量类型,使用auto能够轻松的避免类型的错误以及复杂的类型声明
 *               使用auto注意地址的问题，auto会自动推断变量的类型，不写取址符号可能会导致单纯复制而
 *               不是需要的地址
 */

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string  GetName()
{
    return "kkke";
}
class Device{ };
class DeviceManager
{
    private:
    unordered_map<string, vector<Device*>> m_Devices;
    public:
    const unordered_map<string, vector<Device*>>& GetDevices() const
    {
        return m_Devices;
    }
};

int main()
{ 
    vector<string> strings;
    strings.push_back("one");
    strings.push_back("two");
    for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
    {
        cout << *it << endl;
    }
    using DeviceMap = unordered_map<string, vector<Device*>>;
    DeviceManager dm;
    const auto& devices = dm.GetDevices();



    cin.get(); 
}