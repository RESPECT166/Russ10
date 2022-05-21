#include "abstruct.h"

int main()
{
    Student gleb("Russian", "Andrey", "Alexeyevich", 19, true);
    Boss karpov("Kasatkin", "Gennadiy", "Vasilevich", 72, 28);
    gleb.print();
    cout << endl;
    karpov.print();
}