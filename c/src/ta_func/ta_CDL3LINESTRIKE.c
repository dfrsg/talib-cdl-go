/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  AC       Angelo Ciceri
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  121104 AC   Creation           
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::Cdl3LineStrikeLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdl3LineStrikeLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDL3LINESTRIKE_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return settingNear.avgPeriod + 3;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDL3LINESTRIKE - Three-Line Strike 
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Cdl3LineStrike( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                SubArray<double>^ inOpen,
/* Generated */                                                SubArray<double>^ inHigh,
/* Generated */                                                SubArray<double>^ inLow,
/* Generated */                                                SubArray<double>^ inClose,
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Cdl3LineStrike( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                cli::array<double>^ inOpen,
/* Generated */                                                cli::array<double>^ inHigh,
/* Generated */                                                cli::array<double>^ inLow,
/* Generated */                                                cli::array<double>^ inClose,
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3LineStrike( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                double       inOpen[],
/* Generated */                                double       inHigh[],
/* Generated */                                double       inLow[],
/* Generated */                                double       inClose[],
/* Generated */                                MInteger     outBegIdx,
/* Generated */                                MInteger     outNBElement,
/* Generated */                                int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDL3LINESTRIKE( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                                     const double inOpen[],
/* Generated */                                                     const double inHigh[],
/* Generated */                                                     const double inLow[],
/* Generated */                                                     const double inClose[],
/* Generated */                                                     int          *outBegIdx,
/* Generated */                                                     int          *outNBElement,
/* Generated */                                                     int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    ARRAY_LOCAL(nearPeriodTotal,4);
    int i, outIdx, totIdx, nearTrailingIdx, lookbackTotal;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the math.Minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDL3LINESTRIKE)();

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   nearPeriodTotal[3] = 0;
   nearPeriodTotal[2] = 0;
   nearTrailingIdx = startIdx - settingNear.avgPeriod;
   
   i = nearTrailingIdx;
   while( i < startIdx ) {
        nearPeriodTotal[3] += es.rangeOf(settingNear, i-3 );
        nearPeriodTotal[2] += es.rangeOf(settingNear, i-2 );
        i++;
   }
   i = startIdx;

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - three white soldiers (three black crows): three white (black) candlesticks with consecutively higher (lower) closes,
    * each opening within or near the previous real body
    * - fourth candle: black (white) candle that opens above (below) prior candle's close and closes below (above) 
    * the first candle's open
    * The meaning of "near" is specified with TA_SetCandleSettings;
    * outInteger is positive (1 to 100) when bullish or negative (-1 to -100) when bearish;
    * the user should consider that 3-line strike is significant when it appears in a trend in the same direction of
    * the first three candles, while this function does not consider it
    */
   outIdx = 0;
   do
   {
#ifdef TA_LIB_PRO
      /* Section for code distributed with TA-Lib Pro only. */
#else
        if( es.candleColor(i-3) == es.candleColor(i-2) &&                                   // three with same color
            es.candleColor(i-2) == es.candleColor(i-1) &&
            es.candleColor(i) == -es.candleColor(i-1) &&                                    // 4th opposite color
                                                                                            // 2nd opens within/near 1st rb
            es.Open(i-2) >= math.Min( es.Open(i-3), es.Close(i-3) ) - es.average(settingNear, nearPeriodTotal[3], i-3 ) &&
            es.Open(i-2) <= math.Max( es.Open(i-3), es.Close(i-3) ) + es.average(settingNear, nearPeriodTotal[3], i-3 ) &&
                                                                                            // 3rd opens within/near 2nd rb
            es.Open(i-1) >= math.Min( es.Open(i-2), es.Close(i-2) ) - es.average(settingNear, nearPeriodTotal[2], i-2 ) &&
            es.Open(i-1) <= math.Max( es.Open(i-2), es.Close(i-2) ) + es.average(settingNear, nearPeriodTotal[2], i-2 ) &&
            (
                (   // if three white
                    es.candleColor(i-1) == 1 &&
                    es.Close(i-1) > es.Close(i-2) && es.Close(i-2) > es.Close(i-3) &&           // consecutive higher closes
                    es.Open(i) > es.Close(i-1) &&                                             // 4th opens above prior close
                    es.Close(i) < es.Open(i-3)                                                // 4th closes below 1st open
                ) ||
                (   // if three black
                    es.candleColor(i-1) == -1 &&
                    es.Close(i-1) < es.Close(i-2) && es.Close(i-2) < es.Close(i-3) &&           // consecutive lower closes
                    es.Open(i) < es.Close(i-1) &&                                             // 4th opens below prior close
                    es.Close(i) > es.Open(i-3)                                                // 4th closes above 1st open
                )
            )
          )
            outInteger[outIdx++] = es.candleColor(i-1) * 100;
        else
            outInteger[outIdx++] = 0;
#endif
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        for (totIdx = 3; totIdx >= 2; --totIdx)
            nearPeriodTotal[totIdx] += es.rangeOf(settingNear, i-totIdx ) 
                                     - es.rangeOf(settingNear, nearTrailingIdx-totIdx );
        i++; 
        nearTrailingIdx++;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Cdl3LineStrike( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                SubArray<float>^ inOpen,
/* Generated */                                                SubArray<float>^ inHigh,
/* Generated */                                                SubArray<float>^ inLow,
/* Generated */                                                SubArray<float>^ inClose,
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Cdl3LineStrike( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                cli::array<float>^ inOpen,
/* Generated */                                                cli::array<float>^ inHigh,
/* Generated */                                                cli::array<float>^ inLow,
/* Generated */                                                cli::array<float>^ inClose,
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3LineStrike( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                float        inOpen[],
/* Generated */                                float        inHigh[],
/* Generated */                                float        inLow[],
/* Generated */                                float        inClose[],
/* Generated */                                MInteger     outBegIdx,
/* Generated */                                MInteger     outNBElement,
/* Generated */                                int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDL3LINESTRIKE( int    startIdx,
/* Generated */                                 int    endIdx,
/* Generated */                                 const float  inOpen[],
/* Generated */                                 const float  inHigh[],
/* Generated */                                 const float  inLow[],
/* Generated */                                 const float  inClose[],
/* Generated */                                 int          *outBegIdx,
/* Generated */                                 int          *outNBElement,
/* Generated */                                 int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     ARRAY_LOCAL(nearPeriodTotal,4);
/* Generated */     int i, outIdx, totIdx, nearTrailingIdx, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDL3LINESTRIKE)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    nearPeriodTotal[3] = 0;
/* Generated */    nearPeriodTotal[2] = 0;
/* Generated */    nearTrailingIdx = startIdx - settingNear.avgPeriod;
/* Generated */    i = nearTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         nearPeriodTotal[3] += es.rangeOf(settingNear, i-3 );
/* Generated */         nearPeriodTotal[2] += es.rangeOf(settingNear, i-2 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */ #ifdef TA_LIB_PRO
/* Generated */ #else
/* Generated */         if( es.candleColor(i-3) == es.candleColor(i-2) &&                                   // three with same color
/* Generated */             es.candleColor(i-2) == es.candleColor(i-1) &&
/* Generated */             es.candleColor(i) == -es.candleColor(i-1) &&                                    // 4th opposite color
/* Generated */                                                                                             // 2nd opens within/near 1st rb
/* Generated */             es.Open(i-2) >= math.Min( es.Open(i-3), es.Close(i-3) ) - es.average(settingNear, nearPeriodTotal[3], i-3 ) &&
/* Generated */             es.Open(i-2) <= math.Max( es.Open(i-3), es.Close(i-3) ) + es.average(settingNear, nearPeriodTotal[3], i-3 ) &&
/* Generated */                                                                                             // 3rd opens within/near 2nd rb
/* Generated */             es.Open(i-1) >= math.Min( es.Open(i-2), es.Close(i-2) ) - es.average(settingNear, nearPeriodTotal[2], i-2 ) &&
/* Generated */             es.Open(i-1) <= math.Max( es.Open(i-2), es.Close(i-2) ) + es.average(settingNear, nearPeriodTotal[2], i-2 ) &&
/* Generated */             (
/* Generated */                 (   // if three white
/* Generated */                     es.candleColor(i-1) == 1 &&
/* Generated */                     es.Close(i-1) > es.Close(i-2) && es.Close(i-2) > es.Close(i-3) &&           // consecutive higher closes
/* Generated */                     es.Open(i) > es.Close(i-1) &&                                             // 4th opens above prior close
/* Generated */                     es.Close(i) < es.Open(i-3)                                                // 4th closes below 1st open
/* Generated */                 ) ||
/* Generated */                 (   // if three black
/* Generated */                     es.candleColor(i-1) == -1 &&
/* Generated */                     es.Close(i-1) < es.Close(i-2) && es.Close(i-2) < es.Close(i-3) &&           // consecutive lower closes
/* Generated */                     es.Open(i) < es.Close(i-1) &&                                             // 4th opens below prior close
/* Generated */                     es.Close(i) > es.Open(i-3)                                                // 4th closes above 1st open
/* Generated */                 )
/* Generated */             )
/* Generated */           )
/* Generated */             outInteger[outIdx++] = es.candleColor(i-1) * 100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */ #endif
/* Generated */         for (totIdx = 3; totIdx >= 2; --totIdx)
/* Generated */             nearPeriodTotal[totIdx] += es.rangeOf(settingNear, i-totIdx ) 
/* Generated */                                      - es.rangeOf(settingNear, nearTrailingIdx-totIdx );
/* Generated */         i++; 
/* Generated */         nearTrailingIdx++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
