/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_WindowsPeerInfo */

#ifndef _Included_org_lwjgl_opengl_WindowsPeerInfo
#define _Included_org_lwjgl_opengl_WindowsPeerInfo
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_lwjgl_opengl_WindowsPeerInfo
 * Method:    createHandle
 * Signature: ()Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_lwjgl_opengl_WindowsPeerInfo_createHandle
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_WindowsPeerInfo
 * Method:    nChoosePixelFormat
 * Signature: (JIILorg/lwjgl/opengl/PixelFormat;Ljava/nio/IntBuffer;ZZZZ)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_WindowsPeerInfo_nChoosePixelFormat
  (JNIEnv *, jclass, jlong, jint, jint, jobject, jobject, jboolean, jboolean, jboolean, jboolean);

/*
 * Class:     org_lwjgl_opengl_WindowsPeerInfo
 * Method:    setPixelFormat
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_WindowsPeerInfo_setPixelFormat
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_lwjgl_opengl_WindowsPeerInfo
 * Method:    nGetHdc
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_WindowsPeerInfo_nGetHdc
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_WindowsPeerInfo
 * Method:    nGetHwnd
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_WindowsPeerInfo_nGetHwnd
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
