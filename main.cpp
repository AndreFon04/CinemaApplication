#include <iostream>
#include <string>
#include "model/Cinema.h"
#include "Bilhete.h"

using namespace std;

int main()
{
  Cinema cinema("Cineclube ISEP");

  Controller controller (& cinema);
  controller.run();

  cout << "O programa terminou. Volte sempre!" << endl;
  return 0;
}
