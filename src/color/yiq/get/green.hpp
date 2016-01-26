#ifndef color_yiq_get_green
#define color_yiq_get_green

// ::color::get::green( c )

#include "../../rgb/akin/yiq.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb<::color::category::yiq<tag_name> >::akin_type >::return_type
      green( ::color::_internal::model< ::color::category::yiq<tag_name> > const& color_parameter )
       {
        typedef ::color::category::yiq<tag_name> category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;
        typedef typename ::color::akin::rgb<category_type>::akin_type          akin_type;

        typedef ::color::constant::yiq<category_type> yiq_const_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type> normalize_type;

        static scalar_type a21 = yiq_const_type::a21(), a22 = yiq_const_type::a22(), a23 = yiq_const_type::a23();

        scalar_type y = normalize_type::template process<0>( color_parameter.template get<0>() );
        scalar_type i = normalize_type::template process<1>( color_parameter.template get<1>() );
        scalar_type q = normalize_type::template process<2>( color_parameter.template get<2>() );

        i = ( scalar_type(2) * i - scalar_type(1) ) * yiq_const_type::i_max();
        q = ( scalar_type(2) * q - scalar_type(1) ) * yiq_const_type::q_max();

        scalar_type g = a21 * y + a22 * i + a23 * q;

        return diverse_type::template process<1>( g );
       }

    }
  }

#endif