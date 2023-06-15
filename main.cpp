#include <iostream>
#include "Cinema.h"
//#include "Bilhete.h"
#include "Controller.h"
#include "MockData.h"

using namespace std;

int main()
{
  Cinema cinema("Cineclube ISEP");

  MockData mock;
  mock.generateData(cinema);

  Controller controller (cinema);
  controller.run();

  cout << "\nO programa terminou. Volte sempre!" << endl;
  return 0;
}
