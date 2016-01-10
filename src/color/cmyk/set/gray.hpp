#ifndef color_cmyk_set_gray
#define color_cmyk_set_gray

// ::color::set::gray( c, val )

#include "../../generic/trait/scalar.hpp"
#include "../../generic/operation/operation.hpp"

 namespace color
  {
   namespace set
    {
     namespace _internal
      {
       namespace cmyk
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            void
            gray
             ( 
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_input_const_type         component_parameter
             )
             {
              typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;      
              typedef ::color::_internal::model< category_name > model_type;
              typedef ::color::_internal::trait< category_name > trait_type;
              typedef typename trait_type::component_type component_type;

              scalar_type value = 
                   0.2126 * ( scalar_type(1) - ( color_parameter.template get<0>() - trait_type::template minimum<0>() ) / trait_type::template range<0>())
                 + 0.7152 * ( scalar_type(1) - ( color_parameter.template get<1>() - trait_type::template minimum<1>() ) / trait_type::template range<1>())
                 + 0.0722 * ( scalar_type(1) - ( color_parameter.template get<2>() - trait_type::template minimum<2>() ) / trait_type::template range<2>());

              value = scalar_type( component_parameter - trait_type::template minimum<0>() ) / trait_type::template range<0>()  / value;

              ::color::operation::scale( color_parameter, value );
             }

          }
        }
      }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmyk_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint8 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmyk_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint16 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmyk_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint32 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmyk_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint64 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmyk_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_float >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_float>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmyk_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_double >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_double>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmyk_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_ldouble >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif 