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
/* Generated */ int Core::Cdl3InsideLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdl3InsideLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDL3INSIDE_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return math.Max( settingBodyShort.avgPeriod, settingBodyLong.avgPeriod ) + 2;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDL3INSIDE - Three Inside Up/Down
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Cdl3Inside( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */                                            SubArray<double>^ inOpen,
/* Generated */                                            SubArray<double>^ inHigh,
/* Generated */                                            SubArray<double>^ inLow,
/* Generated */                                            SubArray<double>^ inClose,
/* Generated */                                            [Out]int%    outBegIdx,
/* Generated */                                            [Out]int%    outNBElement,
/* Generated */                                            SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Cdl3Inside( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */                                            cli::array<double>^ inOpen,
/* Generated */                                            cli::array<double>^ inHigh,
/* Generated */                                            cli::array<double>^ inLow,
/* Generated */                                            cli::array<double>^ inClose,
/* Generated */                                            [Out]int%    outBegIdx,
/* Generated */                                            [Out]int%    outNBElement,
/* Generated */                                            cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3Inside( int    startIdx,
/* Generated */                            int    endIdx,
/* Generated */                            double       inOpen[],
/* Generated */                            double       inHigh[],
/* Generated */                            double       inLow[],
/* Generated */                            double       inClose[],
/* Generated */                            MInteger     outBegIdx,
/* Generated */                            MInteger     outNBElement,
/* Generated */                            int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDL3INSIDE( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                                 const double inOpen[],
/* Generated */                                                 const double inHigh[],
/* Generated */                                                 const double inLow[],
/* Generated */                                                 const double inClose[],
/* Generated */                                                 int          *outBegIdx,
/* Generated */                                                 int          *outNBElement,
/* Generated */                                                 int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    double bodyShortPeriodTotal, bodyLongPeriodTotal;
    int i, outIdx, bodyShortTrailingIdx, bodyLongTrailingIdx, lookbackTotal;

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

   lookbackTotal = LOOKBACK_CALL(CDL3INSIDE)();

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
   bodyShortPeriodTotal = 0;
   bodyLongTrailingIdx = startIdx -2 - settingBodyLong.avgPeriod;
   bodyShortTrailingIdx = startIdx -1 - settingBodyShort.avgPeriod;
   
   i = bodyLongTrailingIdx;
   while( i < startIdx-2 ) {
        bodyLongPeriodTotal += es.rangeOf(settingBodyLong, i );
        i++;
   }
   i = bodyShortTrailingIdx;
   while( i < startIdx-1 ) {
        bodyShortPeriodTotal += es.rangeOf(settingBodyShort, i );
        i++;
   }
   i = startIdx;

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - first candle: long white (black) real body
    * - second candle: short real body totally engulfed by the first
    * - third candle: black (white) candle that closes lower (higher) than the first candle's open
    * The meaning of "short" and "long" is specified with TA_SetCandleSettings
    * outInteger is positive (1 to 100) for the three inside up or negative (-1 to -100) for the three inside down; 
    * the user should consider that a three inside up is significant when it appears in a downtrend and a three inside
    * down is significant when it appears in an uptrend, while this function does not consider the trend
    */
   outIdx = 0;
   do
   {
#ifdef TA_LIB_PRO
      /* Section for code distributed with TA-Lib Pro only. */
#else
        if( es.realBody(i-2) > es.average(settingBodyLong, bodyLongPeriodTotal, i-2 ) &&         // 1st: long
            es.realBody(i-1) <= es.average(settingBodyShort, bodyShortPeriodTotal, i-1 ) &&      // 2nd: short
            math.Max( es.Close(i-1), es.Open(i-1) ) < math.Max( es.Close(i-2), es.Open(i-2) ) &&                  //      engulfed by 1st
            math.Min( es.Close(i-1), es.Open(i-1) ) > math.Min( es.Close(i-2), es.Open(i-2) ) &&
            ( ( es.candleColor(i-2) == 1 && es.candleColor(i) == -1 && es.Close(i) < es.Open(i-2) )   // 3rd: opposite to 1st
              ||                                                                                    //      and closing out
              ( es.candleColor(i-2) == -1 && es.candleColor(i) == 1 && es.Close(i) > es.Open(i-2) )
            )
          )
#endif
            outInteger[outIdx++] = -es.candleColor(i-2) * 100;
        else
            outInteger[outIdx++] = 0;
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        bodyLongPeriodTotal += es.rangeOf(settingBodyLong, i-2 ) - es.rangeOf(settingBodyLong, bodyLongTrailingIdx );
        bodyShortPeriodTotal += es.rangeOf(settingBodyShort, i-1 ) - es.rangeOf(settingBodyShort, bodyShortTrailingIdx );
        i++; 
        bodyLongTrailingIdx++;
        bodyShortTrailingIdx++;
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
/* Generated */ enum class Core::RetCode Core::Cdl3Inside( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */                                            SubArray<float>^ inOpen,
/* Generated */                                            SubArray<float>^ inHigh,
/* Generated */                                            SubArray<float>^ inLow,
/* Generated */                                            SubArray<float>^ inClose,
/* Generated */                                            [Out]int%    outBegIdx,
/* Generated */                                            [Out]int%    outNBElement,
/* Generated */                                            SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Cdl3Inside( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */                                            cli::array<float>^ inOpen,
/* Generated */                                            cli::array<float>^ inHigh,
/* Generated */                                            cli::array<float>^ inLow,
/* Generated */                                            cli::array<float>^ inClose,
/* Generated */                                            [Out]int%    outBegIdx,
/* Generated */                                            [Out]int%    outNBElement,
/* Generated */                                            cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3Inside( int    startIdx,
/* Generated */                            int    endIdx,
/* Generated */                            float        inOpen[],
/* Generated */                            float        inHigh[],
/* Generated */                            float        inLow[],
/* Generated */                            float        inClose[],
/* Generated */                            MInteger     outBegIdx,
/* Generated */                            MInteger     outNBElement,
/* Generated */                            int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDL3INSIDE( int    startIdx,
/* Generated */                             int    endIdx,
/* Generated */                             const float  inOpen[],
/* Generated */                             const float  inHigh[],
/* Generated */                             const float  inLow[],
/* Generated */                             const float  inClose[],
/* Generated */                             int          *outBegIdx,
/* Generated */                             int          *outNBElement,
/* Generated */                             int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     double bodyShortPeriodTotal, bodyLongPeriodTotal;
/* Generated */     int i, outIdx, bodyShortTrailingIdx, bodyLongTrailingIdx, lookbackTotal;
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
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDL3INSIDE)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    bodyLongPeriodTotal = 0;
/* Generated */    bodyShortPeriodTotal = 0;
/* Generated */    bodyLongTrailingIdx = startIdx -2 - settingBodyLong.avgPeriod;
/* Generated */    bodyShortTrailingIdx = startIdx -1 - settingBodyShort.avgPeriod;
/* Generated */    i = bodyLongTrailingIdx;
/* Generated */    while( i < startIdx-2 ) {
/* Generated */         bodyLongPeriodTotal += es.rangeOf(settingBodyLong, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = bodyShortTrailingIdx;
/* Generated */    while( i < startIdx-1 ) {
/* Generated */         bodyShortPeriodTotal += es.rangeOf(settingBodyShort, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */ #ifdef TA_LIB_PRO
/* Generated */ #else
/* Generated */         if( es.realBody(i-2) > es.average(settingBodyLong, bodyLongPeriodTotal, i-2 ) &&         // 1st: long
/* Generated */             es.realBody(i-1) <= es.average(settingBodyShort, bodyShortPeriodTotal, i-1 ) &&      // 2nd: short
/* Generated */             math.Max( es.Close(i-1), es.Open(i-1) ) < math.Max( es.Close(i-2), es.Open(i-2) ) &&                  //      engulfed by 1st
/* Generated */             math.Min( es.Close(i-1), es.Open(i-1) ) > math.Min( es.Close(i-2), es.Open(i-2) ) &&
/* Generated */             ( ( es.candleColor(i-2) == 1 && es.candleColor(i) == -1 && es.Close(i) < es.Open(i-2) )   // 3rd: opposite to 1st
/* Generated */               ||                                                                                    //      and closing out
/* Generated */               ( es.candleColor(i-2) == -1 && es.candleColor(i) == 1 && es.Close(i) > es.Open(i-2) )
/* Generated */             )
/* Generated */           )
/* Generated */ #endif
/* Generated */             outInteger[outIdx++] = -es.candleColor(i-2) * 100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */         bodyLongPeriodTotal += es.rangeOf(settingBodyLong, i-2 ) - es.rangeOf(settingBodyLong, bodyLongTrailingIdx );
/* Generated */         bodyShortPeriodTotal += es.rangeOf(settingBodyShort, i-1 ) - es.rangeOf(settingBodyShort, bodyShortTrailingIdx );
/* Generated */         i++; 
/* Generated */         bodyLongTrailingIdx++;
/* Generated */         bodyShortTrailingIdx++;
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
