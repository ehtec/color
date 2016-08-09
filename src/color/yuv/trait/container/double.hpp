#ifndef color_yuv_trait_container_double
#define color_yuv_trait_container_double

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct container< ::color::category::yuv_double<reference_number> >
      : public  ::color::_internal::utility::container::array< double, 3 >
      {
      };

   }
 }

#endif