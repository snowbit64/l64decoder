// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b0a2c8
// Size: 120 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NullAudioDevice::update() */

void NullAudioDevice::update(void)

{
  double dVar1;
  long in_x0;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = Watch::getCurrentTicks();
  dVar1 = (double)Watch::convertTicksToMs(lVar2 - *(long *)(in_x0 + 0x20));
  lVar2 = *(long *)(in_x0 + 8);
  if (*(long *)(in_x0 + 0x10) != lVar2) {
    uVar4 = 0;
    do {
      (**(code **)(**(long **)(lVar2 + uVar4 * 8) + 0xb0))((float)dVar1);
      lVar2 = *(long *)(in_x0 + 8);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(in_x0 + 0x10) - lVar2 >> 3));
  }
  uVar3 = Watch::getCurrentTicks();
  *(undefined8 *)(in_x0 + 0x20) = uVar3;
  return;
}


