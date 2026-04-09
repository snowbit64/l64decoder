// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseGpuResources
// Entry Point: 00a99e28
// Size: 172 bytes
// Signature: undefined releaseGpuResources(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftVirtualTexture::releaseGpuResources() */

void SoftVirtualTexture::releaseGpuResources(void)

{
  long in_x0;
  uint uVar1;
  ulong uVar2;
  long **pplVar3;
  
  if (*(long **)(in_x0 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x60) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x60) = 0;
  if (*(long **)(in_x0 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x68) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x68) = 0;
  if (*(long **)(in_x0 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x78) + 8))();
  }
  uVar1 = *(uint *)(in_x0 + 0x18);
  *(undefined8 *)(in_x0 + 0x78) = 0;
  if (uVar1 != 0) {
    uVar2 = 0;
    pplVar3 = (long **)(in_x0 + 0x80);
    do {
      if (*pplVar3 != (long *)0x0) {
        (**(code **)(**pplVar3 + 8))();
        uVar1 = *(uint *)(in_x0 + 0x18);
      }
      uVar2 = uVar2 + 1;
      *pplVar3 = (long *)0x0;
      pplVar3 = pplVar3 + 2;
    } while (uVar2 < uVar1);
  }
  return;
}


