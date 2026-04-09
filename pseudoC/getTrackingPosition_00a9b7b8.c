// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTrackingPosition
// Entry Point: 00a9b7b8
// Size: 76 bytes
// Signature: undefined __thiscall getTrackingPosition(HeadMountedDisplayManager * this, float * param_1)


/* HeadMountedDisplayManager::getTrackingPosition(float*) */

HeadMountedDisplayManager __thiscall
HeadMountedDisplayManager::getTrackingPosition(HeadMountedDisplayManager *this,float *param_1)

{
  HeadMountedDisplayManager HVar1;
  
  (**(code **)(**(long **)(this + 0x20) + 0x50))();
  HVar1 = this[0x30];
  *param_1 = *(float *)(this + 0x34);
  param_1[1] = *(float *)(this + 0x38);
  param_1[2] = *(float *)(this + 0x3c);
  return HVar1;
}


