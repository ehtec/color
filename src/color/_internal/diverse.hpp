#ifndef color__internal_diverse
#define color__internal_diverse

// ::color::_internal::diverse< >(   )
// ::color::_internal::diverse< >(   )

#include "../generic/trait/component.hpp"
#include "../generic/trait/index.hpp"
#include "../generic/trait/bound.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name, typename scalar_name = double >
     struct diverse
      {
       public:
         typedef scalar_name scalar_type;
         typedef ::color::trait::bound< category_name >      bound_trait_type;
         typedef ::color::trait::component< category_name >  component_trait_type;
         typedef ::color::trait::index< category_name >      index_trait_type;
 
         typedef typename component_trait_type::instance_type    component_instance_type;
         typedef typename component_trait_type::return_type      component_return_type;

         typedef typename index_trait_type::instance_type       index_instance_type;
         typedef typename index_trait_type::input_const_type    index_input_const_type;

         static
         component_return_type
         process( scalar_type const& normal, index_input_const_type index )
          {
           scalar_type divergent = normal;

           divergent *= bound_trait_type::range( index );
           divergent += bound_trait_type::minimum( index );
           return component_instance_type( divergent );
          }

         template< index_instance_type index_size >
          static 
          component_return_type
          process( scalar_type const& normal )
           {
            scalar_type divergent = normal;
            divergent *= bound_trait_type::template range<index_size>();
            divergent += bound_trait_type::template minimum<index_size>();

            return  component_instance_type( divergent );
           }
      };

   }
 }
 
#endif
