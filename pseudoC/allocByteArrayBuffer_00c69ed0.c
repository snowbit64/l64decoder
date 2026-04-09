// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocByteArrayBuffer
// Entry Point: 00c69ed0
// Size: 60 bytes
// Signature: undefined __thiscall allocByteArrayBuffer(AndroidJNICall * this, uint param_1)


/* AndroidJNICall::allocByteArrayBuffer(unsigned int) */

void __thiscall AndroidJNICall::allocByteArrayBuffer(AndroidJNICall *this,uint param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  uVar2 = (**(code **)(*plVar1 + 0x580))(plVar1,param_1);
  *(uint *)(this + 0x68) = param_1;
  *(undefined8 *)(this + 0x60) = uVar2;
  return;
}


