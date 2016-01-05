#ifndef color_generic_make_white
#define color_generic_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void white( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::trait::bound< category_name > bound_type;
		
        typedef typename model_type::index_type index_type;

        for( index_type index=0; index < model_type::size() ; ++index )
         {
          color_parameter.set(index, bound_type::maximum( index ) );
         }
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      white( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::white( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif
