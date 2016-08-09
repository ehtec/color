#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>

#include "color/color.hpp"


template < typename category_name >
 std::string print_sizeof_one( )
  {
   std::stringstream ss;

  if( false == ::color::trait::info< category_name >::meaningful_enum )
   {
    ss << "<s>";
   }

   if( false == ::color::trait::info< category_name >::implemented_enum )
    {
     ss << "\"";
    }

   ss << sizeof( ::color::model<category_name> );

   if( false == ::color::trait::info< category_name >::implemented_enum )
    {
    ss << "\"";
    }

  if( false == ::color::trait::info< category_name >::meaningful_enum )
   {
    ss << "</s>";
   }

  return ss.str();
 }

template < template<typename> class color_name >
std::string print_sizeof( std::string const& name )
 {

  typedef color_name< bool                  > b_type;
  typedef color_name< std::uint8_t          > u8_type;
  typedef color_name< std::uint16_t         > u16_type;
  typedef color_name< color::type::uint24_t > u24_type;
  typedef color_name< std::uint32_t         > u32_type;
  typedef color_name< color::type::uint48_t > u48_type;
  typedef color_name< std::uint64_t         > u64_type;

  typedef color_name< float                 > f_type;
  typedef color_name< double                > d_type;
  typedef color_name< long double           > dl_type;

  typedef color_name< color::type::split233_t >  split233_type;
  typedef color_name< color::type::split332_t >  split332_type;

  typedef color_name< color::type::split233_t > split233_type;
  typedef color_name< color::type::split323_t > split323_type;
  typedef color_name< color::type::split332_t > split332_type;

  typedef color_name< color::type::split422_t > split422_type;
  typedef color_name< color::type::split242_t > split242_type;
  typedef color_name< color::type::split224_t > split224_type;

  typedef color_name< color::type::split555_t > split555_type;

  typedef color_name< color::type::split655_t > split655_type;
  typedef color_name< color::type::split565_t > split565_type;
  typedef color_name< color::type::split556_t > split556_type;

  typedef color_name< color::type::split888_t > split888_type;

  typedef color_name< color::type::splitCAA_t > splitCAA_type;
  typedef color_name< color::type::splitACA_t > splitACA_type;
  typedef color_name< color::type::splitAAC_t > splitAAC_type;

  typedef color_name< color::type::split2222_t >  split2222_type;

  typedef color_name< color::type::split4444_t >  split4444_type;

  typedef color_name< color::type::split5551_t >  split5551_type;
  typedef color_name< color::type::split1555_t >  split1555_type;

  typedef color_name< color::type::split6666_t >  split6666_type;

  typedef color_name< color::type::split8888_t >  split8888_type;

  typedef color_name< color::type::split2AAA_t >  split2AAA_type;
  typedef color_name< color::type::splitAAA2_t >  splitAAA2_type;

  typedef color_name< color::type::splitGGGG_t >  splitGGGG_type;

  std::stringstream ss;

  ss << "<tr>";

  ss << "<td>"       << name  << "</td>" ;

  ss << "<td>" << print_sizeof_one<typename b_type::category_type>()  << "</td>";

  ss << "<td>" << print_sizeof_one<typename  u8_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  u16_type ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  u24_type ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  u32_type ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  u48_type ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  u64_type ::category_type>() << "</td>";

  ss << "<td>" << print_sizeof_one<typename  f_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  d_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  dl_type  ::category_type>() << "</td>";

  ss << "<td>" << print_sizeof_one<typename  split233_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split332_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split422_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split556_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split565_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split655_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split2222_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split4444_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split8888_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  splitAAA2_type  ::category_type>() << "</td>";

  ss << "</tr>";

  return ss.str();
 }


std::string print_system_sizeof( )
 {
  std::stringstream ss;
  ss << "<table border=\"1\" cellspacing=\"0\" cellpadding=\"2\" >" << std::endl;

  ss << "<tr><td> Type </td> <td> Size</td> </tr> ";

  ss << "<tr><td> char          </td> <td> "<< sizeof( char          )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> wchar_t       </td> <td> "<< sizeof( wchar_t       )<< "</td> </tr> " << std::endl;

  ss << "<tr><td> std::uint8_t  </td> <td> "<< sizeof( std::uint8_t  )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> std::uint16_t </td> <td> "<< sizeof( std::uint16_t )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> std::uint32_t </td> <td> "<< sizeof( std::uint32_t )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> std::uint64_t </td> <td> "<< sizeof( std::uint64_t )<< "</td> </tr> " << std::endl;

  ss << "<tr><td> void*         </td> <td> "<< sizeof( void*         )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> unsigned      </td> <td> "<< sizeof( unsigned      )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> short         </td> <td> "<< sizeof( short         )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> int           </td> <td> "<< sizeof( int           )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> long          </td> <td> "<< sizeof( long          )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> long long     </td> <td> "<< sizeof( long long     )<< "</td> </tr> " << std::endl;

  ss << "<tr><td> float         </td> <td> "<< sizeof( float         )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> double        </td> <td> "<< sizeof( double        )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> long double   </td> <td> "<< sizeof( long double   )<< "</td> </tr> " << std::endl;

  ss << "</table>";
  return ss.str();;
 }

void check_sizeof()
 {
  std::stringstream ss;

  ss << "<table border=\"1\" cellspacing=\"0\" cellpadding=\"2\" >" << std::endl;

  ss << "<tr>";
  ss << "<td>"       << "model"<< "</td>" ;

  ss << "<td>"       << "<code>bool</code>            (" << sizeof( bool          ) << " )</td>" ;

  ss << "<td>"       << "<code>uint8_t</code>         (" << sizeof( std::uint8_t   ) << " )</td>" ;
  ss << "<td>"       << "<code>uint16_t</code>        (" << sizeof( std::uint16_t  ) << " )</td>" ;
  ss << "<td>"       << "<code>uint24_t</code>        (" << sizeof( ::color::type::uint24_t  ) << " )</td>" ;
  ss << "<td>"       << "<code>uint32_t</code>        (" << sizeof( std::uint32_t  ) << " )</td>" ;
  ss << "<td>"       << "<code>uint48_t               (" << sizeof( ::color::type::uint48_t  ) << " )</td>" ;
  ss << "<td>"       << "<code>uint64_t</code>        (" << sizeof( std::uint64_t  ) << " )</td>" ;

  ss << "<td>"       << "<code>float      </code>     (" << sizeof( float        ) << " )</td>" ;
  ss << "<td>"       << "<code>double     </code>     (" << sizeof( double       ) << " )</td>" ;
  ss << "<td>"       << "<code>long double</code>     (" << sizeof( long double  ) << " )</td>" ;

  ss << "<td>"       << "<code>split233</code>        </td>" ;
  ss << "<td>"       << "<code>split332</code>        </td>" ;
  ss << "<td>"       << "<code>split422</code>        </td>" ;
  ss << "<td>"       << "<code>split556</code>        </td>" ;
  ss << "<td>"       << "<code>split565</code>        </td>" ;
  ss << "<td>"       << "<code>split655</code>        </td>" ;

  ss << "<td>"       << "<code>split2222</code>       </td>" ;
  ss << "<td>"       << "<code>split4444</code>       </td>" ;
  ss << "<td>"       << "<code>split8888</code>       </td>" ;

  ss << "<td>"       << "<code>splitAAA2</code>       </td>" ;
  ss << "</tr>" << std::endl;

  ss << print_sizeof<::color::rgb  > ( "<code>rgb </code>" );  ss << std::endl;
  ss << print_sizeof<::color::rgba > ( "<code>rgba</code>" );  ss << std::endl;
  ss << print_sizeof<::color::cmy  > ( "<code>cmy </code>" );  ss << std::endl;
  ss << print_sizeof<::color::cmyk > ( "<code>cmyk</code>" );  ss << std::endl;
  ss << print_sizeof<::color::gray > ( "<code>gray</code>" );  ss << std::endl;
  ss << print_sizeof<::color::hsl  > ( "<code>hsl </code>" );  ss << std::endl;
  ss << print_sizeof<::color::hsv  > ( "<code>hsv </code>" );  ss << std::endl;
  ss << print_sizeof<::color::yiq  > ( "<code>yiq </code>" );  ss << std::endl;
//  ss << print_sizeof<::color::yuv  > ( "<code>yuv </code>" );  ss << std::endl;

  ss << print_sizeof<::color::YCbCr  > ( "<code>YCbCr </code>" );  ss << std::endl;
  ss << print_sizeof<::color::YCgCo  > ( "<code>YCgCo </code>" );  ss << std::endl;
  ss << print_sizeof<::color::YDbDr  > ( "<code>YDbDr </code>" );  ss << std::endl;
  ss << print_sizeof<::color::YPbPr  > ( "<code>YPbPr </code>" );  ss << std::endl;

  ss << "</table>";

  ss << "<br />";

  ss << print_system_sizeof();

   {
    std::ofstream ofs( std::string( "./mc.html" ).c_str() );
    ofs <<  ss.str();
   }

 }
