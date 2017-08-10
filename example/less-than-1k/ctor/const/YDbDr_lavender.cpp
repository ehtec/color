#include <iostream>
#include <iomanip>

#include "color/color.hpp"

using namespace std;
using namespace color;

int main( int argc, char *argv[] )
 {
  YDbDr<std::uint8_t>   c1( constant::lavender_type{} );
  YDbDr<std::uint16_t>  c2( constant::lavender_type{} );
  YDbDr<std::uint32_t>  c3( constant::lavender_type{} );
  YDbDr<std::uint64_t>  c4( constant::lavender_type{} );
  YDbDr<float>          c5( constant::lavender_type{} );
  YDbDr<double>         c6( constant::lavender_type{} );
  YDbDr<long double>    c7( constant::lavender_type{} );

  cout << c1[0] << ", " << c1[1] << ", " << c1[2] << endl;
  cout << c2[0] << ", " << c2[1] << ", " << c2[2] << endl;
  cout << c3[0] << ", " << c3[1] << ", " << c3[2] << endl;
  cout << c4[0] << ", " << c4[1] << ", " << c4[2] << endl;
  cout << c5[0] << ", " << c5[1] << ", " << c5[2] << endl;
  cout << c6[0] << ", " << c6[1] << ", " << c6[2] << endl;
  cout << c7[0] << ", " << c7[1] << ", " << c7[2] << endl;

  return EXIT_SUCCESS;
 }
