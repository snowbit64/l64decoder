// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSensitivity
// Entry Point: 00a9b874
// Size: 20 bytes
// Signature: undefined __thiscall getSensitivity(HeadMountedDisplayManager * this, float * param_1)


/* HeadMountedDisplayManager::getSensitivity(float*) */

HeadMountedDisplayManager __thiscall
HeadMountedDisplayManager::getSensitivity(HeadMountedDisplayManager *this,float *param_1)

{
  HeadMountedDisplayManager HVar1;
  
  HVar1 = this[0x30];
  *param_1 = *(float *)(this + 0x4c);
  return HVar1;
}


