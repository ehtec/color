#ifndef color_yuv_make_orchid
#define color_yuv_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.609106, 0.113237, 0.215641 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x9b, 0xa0, 0xac } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x9bed, 0xa13d, 0xace0 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x9bee5cf3, 0xa13e6d3b, 0xace1a6da } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x9bee5cf481d1b000ull, 0xa13e6d3c1d7cd800ull, 0xace1a6db140c6000ull } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.609106, 0.113237, 0.215641 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.609106, 0.113237, 0.215641 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.609106, 0.113237, 0.215641 } );
       }

    }
  }

#endif
