#ifndef color_hsl_convert_rgb
#define color_hsl_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/trait/container.hpp"
#include "../../rgb/trait/component.hpp"
#include "../../rgb/trait/index.hpp"
#include "../../rgb/trait/bound.hpp"
#include "../../rgb/category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateHSL
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_rgb2hsl
        {
         public:
           typedef category_left_name  category_left_type;
           typedef category_right_name category_right_type;
           typedef scalar_name scalar_type;

           typedef ::color::trait::scalar<category_left_name> scalar_trait_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           typedef ::color::_internal::diverse< category_left_type >    diverse_type;
           typedef ::color::_internal::normalize< category_right_type > normalize_type;

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

             scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
             scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
             scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

             const scalar_type hi = std::max<scalar_type>( { r, g, b } );
             const scalar_type lo = std::min<scalar_type>( { r, g, b } );
             scalar_type delta = hi - lo;

             scalar_type h = 0;
             scalar_type s = 0;
             scalar_type l = (hi + lo) / scalar_type(2);

             if( false == scalar_trait_type::is_small( delta ) )
              {
               s = delta / ( 1 - fabs( 2*l - 1 ) );
               if( hi == r )
                {
                 h = (scalar_type(60)/scalar_type(360)) * (g - b) / delta + (g < b ? scalar_type(1) : scalar_type(0));
                }
               if( hi == g )
                {
                 h = (scalar_type(60)/scalar_type(360)) * (b - r) / delta + (scalar_type(120)/scalar_type(360));
                }
               if( hi == b )
                {
                 h = (scalar_type(60)/scalar_type(360)) * (r - g) / delta + (scalar_type(240)/scalar_type(360));
                }
              }

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( h ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( s ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( l ) );
            }
        };

     }

     template< typename hsl_tag_name, typename rgb_tag_name >
      struct convert
       <
         ::color::category::hsl< hsl_tag_name >
        ,::color::category::rgb< rgb_tag_name >
       >
      : public ::color::_internal::_privateHSL::convert_rgb2hsl
       <
         ::color::category::hsl< hsl_tag_name >
        ,::color::category::rgb< rgb_tag_name >
        >
      {
      };

   }
 }

#endif
