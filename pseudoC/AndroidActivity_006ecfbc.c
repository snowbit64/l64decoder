// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AndroidActivity
// Entry Point: 006ecfbc
// Size: 64 bytes
// Signature: undefined __thiscall ~AndroidActivity(AndroidActivity * this)


/* AndroidActivity::~AndroidActivity() */

void __thiscall AndroidActivity::~AndroidActivity(AndroidActivity *this)

{
  AndroidJNICall *this_00;
  
  this_00 = *(AndroidJNICall **)(this + 8);
  if (this_00 != (AndroidJNICall *)0x0) {
    AndroidJNICall::~AndroidJNICall(this_00);
    operator_delete(this_00);
    *(undefined8 *)(this + 8) = 0;
  }
  *(undefined8 *)(*(long *)this + 8) = 0;
  return;
}


