#include <iostream>
#include "model/Cinema.h"
#include "Bilhete.h"
#include "controllers/Controller.h"

using namespace std;

int main()
{
  Cinema cinema("Cineclube ISEP");

  //MockData mock;
  //mock.generateData(cinema);

  Controller controller (cinema);
  controller.run();

  cout << "\nO programa terminou. Volte sempre!" << endl;
  return 0;
}
