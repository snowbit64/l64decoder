// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AndroidJNICall
// Entry Point: 00c69e38
// Size: 124 bytes
// Signature: undefined __thiscall ~AndroidJNICall(AndroidJNICall * this)


/* AndroidJNICall::~AndroidJNICall() */

void __thiscall AndroidJNICall::~AndroidJNICall(AndroidJNICall *this)

{
  if (*(long *)(this + 0x60) != 0) {
                    /* try { // try from 00c69e5c to 00c69e93 has its CatchHandler @ 00c69eb4 */
    (**(code **)(**(long **)(this + 0x70) + 0xb8))();
  }
  if (*(long *)(this + 0x50) != 0) {
    (**(code **)(**(long **)(this + 0x70) + 0xb0))();
    *(undefined8 *)(this + 0x50) = 0;
  }
  if (*(long *)(this + 0x48) != 0) {
    (**(code **)(**(long **)(this + 0x70) + 0xb0))();
    *(undefined8 *)(this + 0x48) = 0;
  }
  Mutex::~Mutex((Mutex *)(this + 0x20));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,_JNIEnv*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,_JNIEnv*>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,_JNIEnv*>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,_JNIEnv*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,_JNIEnv*>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,_JNIEnv*>>>
             *)(this + 8),*(__tree_node **)(this + 0x10));
  return;
}


