#ifndef color_cmy_get_gray
#define color_cmy_get_gray

// ::color::get::gray( c )

#include "../../generic/trait/scalar.hpp"
#include "../../_internal/diverse.hpp"

 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace cmy
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            typename ::color::_internal::model< category_name >::component_const_type
            gray( ::color::_internal::model< category_name > const& color_parameter  )
             {
              typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;
              typedef ::color::_internal::model< category_name > model_type;
              typedef ::color::_internal::trait< category_name > trait_type;
              typedef typename trait_type::component_type     component_type;

              scalar_type value = 
                   (1-0.2126) * ( color_parameter.template get<0>() - trait_type::template minimum<0>() ) / trait_type::template range<0>()
                 + (1-0.7152) * ( color_parameter.template get<1>() - trait_type::template minimum<1>() ) / trait_type::template range<1>()
                 + (1-0.0722) * ( color_parameter.template get<2>() - trait_type::template minimum<2>() ) / trait_type::template range<2>();
              
              return component_type( value * trait_type::template range<0>() + trait_type::template minimum<0>() );
              //return ::color::_internal::diverse< category_name, 0, scalar_type >( value );
             }

          }
        }
      }

      inline
      ::color::_internal::model< color::category::cmy_uint8 >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::cmy_uint16 >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmy_uint32 >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmy_uint64 >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmy_float >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_float > const& color_parameter )
       {
        return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmy_double >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_double > const& color_parameter )
       {
        return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmy_ldouble >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_ldouble>( color_parameter );
       };


    }
  }

#endif 