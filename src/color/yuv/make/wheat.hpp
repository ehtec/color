#ifndef color_yuv_make_wheat
#define color_yuv_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.878333, -0.0867928, 0.0723357 } ) - rgb(245,222,179) - #f5deb3

      inline
      void wheat( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xdf, 0x66, 0x8e } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe0d9, 0x6684, 0x8f0d } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe0da740c, 0x668500aa, 0x8f0e246a } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xe0da740da740e000ull, 0x668500ab247f3400ull, 0x8f0e246b4430d000ull } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.878333, -0.0867928, 0.0723357 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.878333, -0.0867928, 0.0723357 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.878333, -0.0867928, 0.0723357 } );
       }

    }
  }

#endif
