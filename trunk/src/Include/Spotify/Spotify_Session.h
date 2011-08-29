/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Spotify_Session */

#ifndef _Included_Spotify_Session
#define _Included_Spotify_Session
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Spotify_Session
 * Method:    NativeCreate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Spotify_Session_NativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     Spotify_Session
 * Method:    NativeDestroy
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_Spotify_Session_NativeDestroy
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_Session
 * Method:    Initialise
 * Signature: (ILSpotify/Config;)I
 */
JNIEXPORT jint JNICALL Java_Spotify_Session_Initialise
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     Spotify_Session
 * Method:    Shutdown
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_Spotify_Session_Shutdown
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_Session
 * Method:    Update
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_Spotify_Session_Update
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_Session
 * Method:    Login
 * Signature: (ILjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_Spotify_Session_Login
  (JNIEnv *, jobject, jint, jstring, jstring);

/*
 * Class:     Spotify_Session
 * Method:    Logout
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_Spotify_Session_Logout
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_Session
 * Method:    IsLoggedIn
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_Spotify_Session_IsLoggedIn
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_Session
 * Method:    GetConnectionState
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_Spotify_Session_GetConnectionState
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_Session
 * Method:    Load
 * Signature: (ILSpotify/Track;)I
 */
JNIEXPORT jint JNICALL Java_Spotify_Session_Load
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     Spotify_Session
 * Method:    Unload
 * Signature: (ILSpotify/Track;)V
 */
JNIEXPORT void JNICALL Java_Spotify_Session_Unload
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     Spotify_Session
 * Method:    GetCurrentTrack
 * Signature: (I)LSpotify/Track;
 */
JNIEXPORT jobject JNICALL Java_Spotify_Session_GetCurrentTrack
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_Session
 * Method:    Seek
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_Spotify_Session_Seek
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     Spotify_Session
 * Method:    Play
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_Spotify_Session_Play
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_Session
 * Method:    Stop
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_Spotify_Session_Stop
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_Session
 * Method:    PreFetch
 * Signature: (ILSpotify/Track;)I
 */
JNIEXPORT jint JNICALL Java_Spotify_Session_PreFetch
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     Spotify_Session
 * Method:    GetPlayListContainer
 * Signature: (I)LSpotify/PlayListContainer;
 */
JNIEXPORT jobject JNICALL Java_Spotify_Session_GetPlayListContainer
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_Session
 * Method:    SetPreferredBitrate
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_Spotify_Session_SetPreferredBitrate
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
