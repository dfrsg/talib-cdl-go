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
 *  120404 AC   Creation           
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
/* Generated */ int Core::Cdl3WhiteSoldiersLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdl3WhiteSoldiersLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDL3WHITESOLDIERS_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return math.Max( math.Max( settingShadowVeryShort.avgPeriod, settingBodyShort.avgPeriod ),
                math.Max( settingFar.avgPeriod, settingNear.avgPeriod )
            ) + 2;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDL3WHITESOLDIERS - Three Advancing White Soldiers
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Cdl3WhiteSoldiers( int    startIdx,
/* Generated */                                                   int    endIdx,
/* Generated */                                                   SubArray<double>^ inOpen,
/* Generated */                                                   SubArray<double>^ inHigh,
/* Generated */                                                   SubArray<double>^ inLow,
/* Generated */                                                   SubArray<double>^ inClose,
/* Generated */                                                   [Out]int%    outBegIdx,
/* Generated */                                                   [Out]int%    outNBElement,
/* Generated */                                                   SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Cdl3WhiteSoldiers( int    startIdx,
/* Generated */                                                   int    endIdx,
/* Generated */                                                   cli::array<double>^ inOpen,
/* Generated */                                                   cli::array<double>^ inHigh,
/* Generated */                                                   cli::array<double>^ inLow,
/* Generated */                                                   cli::array<double>^ inClose,
/* Generated */                                                   [Out]int%    outBegIdx,
/* Generated */                                                   [Out]int%    outNBElement,
/* Generated */                                                   cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3WhiteSoldiers( int    startIdx,
/* Generated */                                   int    endIdx,
/* Generated */                                   double       inOpen[],
/* Generated */                                   double       inHigh[],
/* Generated */                                   double       inLow[],
/* Generated */                                   double       inClose[],
/* Generated */                                   MInteger     outBegIdx,
/* Generated */                                   MInteger     outNBElement,
/* Generated */                                   int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDL3WHITESOLDIERS( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                                        const double inOpen[],
/* Generated */                                                        const double inHigh[],
/* Generated */                                                        const double inLow[],
/* Generated */                                                        const double inClose[],
/* Generated */                                                        int          *outBegIdx,
/* Generated */                                                        int          *outNBElement,
/* Generated */                                                        int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    ARRAY_LOCAL(ShadowVeryShortPeriodTotal,3);
	ARRAY_LOCAL(nearPeriodTotal,3);
    ARRAY_LOCAL(FarPeriodTotal,3);
	double bodyShortPeriodTotal;
    int i, outIdx, totIdx, ShadowVeryShortTrailingIdx, nearTrailingIdx, FarTrailingIdx, bodyShortTrailingIdx, lookbackTotal;

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

   lookbackTotal = LOOKBACK_CALL(CDL3WHITESOLDIERS)();

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
   ShadowVeryShortPeriodTotal[2] = 0;
   ShadowVeryShortPeriodTotal[1] = 0;
   ShadowVeryShortPeriodTotal[0] = 0;
   ShadowVeryShortTrailingIdx = startIdx - settingShadowVeryShort.avgPeriod;
   nearPeriodTotal[2] = 0;
   nearPeriodTotal[1] = 0;
   nearPeriodTotal[0] = 0;
   nearTrailingIdx = startIdx - settingNear.avgPeriod;
   FarPeriodTotal[2] = 0;
   FarPeriodTotal[1] = 0;
   FarPeriodTotal[0] = 0;
   FarTrailingIdx = startIdx - settingFar.avgPeriod;
   bodyShortPeriodTotal = 0;
   bodyShortTrailingIdx = startIdx - settingBodyShort.avgPeriod;
   
   i = ShadowVeryShortTrailingIdx;
   while( i < startIdx ) {
        ShadowVeryShortPeriodTotal[2] += es.rangeOf( ShadowVeryShort, i-2 );
        ShadowVeryShortPeriodTotal[1] += es.rangeOf( ShadowVeryShort, i-1 );
        ShadowVeryShortPeriodTotal[0] += es.rangeOf( ShadowVeryShort, i );
        i++;
   }
   i = nearTrailingIdx;
   while( i < startIdx ) {
        nearPeriodTotal[2] += es.rangeOf( Near, i-2 );
        nearPeriodTotal[1] += es.rangeOf( Near, i-1 );
        i++;
   }
   i = FarTrailingIdx;
   while( i < startIdx ) {
        FarPeriodTotal[2] += es.rangeOf( Far, i-2 );
        FarPeriodTotal[1] += es.rangeOf( Far, i-1 );
        i++;
   }
   i = bodyShortTrailingIdx;
   while( i < startIdx ) {
        bodyShortPeriodTotal += es.rangeOf( BodyShort, i );
        i++;
   }
   i = startIdx;

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - three white candlesticks with consecutively higher closes
    * - Greg Morris wants them to be long, Steve Nison doesn't; anyway they should not be short
    * - each candle opens within or near the previous white real body 
    * - each candle must have no or very short upper shadow
    * - to differentiate this pattern from advance block, each candle must not be far shorter than the prior candle
    * The meanings of "not short", "very short shadow", "far" and "near" are specified with TA_SetCandleSettings;
    * here the 3 candles must be not short, if you want them to be long use TA_SetCandleSettings on BodyShort;
    * outInteger is positive (1 to 100): advancing 3 white soldiers is always bullish;
    * the user should consider that 3 white soldiers is significant when it appears in downtrend, while this function 
    * does not consider it
    */
   outIdx = 0;
   do
   {
#ifdef TA_LIB_PRO
      /* Section for code distributed with TA-Lib Pro only. */
#else
        if( es.candleColor(i-2) == 1 &&                                                     // 1st white
            TA_UPPERSHADOW(i-2) < es.average( ShadowVeryShort, ShadowVeryShortPeriodTotal[2], i-2 ) &&     
                                                                                            // very short upper shadow
            es.candleColor(i-1) == 1 &&                                                     // 2nd white
            TA_UPPERSHADOW(i-1) < es.average( ShadowVeryShort, ShadowVeryShortPeriodTotal[1], i-1 ) &&     
                                                                                            // very short upper shadow
            es.candleColor(i) == 1 &&                                                       // 3rd white
            TA_UPPERSHADOW(i) < es.average( ShadowVeryShort, ShadowVeryShortPeriodTotal[0], i ) &&         
                                                                                            // very short upper shadow
            es.Close(i) > es.Close(i-1) && es.Close(i-1) > es.Close(i-2) &&                     // consecutive higher closes
            es.Open(i-1) > es.Open(i-2) &&                                                    // 2nd opens within/near 1st real body
            es.Open(i-1) <= es.Close(i-2) + es.average( Near, nearPeriodTotal[2], i-2 ) &&
            es.Open(i) > es.Open(i-1) &&                                                      // 3rd opens within/near 2nd real body
            es.Open(i) <= es.Close(i-1) + es.average( Near, nearPeriodTotal[1], i-1 ) &&
            es.realBody(i-1) > es.realBody(i-2) - es.average( Far, FarPeriodTotal[2], i-2 ) &&     
                                                                                            // 2nd not far shorter than 1st
            es.realBody(i) > es.realBody(i-1) - es.average( Far, FarPeriodTotal[1], i-1 ) &&       
                                                                                            // 3rd not far shorter than 2nd
            es.realBody(i) > es.average( BodyShort, bodyShortPeriodTotal, i )      // not short real body
          )
#endif
            outInteger[outIdx++] = 100;
        else
            outInteger[outIdx++] = 0;
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        for (totIdx = 2; totIdx >= 0; --totIdx)
            ShadowVeryShortPeriodTotal[totIdx] += es.rangeOf( ShadowVeryShort, i-totIdx ) 
                                                - es.rangeOf( ShadowVeryShort, ShadowVeryShortTrailingIdx-totIdx );
        for (totIdx = 2; totIdx >= 1; --totIdx) {
            FarPeriodTotal[totIdx] += es.rangeOf( Far, i-totIdx ) 
                                    - es.rangeOf( Far, FarTrailingIdx-totIdx );
            nearPeriodTotal[totIdx] += es.rangeOf( Near, i-totIdx ) 
                                     - es.rangeOf( Near, nearTrailingIdx-totIdx );
        }
        bodyShortPeriodTotal += es.rangeOf( BodyShort, i ) - es.rangeOf( BodyShort, bodyShortTrailingIdx );
        i++; 
        ShadowVeryShortTrailingIdx++;
        nearTrailingIdx++;
        FarTrailingIdx++;
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
/* Generated */ enum class Core::RetCode Core::Cdl3WhiteSoldiers( int    startIdx,
/* Generated */                                                   int    endIdx,
/* Generated */                                                   SubArray<float>^ inOpen,
/* Generated */                                                   SubArray<float>^ inHigh,
/* Generated */                                                   SubArray<float>^ inLow,
/* Generated */                                                   SubArray<float>^ inClose,
/* Generated */                                                   [Out]int%    outBegIdx,
/* Generated */                                                   [Out]int%    outNBElement,
/* Generated */                                                   SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Cdl3WhiteSoldiers( int    startIdx,
/* Generated */                                                   int    endIdx,
/* Generated */                                                   cli::array<float>^ inOpen,
/* Generated */                                                   cli::array<float>^ inHigh,
/* Generated */                                                   cli::array<float>^ inLow,
/* Generated */                                                   cli::array<float>^ inClose,
/* Generated */                                                   [Out]int%    outBegIdx,
/* Generated */                                                   [Out]int%    outNBElement,
/* Generated */                                                   cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3WhiteSoldiers( int    startIdx,
/* Generated */                                   int    endIdx,
/* Generated */                                   float        inOpen[],
/* Generated */                                   float        inHigh[],
/* Generated */                                   float        inLow[],
/* Generated */                                   float        inClose[],
/* Generated */                                   MInteger     outBegIdx,
/* Generated */                                   MInteger     outNBElement,
/* Generated */                                   int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDL3WHITESOLDIERS( int    startIdx,
/* Generated */                                    int    endIdx,
/* Generated */                                    const float  inOpen[],
/* Generated */                                    const float  inHigh[],
/* Generated */                                    const float  inLow[],
/* Generated */                                    const float  inClose[],
/* Generated */                                    int          *outBegIdx,
/* Generated */                                    int          *outNBElement,
/* Generated */                                    int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     ARRAY_LOCAL(ShadowVeryShortPeriodTotal,3);
/* Generated */ 	ARRAY_LOCAL(nearPeriodTotal,3);
/* Generated */     ARRAY_LOCAL(FarPeriodTotal,3);
/* Generated */ 	double bodyShortPeriodTotal;
/* Generated */     int i, outIdx, totIdx, ShadowVeryShortTrailingIdx, nearTrailingIdx, FarTrailingIdx, bodyShortTrailingIdx, lookbackTotal;
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
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDL3WHITESOLDIERS)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    ShadowVeryShortPeriodTotal[2] = 0;
/* Generated */    ShadowVeryShortPeriodTotal[1] = 0;
/* Generated */    ShadowVeryShortPeriodTotal[0] = 0;
/* Generated */    ShadowVeryShortTrailingIdx = startIdx - settingShadowVeryShort.avgPeriod;
/* Generated */    nearPeriodTotal[2] = 0;
/* Generated */    nearPeriodTotal[1] = 0;
/* Generated */    nearPeriodTotal[0] = 0;
/* Generated */    nearTrailingIdx = startIdx - settingNear.avgPeriod;
/* Generated */    FarPeriodTotal[2] = 0;
/* Generated */    FarPeriodTotal[1] = 0;
/* Generated */    FarPeriodTotal[0] = 0;
/* Generated */    FarTrailingIdx = startIdx - settingFar.avgPeriod;
/* Generated */    bodyShortPeriodTotal = 0;
/* Generated */    bodyShortTrailingIdx = startIdx - settingBodyShort.avgPeriod;
/* Generated */    i = ShadowVeryShortTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         ShadowVeryShortPeriodTotal[2] += es.rangeOf( ShadowVeryShort, i-2 );
/* Generated */         ShadowVeryShortPeriodTotal[1] += es.rangeOf( ShadowVeryShort, i-1 );
/* Generated */         ShadowVeryShortPeriodTotal[0] += es.rangeOf( ShadowVeryShort, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = nearTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         nearPeriodTotal[2] += es.rangeOf( Near, i-2 );
/* Generated */         nearPeriodTotal[1] += es.rangeOf( Near, i-1 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = FarTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         FarPeriodTotal[2] += es.rangeOf( Far, i-2 );
/* Generated */         FarPeriodTotal[1] += es.rangeOf( Far, i-1 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = bodyShortTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         bodyShortPeriodTotal += es.rangeOf( BodyShort, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */ #ifdef TA_LIB_PRO
/* Generated */ #else
/* Generated */         if( es.candleColor(i-2) == 1 &&                                                     // 1st white
/* Generated */             TA_UPPERSHADOW(i-2) < es.average( ShadowVeryShort, ShadowVeryShortPeriodTotal[2], i-2 ) &&     
/* Generated */                                                                                             // very short upper shadow
/* Generated */             es.candleColor(i-1) == 1 &&                                                     // 2nd white
/* Generated */             TA_UPPERSHADOW(i-1) < es.average( ShadowVeryShort, ShadowVeryShortPeriodTotal[1], i-1 ) &&     
/* Generated */                                                                                             // very short upper shadow
/* Generated */             es.candleColor(i) == 1 &&                                                       // 3rd white
/* Generated */             TA_UPPERSHADOW(i) < es.average( ShadowVeryShort, ShadowVeryShortPeriodTotal[0], i ) &&         
/* Generated */                                                                                             // very short upper shadow
/* Generated */             es.Close(i) > es.Close(i-1) && es.Close(i-1) > es.Close(i-2) &&                     // consecutive higher closes
/* Generated */             es.Open(i-1) > es.Open(i-2) &&                                                    // 2nd opens within/near 1st real body
/* Generated */             es.Open(i-1) <= es.Close(i-2) + es.average( Near, nearPeriodTotal[2], i-2 ) &&
/* Generated */             es.Open(i) > es.Open(i-1) &&                                                      // 3rd opens within/near 2nd real body
/* Generated */             es.Open(i) <= es.Close(i-1) + es.average( Near, nearPeriodTotal[1], i-1 ) &&
/* Generated */             es.realBody(i-1) > es.realBody(i-2) - es.average( Far, FarPeriodTotal[2], i-2 ) &&     
/* Generated */                                                                                             // 2nd not far shorter than 1st
/* Generated */             es.realBody(i) > es.realBody(i-1) - es.average( Far, FarPeriodTotal[1], i-1 ) &&       
/* Generated */                                                                                             // 3rd not far shorter than 2nd
/* Generated */             es.realBody(i) > es.average( BodyShort, bodyShortPeriodTotal, i )      // not short real body
/* Generated */           )
/* Generated */ #endif
/* Generated */             outInteger[outIdx++] = 100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */         for (totIdx = 2; totIdx >= 0; --totIdx)
/* Generated */             ShadowVeryShortPeriodTotal[totIdx] += es.rangeOf( ShadowVeryShort, i-totIdx ) 
/* Generated */                                                 - es.rangeOf( ShadowVeryShort, ShadowVeryShortTrailingIdx-totIdx );
/* Generated */         for (totIdx = 2; totIdx >= 1; --totIdx) {
/* Generated */             FarPeriodTotal[totIdx] += es.rangeOf( Far, i-totIdx ) 
/* Generated */                                     - es.rangeOf( Far, FarTrailingIdx-totIdx );
/* Generated */             nearPeriodTotal[totIdx] += es.rangeOf( Near, i-totIdx ) 
/* Generated */                                      - es.rangeOf( Near, nearTrailingIdx-totIdx );
/* Generated */         }
/* Generated */         bodyShortPeriodTotal += es.rangeOf( BodyShort, i ) - es.rangeOf( BodyShort, bodyShortTrailingIdx );
/* Generated */         i++; 
/* Generated */         ShadowVeryShortTrailingIdx++;
/* Generated */         nearTrailingIdx++;
/* Generated */         FarTrailingIdx++;
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

