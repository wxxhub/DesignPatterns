#include <iostream>

#include "concrete_component.hpp"
#include "concrete_decorator.hpp"

using namespace std;
using namespace my_study;

int main()
{
    /********** 黑咖啡 **********/
    IBeverage *pHouseBlend = new HouseBlend();
    cout << pHouseBlend->Name() << " : " << pHouseBlend->Cost() << endl;

    // 黑咖啡 + 奶油
    CondimentDecorator *pCream = new Cream(pHouseBlend);
    cout << pCream->Name() << " : " << pCream->Cost() << endl;

    // 黑咖啡 + 摩卡
    CondimentDecorator *pMocha = new Mocha(pHouseBlend);
    cout << pMocha->Name() << " : " << pMocha->Cost() << endl;

    // 黑咖啡 + 糖浆
    CondimentDecorator *pSyrup = new Syrup(pHouseBlend);
    cout << pSyrup->Name() << " : " << pSyrup->Cost() << endl;

    /********** 深度烘培咖啡豆 **********/
    IBeverage *pDarkRoast = new DarkRoast();
    cout << pDarkRoast->Name() << " : " << pDarkRoast->Cost() << endl;

    // 深度烘培咖啡豆 + 奶油
    CondimentDecorator *pCreamDR = new Cream(pDarkRoast);
    cout << pCreamDR->Name() << " : " << pCreamDR->Cost() << endl;

    // 深度烘培咖啡豆 + 奶油 + 摩卡
    CondimentDecorator *pCreamMocha = new Mocha(pCreamDR);
    cout << pCreamMocha->Name() << " : " << pCreamMocha->Cost() << endl;

    // 深度烘培咖啡豆 + 奶油 + 摩卡 + 糖浆
    CondimentDecorator *pCreamMochaSyrup = new Syrup(pCreamMocha);
    cout << pCreamMochaSyrup->Name() << " : " << pCreamMochaSyrup->Cost() << endl;

    return 0;
}

// copy from https://blog.csdn.net/liang19890820/article/details/66973836 