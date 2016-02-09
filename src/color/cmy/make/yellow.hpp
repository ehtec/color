#ifndef color_cmy_make_yellow
#define color_cmy_make_yellow

// ::color::make::yellow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0 } ) - rgb(255,255,0) - #FFFF00

     template< typename tag_name >
      inline
      void yellow( ::color::_internal::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0, 0, 1 } ) );

        color_parameter = local;
       }

    }
  }

#endif
