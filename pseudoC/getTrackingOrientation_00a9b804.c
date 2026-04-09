// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTrackingOrientation
// Entry Point: 00a9b804
// Size: 76 bytes
// Signature: undefined __thiscall getTrackingOrientation(HeadMountedDisplayManager * this, float * param_1)


/* HeadMountedDisplayManager::getTrackingOrientation(float*) */

HeadMountedDisplayManager __thiscall
HeadMountedDisplayManager::getTrackingOrientation(HeadMountedDisplayManager *this,float *param_1)

{
  HeadMountedDisplayManager HVar1;
  
  (**(code **)(**(long **)(this + 0x20) + 0x50))();
  HVar1 = this[0x30];
  *param_1 = *(float *)(this + 0x40);
  param_1[1] = *(float *)(this + 0x44);
  param_1[2] = *(float *)(this + 0x48);
  return HVar1;
}


