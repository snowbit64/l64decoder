// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDisplayDpi
// Entry Point: 006ed430
// Size: 92 bytes
// Signature: undefined __thiscall getDisplayDpi(AndroidActivity * this, float * param_1, float * param_2)


/* AndroidActivity::getDisplayDpi(float&, float&) */

void __thiscall AndroidActivity::getDisplayDpi(AndroidActivity *this,float *param_1,float *param_2)

{
  ulong uVar1;
  AndroidJNICall *this_00;
  
  uVar1 = AndroidJNICall::callInt(*(AndroidJNICall **)(this + 8),"getDisplayXDpi");
  this_00 = *(AndroidJNICall **)(this + 8);
  *param_1 = (float)(uVar1 & 0xffffffff);
  uVar1 = AndroidJNICall::callInt(this_00,"getDisplayYDpi");
  *param_2 = (float)(uVar1 & 0xffffffff);
  return;
}


