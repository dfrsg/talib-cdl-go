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
 *  100204 AC   Creation           
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
/* Generated */ int Core::CdlDojiStarLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlDojiStarLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLDOJISTAR_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return math.Max( settingBodyDoji.avgPeriod, settingBodyLong.avgPeriod ) + 1;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDLDOJISTAR - Doji Star
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlDojiStar( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             SubArray<double>^ inOpen,
/* Generated */                                             SubArray<double>^ inHigh,
/* Generated */                                             SubArray<double>^ inLow,
/* Generated */                                             SubArray<double>^ inClose,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlDojiStar( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             cli::array<double>^ inOpen,
/* Generated */                                             cli::array<double>^ inHigh,
/* Generated */                                             cli::array<double>^ inLow,
/* Generated */                                             cli::array<double>^ inClose,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlDojiStar( int    startIdx,
/* Generated */                             int    endIdx,
/* Generated */                             double       inOpen[],
/* Generated */                             double       inHigh[],
/* Generated */                             double       inLow[],
/* Generated */                             double       inClose[],
/* Generated */                             MInteger     outBegIdx,
/* Generated */                             MInteger     outNBElement,
/* Generated */                             int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLDOJISTAR( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                                  const double inOpen[],
/* Generated */                                                  const double inHigh[],
/* Generated */                                                  const double inLow[],
/* Generated */                                                  const double inClose[],
/* Generated */                                                  int          *outBegIdx,
/* Generated */                                                  int          *outNBElement,
/* Generated */                                                  int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    double BodyDojiPeriodTotal, bodyLongPeriodTotal;
    int i, outIdx, BodyDojiTrailingIdx, bodyLongTrailingIdx, lookbackTotal;

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

   lookbackTotal = LOOKBACK_CALL(CDLDOJISTAR)();

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
   bodyLongPeriodTotal = 0;
   BodyDojiPeriodTotal = 0;
   bodyLongTrailingIdx = startIdx -1 - settingBodyLong.avgPeriod;
   BodyDojiTrailingIdx = startIdx - settingBodyDoji.avgPeriod;
   
   i = bodyLongTrailingIdx;
   while( i < startIdx-1 ) {
        bodyLongPeriodTotal += es.rangeOf( BodyLong, i );
        i++;
   }
   i = BodyDojiTrailingIdx;
   while( i < startIdx ) {
        BodyDojiPeriodTotal += es.rangeOf( BodyDoji, i );
        i++;
   }

#ifdef TA_LIB_PRO
      /* Section for code distributed with TA-Lib Pro only. */
#endif

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - first candle: long real body
    * - second candle: star (open gapping up in an uptrend or down in a downtrend) with a doji
    * The meaning of "doji" and "long" is specified with TA_SetCandleSettings
    * outInteger is positive (1 to 100) when bullish or negative (-1 to -100) when bearish; 
    * it's defined bullish when the long candle is white and the star gaps up, bearish when the long candle 
    * is black and the star gaps down; the user should consider that a doji star is bullish when it appears 
    * in an uptrend and it's bearish when it appears in a downtrend, so to determath.Mine the bullishness or 
    * bearishness of the pattern the trend must be analyzed
    */
   outIdx = 0;
   do
   {
#ifdef TA_LIB_PRO
      /* Section for code distributed with TA-Lib Pro only. */
#else
        if( es.realBody(i-1) > es.average( BodyLong, bodyLongPeriodTotal, i-1 ) &&     // 1st: long real body
            es.realBody(i) <= es.average( BodyDoji, BodyDojiPeriodTotal, i ) &&        // 2nd: doji
            ( ( es.candleColor(i-1) == 1 && es.realBodyGAPUP(i,i-1) )                        //        that gaps up if 1st is white
                ||
              ( es.candleColor(i-1) == -1 && es.realBodyGAPDOWN(i,i-1) )                        //      or down if 1st is black
            ) )
            outInteger[outIdx++] = -es.candleColor(i-1) * 100;
        else
            outInteger[outIdx++] = 0;
#endif
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        bodyLongPeriodTotal += es.rangeOf( BodyLong, i-1 ) - es.rangeOf( BodyLong, bodyLongTrailingIdx );
        BodyDojiPeriodTotal += es.rangeOf( BodyDoji, i ) - es.rangeOf( BodyDoji, BodyDojiTrailingIdx );
        i++; 
        bodyLongTrailingIdx++;
        BodyDojiTrailingIdx++;
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
/* Generated */ enum class Core::RetCode Core::CdlDojiStar( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             SubArray<float>^ inOpen,
/* Generated */                                             SubArray<float>^ inHigh,
/* Generated */                                             SubArray<float>^ inLow,
/* Generated */                                             SubArray<float>^ inClose,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlDojiStar( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             cli::array<float>^ inOpen,
/* Generated */                                             cli::array<float>^ inHigh,
/* Generated */                                             cli::array<float>^ inLow,
/* Generated */                                             cli::array<float>^ inClose,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlDojiStar( int    startIdx,
/* Generated */                             int    endIdx,
/* Generated */                             float        inOpen[],
/* Generated */                             float        inHigh[],
/* Generated */                             float        inLow[],
/* Generated */                             float        inClose[],
/* Generated */                             MInteger     outBegIdx,
/* Generated */                             MInteger     outNBElement,
/* Generated */                             int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDLDOJISTAR( int    startIdx,
/* Generated */                              int    endIdx,
/* Generated */                              const float  inOpen[],
/* Generated */                              const float  inHigh[],
/* Generated */                              const float  inLow[],
/* Generated */                              const float  inClose[],
/* Generated */                              int          *outBegIdx,
/* Generated */                              int          *outNBElement,
/* Generated */                              int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     double BodyDojiPeriodTotal, bodyLongPeriodTotal;
/* Generated */     int i, outIdx, BodyDojiTrailingIdx, bodyLongTrailingIdx, lookbackTotal;
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
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDLDOJISTAR)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    bodyLongPeriodTotal = 0;
/* Generated */    BodyDojiPeriodTotal = 0;
/* Generated */    bodyLongTrailingIdx = startIdx -1 - settingBodyLong.avgPeriod;
/* Generated */    BodyDojiTrailingIdx = startIdx - settingBodyDoji.avgPeriod;
/* Generated */    i = bodyLongTrailingIdx;
/* Generated */    while( i < startIdx-1 ) {
/* Generated */         bodyLongPeriodTotal += es.rangeOf( BodyLong, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = BodyDojiTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         BodyDojiPeriodTotal += es.rangeOf( BodyDoji, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */ #ifdef TA_LIB_PRO
/* Generated */ #endif
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */ #ifdef TA_LIB_PRO
/* Generated */ #else
/* Generated */         if( es.realBody(i-1) > es.average( BodyLong, bodyLongPeriodTotal, i-1 ) &&     // 1st: long real body
/* Generated */             es.realBody(i) <= es.average( BodyDoji, BodyDojiPeriodTotal, i ) &&        // 2nd: doji
/* Generated */             ( ( es.candleColor(i-1) == 1 && es.realBodyGAPUP(i,i-1) )                        //        that gaps up if 1st is white
/* Generated */                 ||
/* Generated */               ( es.candleColor(i-1) == -1 && es.realBodyGAPDOWN(i,i-1) )                        //      or down if 1st is black
/* Generated */             ) )
/* Generated */             outInteger[outIdx++] = -es.candleColor(i-1) * 100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */ #endif
/* Generated */         bodyLongPeriodTotal += es.rangeOf( BodyLong, i-1 ) - es.rangeOf( BodyLong, bodyLongTrailingIdx );
/* Generated */         BodyDojiPeriodTotal += es.rangeOf( BodyDoji, i ) - es.rangeOf( BodyDoji, BodyDojiTrailingIdx );
/* Generated */         i++; 
/* Generated */         bodyLongTrailingIdx++;
/* Generated */         BodyDojiTrailingIdx++;
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

