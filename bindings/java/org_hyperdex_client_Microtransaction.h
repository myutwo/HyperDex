/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_hyperdex_client_Microtransaction */

#ifndef _Included_org_hyperdex_client_Microtransaction
#define _Included_org_hyperdex_client_Microtransaction
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    _create
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT HYPERDEX_API void JNICALL Java_org_hyperdex_client_Microtransaction__1create
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    _destroy
 * Signature: ()V
 */
JNIEXPORT HYPERDEX_API void JNICALL Java_org_hyperdex_client_Microtransaction__1destroy
  (JNIEnv *, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    initialize
 * Signature: ()V
 */
JNIEXPORT HYPERDEX_API void JNICALL Java_org_hyperdex_client_Microtransaction_initialize
  (JNIEnv *, jclass);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    terminate
 * Signature: ()V
 */
JNIEXPORT HYPERDEX_API void JNICALL Java_org_hyperdex_client_Microtransaction_terminate
  (JNIEnv *, jclass);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    async_commit
 * Signature: (Ljava/lang/String;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_async_1commit
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    put
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_put
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    atomic_add
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_atomic_1add
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    atomic_sub
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_atomic_1sub
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    atomic_mul
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_atomic_1mul
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    atomic_div
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_atomic_1div
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    atomic_and
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_atomic_1and
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    atomic_or
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_atomic_1or
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    string_prepend
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_string_1prepend
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    string_append
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_string_1append
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    list_lpush
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_list_1lpush
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    list_rpush
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_list_1rpush
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    document_rename
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_document_1rename
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    document_unset
 * Signature: (Ljava/util/Map;)I
 */
JNIEXPORT HYPERDEX_API jint JNICALL Java_org_hyperdex_client_Microtransaction_document_1unset
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
