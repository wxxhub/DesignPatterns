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

    cout << "reset data:" << endl;
    cout << text->getData() << endl;

    manager->undo();
    cout << "ubdo data:" << endl;
    cout << text->getData() << endl;

    manager->undo();
    cout << "ubdo data:" << endl;
    cout << text->getData() << endl;

    manager->undo();
    cout << "ubdo data:" << endl;
    cout << text->getData() << endl;

    manager->undo();
    cout << "ubdo data:" << endl;
    cout << text->getData() << endl;
    return 0;
}