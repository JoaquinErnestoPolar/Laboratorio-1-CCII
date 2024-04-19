#include "TutorialConfig.h"//incluimos nuestro encabezado 
#include <cmath>
//removemos la libreria "cstdlib"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
  if (argc < 2) {
    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  const double inputValue = std::stod(argv[1]);//cambiamos atof por std::stod

  const double outputValue = sqrt(inputValue);
  std::cout << "La raiz cuadrada de" << inputValue << " es " << outputValue
            << std::endl;
  
  return 0;
}
