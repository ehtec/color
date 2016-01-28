#ifndef color_cmyk_make_lavender
#define color_cmyk_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.08, 0.08, 0 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x14, 0x14, 0x00, 0x05 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x147a, 0x147a, 0x0000, 0x0505 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x147ae147, 0x147ae147, 0x00000000, 0x05050505 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x147ae147ae147700ull, 0x147ae147ae147700ull, 0x0000000000000000ull, 0x0505050505050800ull } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0.08, 0.08, 0, 0.0196078 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0.08, 0.08, 0, 0.0196078 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0.08, 0.08, 0, 0.0196078 } );
       }

    }
  }

#endif
