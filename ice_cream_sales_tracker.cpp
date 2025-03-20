#include <iostream>
#include <limits>
#include <sstream>
void getData();
int main()
{

  // int index = 0;
  // int value;
  getData();
  return 0;
}

void getData()
{
  int totalscoops[5];
  std::string icecreamflavours[] = {"Vanilla", "Butter Pecan", "Superman",
                                    "Chocolate Fudge", "Strawberry"};
  int icecreamscoops[5]={0};
//initilize to 0
  std::cout << "Please enter the amount of each flavour sold this month\n";
  std::cout << "\n" << icecreamflavours[0] << ": ";
  std::cin >> icecreamscoops[0];
  totalscoops[0] = icecreamscoops[0];
  std::cout << "\n" << icecreamflavours[1] << ": ";
  std::cin >> icecreamscoops[1];
  totalscoops[1] = icecreamscoops[1];
  std::cout << "\n" << icecreamflavours[2] << ": ";
  std::cin >> icecreamscoops[2];
  totalscoops[2] = icecreamscoops[2];
  std::cout << "\n" << icecreamflavours[3] << ": ";
  std::cin >> icecreamscoops[3];
  totalscoops[3] = icecreamscoops[3];
  std::cout << "\n" << icecreamflavours[4] << ": ";
  std::cin >> icecreamscoops[4];
  totalscoops[4] = icecreamscoops[4];

  while (std::cin.fail())
    {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout<<"\nError. Only enter NUMBERS greater than or equal to 0\n";
      std::cout << "Please enter the amount of each flavour sold this month\n";
      std::cout << "\n" << icecreamflavours[0] << ": ";
      std::cin >> icecreamscoops[0];
      totalscoops[0] = icecreamscoops[0];
      std::cout << "\n" << icecreamflavours[1] << ": ";
      std::cin >> icecreamscoops[1];
      totalscoops[1] = icecreamscoops[1];
      std::cout << "\n" << icecreamflavours[2] << ": ";
      std::cin >> icecreamscoops[2];
      totalscoops[2] = icecreamscoops[2];
      std::cout << "\n" << icecreamflavours[3] << ": ";
      std::cin >> icecreamscoops[3];
      totalscoops[3] = icecreamscoops[3];
      std::cout << "\n" << icecreamflavours[4] << ": ";
      std::cin >> icecreamscoops[4];
      totalscoops[4] = icecreamscoops[4];
    }

  while (icecreamscoops[0] < 0 || icecreamscoops[1] < 0 ||
         icecreamscoops[2] < 0 || icecreamscoops[3] < 0 ||
         icecreamscoops[4] < 0) {
    std::cout << "\nERROR Please enter a positive number for each flavour sold "
                 "this month\n";
    std::cout << "Please enter the amount of each flavour sold this month\n";
    std::cout << "\n" << icecreamflavours[0] << ": ";
    std::cin >> icecreamscoops[0];
    std::cout << "\n" << icecreamflavours[1] << ": ";
    std::cin >> icecreamscoops[1];
    std::cout << "\n" << icecreamflavours[2] << ": ";
    std::cin >> icecreamscoops[2];
    std::cout << "\n" << icecreamflavours[3] << ": ";
    std::cin >> icecreamscoops[3];
    std::cout << "\n" << icecreamflavours[4] << ": ";
    std::cin >> icecreamscoops[4];
  }



std::string minstring="";
std::string maxstring="";

  int max = icecreamscoops[0];
  int min = icecreamscoops[0];

  for (int i = 0; i < 5; i++)
      {
          if (totalscoops[i] < min)
          {
              min = totalscoops[i];
              minstring = icecreamflavours[i];
          }
          else if (totalscoops[i] == min)
          {
              minstring += (" " + icecreamflavours[i]);
          }

          if (totalscoops[i] > max)
          {
              max = totalscoops[i];
              maxstring = icecreamflavours[i];
          }
          else if (totalscoops[i] == max)
          {
              maxstring += (" " + icecreamflavours[i]);
          }
      }

      std::cout << "\nWorst selling: " << minstring << std::endl;
      std::cout << "Best selling: " << maxstring<< std::endl;

      int totalScoops = totalscoops[0] + totalscoops[1] + totalscoops[2] + totalscoops[3] + totalscoops[4];
      std::cout << "Total scoops sold: " << totalScoops << std::endl;
  }

