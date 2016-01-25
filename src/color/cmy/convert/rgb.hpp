#ifndef color_cmy_convert_rgb
#define color_cmy_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateCMY
     {

      template< typename category_left_name, typename category_right_name >
       struct convert_rgb2cmy
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             enum
              {
                red_p   = ::color::place::_internal::red<category_right_type>::position_enum
               ,green_p = ::color::place::_internal::green<category_right_type>::position_enum
               ,blue_p  = ::color::place::_internal::blue<category_right_type>::position_enum
              };

             typedef  ::color::_internal::reformat< category_left_type, category_right_type > reformat_type;
             typedef  ::color::operation::_internal::invert< category_right_type > invert_type;

             container_left_trait_type::template set<0>( left, reformat_type::template process<0,red_p  >( invert_type::template component<red_p  >( container_right_trait_type::template get<red_p  >( right ) ) ) );
             container_left_trait_type::template set<1>( left, reformat_type::template process<1,green_p>( invert_type::template component<green_p>( container_right_trait_type::template get<green_p>( right ) ) ) );
             container_left_trait_type::template set<2>( left, reformat_type::template process<2,blue_p >( invert_type::template component<blue_p >( container_right_trait_type::template get<blue_p >( right ) ) ) );
           }
        };

     }

     template< typename cmy_tag_name, typename rgb_tag_name >
      struct convert
       <
         ::color::category::cmy< cmy_tag_name >
        ,::color::category::rgb<rgb_tag_name>
       >
      : public ::color::_internal::_privateCMY::convert_rgb2cmy
       <
         ::color::category::cmy< cmy_tag_name >
        ,::color::category::rgb<rgb_tag_name>
        >
      {
      };

   }
 }

#endif
