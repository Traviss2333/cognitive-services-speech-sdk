/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_microsoft_cognitiveservices_speech_RecognitionResult */

#ifndef _Included_com_microsoft_cognitiveservices_speech_RecognitionResult
#define _Included_com_microsoft_cognitiveservices_speech_RecognitionResult
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_microsoft_cognitiveservices_speech_RecognitionResult
 * Method:    getResultId
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/StringRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_RecognitionResult_getResultId
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_RecognitionResult
 * Method:    getResultReason
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_RecognitionResult_getResultReason
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_RecognitionResult
 * Method:    getResultText
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/StringRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_RecognitionResult_getResultText
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_RecognitionResult
 * Method:    getResultDuration
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)Ljava/math/BigInteger;
 */
JNIEXPORT jobject JNICALL Java_com_microsoft_cognitiveservices_speech_RecognitionResult_getResultDuration
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_RecognitionResult
 * Method:    getResultOffset
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)Ljava/math/BigInteger;
 */
JNIEXPORT jobject JNICALL Java_com_microsoft_cognitiveservices_speech_RecognitionResult_getResultOffset
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_RecognitionResult
 * Method:    getPropertyBagFromResult
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_RecognitionResult_getPropertyBagFromResult
  (JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif