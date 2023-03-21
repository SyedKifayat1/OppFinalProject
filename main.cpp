
#include <iostream>
#include "Detail.h"
#include"Menu.h"

#include <bits/stdc++.h>
#include "Electricity.h"
#include "water.h"
#include "Security.h"
#include "Maintaineance.h"

using namespace std;

int main()
{
    Menus check;
    check.Menu();

    Security s;
    s.calculate_employee_salary();
    cout << endl;
    s.display_employee_salary();
    return 0;
}