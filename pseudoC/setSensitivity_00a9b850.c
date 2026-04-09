// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSensitivity
// Entry Point: 00a9b850
// Size: 36 bytes
// Signature: undefined __thiscall setSensitivity(HeadMountedDisplayManager * this, float param_1)


/* HeadMountedDisplayManager::setSensitivity(float) */

HeadMountedDisplayManager __thiscall
HeadMountedDisplayManager::setSensitivity(HeadMountedDisplayManager *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = NEON_fmin(param_1,0x3f800000);
  uVar1 = 0;
  if (0.0 <= param_1) {
    uVar1 = uVar2;
  }
  *(undefined4 *)(this + 0x4c) = uVar1;
  return this[0x30];
}


