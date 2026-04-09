// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ResizeBuffers
// Entry Point: 00d0a5d8
// Size: 144 bytes
// Signature: undefined ResizeBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CipherModeBase::ResizeBuffers() */

void CryptoPP::CipherModeBase::ResizeBuffers(void)

{
  ulong uVar1;
  uint uVar2;
  long in_x0;
  void *pvVar3;
  ulong uVar4;
  
  uVar2 = (**(code **)(*(long *)(*(long *)(in_x0 + 0x10) + 8) + 0x30))();
  uVar4 = (ulong)uVar2;
  uVar1 = *(ulong *)(in_x0 + 0x28);
  pvVar3 = *(void **)(in_x0 + 0x30);
  if (uVar1 != uVar4) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)pvVar3 + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar3);
    if (uVar2 == 0) {
      *(ulong *)(in_x0 + 0x28) = uVar4;
      *(undefined8 *)(in_x0 + 0x30) = 0;
      *(undefined8 *)(in_x0 + 0x20) = 0xffffffffffffffff;
      return;
    }
    pvVar3 = (void *)UnalignedAllocate(uVar4);
  }
  *(ulong *)(in_x0 + 0x28) = uVar4;
  *(void **)(in_x0 + 0x30) = pvVar3;
  *(undefined8 *)(in_x0 + 0x20) = 0xffffffffffffffff;
  return;
}


