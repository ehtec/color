#ifndef color_rgb_ldouble
#define color_rgb_ldouble

#include "../_internal/utility/bound/general.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"

#include "../generic/trait/bound.hpp"
#include "../generic/trait/index.hpp"
#include "../generic/trait/component.hpp"
#include "../generic/trait/container.hpp" 





namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::rgb_ldouble >
      : public ::color::_internal::utility::bound::general< long double, unsigned >
      {
      };
      
    template< >
     struct index< ::color::category::rgb_ldouble >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::rgb_ldouble >
      : public ::color::_internal::utility::component::array< long double, unsigned>
      {
      };

    template< >
     struct container< ::color::category::rgb_ldouble >
      : public  ::color::_internal::utility::container::array< long double, 3 >
      {
      };

   }
 }

#endif