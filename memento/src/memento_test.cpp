#include <iostream>

#include "memento.hpp"
#include "text_manager.hpp"

using namespace std;
using namespace my_study;

int main()
{
    Text *text = new Text();
    TextManager *manager = new TextManager(text);

    text->addData("Hello World!\n");
    manager->save();

    text->addData("This is Second add!\n");
    manager->save();

    text->addData("This is Third add!\n");
    manager->save();

    cout << "finished add data:" << endl;
    cout << text->getData() << endl;

    text->setData("This reset data\n");
    manager->save();

    cout << "reset data:" << endl;
    cout << text->getData() << endl;

    text->addData("Hello World! I'm Kangkang\n");
    manager->save();
    
    cout << "add data:" << endl;
    cout << text->getData() << endl;

    for (int i = 0; i < 10; ++i)
    {
        manager->undo();
        cout << "ubdo data:" << endl;
        cout << text->getData() << endl;
    }
    return 0;
}