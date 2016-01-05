#ifndef color_yiq_uint8
#define color_yiq_uint8

#include "../_internal/utility/bound/332.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/cnent332.hpp"
#include "../_internal/utility/container/cner332.hpp"

#include "../generic/trait/bound.hpp"
#include "../generic/trait/index.hpp"
#include "../generic/trait/component.hpp"
#include "../generic/trait/container.hpp"

#include "./category.hpp"



namespace color
 {
  namespace trait
   {
       
    template< >
     struct bound< ::color::category::yiq_uint8 >
      : public ::color::_internal::utility::bound::bound332< unsigned >
      {
      };

    template< >
     struct index< ::color::category::yiq_uint8 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::yiq_uint8 >
      : public ::color::_internal::utility::component::cnent332< unsigned >
      {
      };

    template< >
     struct container< ::color::category::yiq_uint8 >
      : public  ::color::_internal::utility::container::cner332<  unsigned  >
      {
      };

   }
 }

#endif