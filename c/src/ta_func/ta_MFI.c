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
 *  MF       Mario Fortier
 *  BT       BobTrader (TADoc.org forum user).
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  120802 MF    Template creation.
 *  052603 MF    Adapt code to compile with .NET Managed C++
 *  062704 MF    Prevent divide by zero.
 *  121705 MF    Java port related changes.
 *  060907 MF,BT Fix #1727704. MFI logic bug when no price movement
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
/* Generated */ int Core::MfiLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int mfiLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_MFI_Lookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* math.Min/math.Max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
   return optInTimePeriod + TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_MFI,Mfi);
}

#if defined( _MANAGED )
   ref class MoneyFlow
   {
   public:
      double positive;
      double negative;
   };
#elif defined( _JAVA )
  // See MoneyFlow.java for the definition.
#else
   typedef struct
   {
      double positive;
      double negative;
   } MoneyFlow;
#endif


/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_MFI - Money Flow Index
 * 
 * Input  = High, Low, Close, Volume
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Mfi( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     SubArray<double>^ inHigh,
/* Generated */                                     SubArray<double>^ inLow,
/* Generated */                                     SubArray<double>^ inClose,
/* Generated */                                     SubArray<double>^ inVolume,
/* Generated */                                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Mfi( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     cli::array<double>^ inHigh,
/* Generated */                                     cli::array<double>^ inLow,
/* Generated */                                     cli::array<double>^ inClose,
/* Generated */                                     cli::array<double>^ inVolume,
/* Generated */                                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode mfi( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     double       inHigh[],
/* Generated */                     double       inLow[],
/* Generated */                     double       inClose[],
/* Generated */                     double       inVolume[],
/* Generated */                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                     MInteger     outBegIdx,
/* Generated */                     MInteger     outNBElement,
/* Generated */                     double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_MFI( int    startIdx,
/* Generated */                               int    endIdx,
/* Generated */                                          const double inHigh[],
/* Generated */                                          const double inLow[],
/* Generated */                                          const double inClose[],
/* Generated */                                          const double inVolume[],
/* Generated */                                          int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                          int          *outBegIdx,
/* Generated */                                          int          *outNBElement,
/* Generated */                                          double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
	/* insert local variable here */
   double posSumMF, negSumMF, prevValue;
   double tempValue1, tempValue2;
   int lookbackTotal, outIdx, i, today;

   CIRCBUF_PROLOG_CLASS( mflow, MoneyFlow, 50 ); /* Id, Type, Static Size */

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
/* Generated */    if(!inHigh||!inLow||!inClose||!inVolume)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* math.Min/math.Max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   CIRCBUF_INIT_CLASS( mflow, MoneyFlow, optInTimePeriod );   

   VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
   VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
   
   /* Adjust startIdx to account for the lookback period. */
   lookbackTotal = optInTimePeriod + TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_MFI,Mfi);

   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      CIRCBUF_DESTROY(mflow);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   outIdx = 0; /* Index into the output. */

   /* Accumulate the positive and negative money flow
    * among the initial period.
    */
   today = startIdx-lookbackTotal;
   prevValue = (inHigh[today]+inLow[today]+inClose[today])/3.0;

   posSumMF = 0.0;
   negSumMF = 0.0;
   today++;
   for( i=optInTimePeriod; i > 0; i-- )
   {
      tempValue1 = (inHigh[today]+inLow[today]+inClose[today])/3.0;
      tempValue2 = tempValue1 - prevValue;
      prevValue  = tempValue1;
      tempValue1 *= inVolume[today++];
      if( tempValue2 < 0 )
      {
         CIRCBUF_REF(mflow[mflow_Idx])negative = tempValue1;
         negSumMF += tempValue1;
         CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
      }
      else if( tempValue2 > 0 )
      {
         CIRCBUF_REF(mflow[mflow_Idx])positive = tempValue1;
         posSumMF += tempValue1;
         CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
      }
	  else
	  {
         CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
         CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
	  }

      CIRCBUF_NEXT(mflow);
   }
   
   /* The following two equations are equivalent:
    *    MFI = 100 - (100 / 1 + (posSumMF/negSumMF))
    *    MFI = 100 * (posSumMF/(posSumMF+negSumMF))
    * The second equation is used here for speed optimization.
    */
   if( today > startIdx )
   {
      tempValue1 = posSumMF+negSumMF;
      if( tempValue1 < 1.0 )
         outReal[outIdx++] = 0.0;
      else
         outReal[outIdx++] = 100.0*(posSumMF/tempValue1);
   }
   else
   {
      /* Skip the unstable period. Do the processing 
       * but do not write it in the output.
       */   
      while( today < startIdx )
      {
         posSumMF -= CIRCBUF_REF(mflow[mflow_Idx])positive;
         negSumMF -= CIRCBUF_REF(mflow[mflow_Idx])negative;

         tempValue1 = (inHigh[today]+inLow[today]+inClose[today])/3.0;
         tempValue2 = tempValue1 - prevValue;
         prevValue  = tempValue1;
         tempValue1 *= inVolume[today++];
         if( tempValue2 < 0 )
         {
            CIRCBUF_REF(mflow[mflow_Idx])negative = tempValue1;
            negSumMF += tempValue1;
            CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
         }
         else if( tempValue2 > 0 )
         {
            CIRCBUF_REF(mflow[mflow_Idx])positive = tempValue1;
            posSumMF += tempValue1;
            CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
         }
	     else
	     {
            CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
            CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
	     }

         CIRCBUF_NEXT(mflow);
      }
   }

   /* Unstable period skipped... now continue
    * processing if needed.
    */
   while( today <= endIdx )
   {
      posSumMF -= CIRCBUF_REF(mflow[mflow_Idx])positive;
      negSumMF -= CIRCBUF_REF(mflow[mflow_Idx])negative;

      tempValue1 = (inHigh[today]+inLow[today]+inClose[today])/3.0;
      tempValue2 = tempValue1 - prevValue;
      prevValue  = tempValue1;
      tempValue1 *= inVolume[today++];
      if( tempValue2 < 0 )
      {
         CIRCBUF_REF(mflow[mflow_Idx])negative = tempValue1;
         negSumMF += tempValue1;
         CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
      }
      else if( tempValue2 > 0 )
      {
         CIRCBUF_REF(mflow[mflow_Idx])positive = tempValue1;
         posSumMF += tempValue1;
         CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
      }
      else
	  {
         CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
         CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
	  }

      tempValue1 = posSumMF+negSumMF;
      if( tempValue1 < 1.0 )
         outReal[outIdx++] = 0.0;
      else
         outReal[outIdx++] = 100.0*(posSumMF/tempValue1);

      CIRCBUF_NEXT(mflow);
   }

   CIRCBUF_DESTROY(mflow);

   VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;

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
/* Generated */ enum class Core::RetCode Core::Mfi( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     SubArray<float>^ inHigh,
/* Generated */                                     SubArray<float>^ inLow,
/* Generated */                                     SubArray<float>^ inClose,
/* Generated */                                     SubArray<float>^ inVolume,
/* Generated */                                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Mfi( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     cli::array<float>^ inHigh,
/* Generated */                                     cli::array<float>^ inLow,
/* Generated */                                     cli::array<float>^ inClose,
/* Generated */                                     cli::array<float>^ inVolume,
/* Generated */                                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode mfi( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     float        inHigh[],
/* Generated */                     float        inLow[],
/* Generated */                     float        inClose[],
/* Generated */                     float        inVolume[],
/* Generated */                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                     MInteger     outBegIdx,
/* Generated */                     MInteger     outNBElement,
/* Generated */                     double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_MFI( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      const float  inHigh[],
/* Generated */                      const float  inLow[],
/* Generated */                      const float  inClose[],
/* Generated */                      const float  inVolume[],
/* Generated */                      int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                      int          *outBegIdx,
/* Generated */                      int          *outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    double posSumMF, negSumMF, prevValue;
/* Generated */    double tempValue1, tempValue2;
/* Generated */    int lookbackTotal, outIdx, i, today;
/* Generated */    CIRCBUF_PROLOG_CLASS( mflow, MoneyFlow, 50 ); 
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inHigh||!inLow||!inClose||!inVolume)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 14;
/* Generated */     else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    CIRCBUF_INIT_CLASS( mflow, MoneyFlow, optInTimePeriod );   
/* Generated */    VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */    VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */    lookbackTotal = optInTimePeriod + TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_MFI,Mfi);
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       CIRCBUF_DESTROY(mflow);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    outIdx = 0; 
/* Generated */    today = startIdx-lookbackTotal;
/* Generated */    prevValue = (inHigh[today]+inLow[today]+inClose[today])/3.0;
/* Generated */    posSumMF = 0.0;
/* Generated */    negSumMF = 0.0;
/* Generated */    today++;
/* Generated */    for( i=optInTimePeriod; i > 0; i-- )
/* Generated */    {
/* Generated */       tempValue1 = (inHigh[today]+inLow[today]+inClose[today])/3.0;
/* Generated */       tempValue2 = tempValue1 - prevValue;
/* Generated */       prevValue  = tempValue1;
/* Generated */       tempValue1 *= inVolume[today++];
/* Generated */       if( tempValue2 < 0 )
/* Generated */       {
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])negative = tempValue1;
/* Generated */          negSumMF += tempValue1;
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
/* Generated */       }
/* Generated */       else if( tempValue2 > 0 )
/* Generated */       {
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])positive = tempValue1;
/* Generated */          posSumMF += tempValue1;
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
/* Generated */       }
/* Generated */ 	  else
/* Generated */ 	  {
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
/* Generated */ 	  }
/* Generated */       CIRCBUF_NEXT(mflow);
/* Generated */    }
/* Generated */    if( today > startIdx )
/* Generated */    {
/* Generated */       tempValue1 = posSumMF+negSumMF;
/* Generated */       if( tempValue1 < 1.0 )
/* Generated */          outReal[outIdx++] = 0.0;
/* Generated */       else
/* Generated */          outReal[outIdx++] = 100.0*(posSumMF/tempValue1);
/* Generated */    }
/* Generated */    else
/* Generated */    {
/* Generated */       while( today < startIdx )
/* Generated */       {
/* Generated */          posSumMF -= CIRCBUF_REF(mflow[mflow_Idx])positive;
/* Generated */          negSumMF -= CIRCBUF_REF(mflow[mflow_Idx])negative;
/* Generated */          tempValue1 = (inHigh[today]+inLow[today]+inClose[today])/3.0;
/* Generated */          tempValue2 = tempValue1 - prevValue;
/* Generated */          prevValue  = tempValue1;
/* Generated */          tempValue1 *= inVolume[today++];
/* Generated */          if( tempValue2 < 0 )
/* Generated */          {
/* Generated */             CIRCBUF_REF(mflow[mflow_Idx])negative = tempValue1;
/* Generated */             negSumMF += tempValue1;
/* Generated */             CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
/* Generated */          }
/* Generated */          else if( tempValue2 > 0 )
/* Generated */          {
/* Generated */             CIRCBUF_REF(mflow[mflow_Idx])positive = tempValue1;
/* Generated */             posSumMF += tempValue1;
/* Generated */             CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
/* Generated */          }
/* Generated */ 	     else
/* Generated */ 	     {
/* Generated */             CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
/* Generated */             CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
/* Generated */ 	     }
/* Generated */          CIRCBUF_NEXT(mflow);
/* Generated */       }
/* Generated */    }
/* Generated */    while( today <= endIdx )
/* Generated */    {
/* Generated */       posSumMF -= CIRCBUF_REF(mflow[mflow_Idx])positive;
/* Generated */       negSumMF -= CIRCBUF_REF(mflow[mflow_Idx])negative;
/* Generated */       tempValue1 = (inHigh[today]+inLow[today]+inClose[today])/3.0;
/* Generated */       tempValue2 = tempValue1 - prevValue;
/* Generated */       prevValue  = tempValue1;
/* Generated */       tempValue1 *= inVolume[today++];
/* Generated */       if( tempValue2 < 0 )
/* Generated */       {
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])negative = tempValue1;
/* Generated */          negSumMF += tempValue1;
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
/* Generated */       }
/* Generated */       else if( tempValue2 > 0 )
/* Generated */       {
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])positive = tempValue1;
/* Generated */          posSumMF += tempValue1;
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
/* Generated */       }
/* Generated */       else
/* Generated */ 	  {
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])positive = 0.0;
/* Generated */          CIRCBUF_REF(mflow[mflow_Idx])negative = 0.0;
/* Generated */ 	  }
/* Generated */       tempValue1 = posSumMF+negSumMF;
/* Generated */       if( tempValue1 < 1.0 )
/* Generated */          outReal[outIdx++] = 0.0;
/* Generated */       else
/* Generated */          outReal[outIdx++] = 100.0*(posSumMF/tempValue1);
/* Generated */       CIRCBUF_NEXT(mflow);
/* Generated */    }
/* Generated */    CIRCBUF_DESTROY(mflow);
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
