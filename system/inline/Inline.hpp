/**
 *  @file  Inline.hpp
 *  @brief INLINE定義を表します。
 *
 *  @author 月下美人
 */
#pragma once


// マクロ定義

/*! inline展開 */
#define INLINE __inline

/*! inline強制展開 */
#ifdef  _MSC_VER
    #define FORCEINLINE  __forceinline
#else if __GNUC__
    #define FORCEINLINE  __attribute__((always_inline)))
#endif  // _MCS_VER
