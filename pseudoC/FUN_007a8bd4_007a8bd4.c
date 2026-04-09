// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8bd4
// Entry Point: 007a8bd4
// Size: 140 bytes
// Signature: undefined FUN_007a8bd4(void)


void FUN_007a8bd4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  if ((uVar1 >> 0xb & 1) == 0) {
    if ((uVar1 >> 0xe & 1) == 0) {
      if ((uVar1 >> 0xd & 1) == 0) {
        uVar2 = 0;
        goto LAB_007a8c30;
      }
      LightSource::updateLODTransformGroup();
      uVar2 = *(ulong *)(param_1 + 0x160);
      if (uVar2 == 0) {
        uVar2 = 0;
        goto LAB_007a8c30;
      }
    }
    else {
      AudioSource::updateLODTransformGroup();
      uVar2 = *(ulong *)(param_1 + 0x290);
      if (uVar2 == 0) goto LAB_007a8c30;
    }
  }
  else {
    GsShape::updateLODTransformGroup();
    uVar2 = *(ulong *)(param_1 + 0x188);
    if (uVar2 == 0) {
      uVar2 = 0;
      goto LAB_007a8c30;
    }
  }
  uVar2 = (ulong)*(uint *)(uVar2 + 0x18);
LAB_007a8c30:
  *(int *)(param_2 + 0x100) = (int)uVar2;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


