//
// Created by wpwh on 2020/3/20.
//
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_wuhai_myandroidc_MainActivity_stringFromJNI2(JNIEnv *env, jobject){
    std::string hello = "hello wuhai";
    return env -> NewStringUTF(hello.c_str());
}