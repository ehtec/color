#ifndef color_cmy_trait_container_uint8
#define color_cmy_trait_container_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::cmy_uint8 >
      : public ::color::_internal::utility::container::array< std::uint8_t, 3 >
      {
      };

   }
 }

#endif
