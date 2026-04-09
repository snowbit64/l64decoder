// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ResizeBuffers
// Entry Point: 00d0b804
// Size: 128 bytes
// Signature: undefined ResizeBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CBC_Decryption::ResizeBuffers() */

void CryptoPP::CBC_Decryption::ResizeBuffers(void)

{
  ulong uVar1;
  long in_x0;
  void *pvVar2;
  ulong uVar3;
  
  BlockOrientedCipherModeBase::ResizeBuffers();
  uVar1 = *(ulong *)(in_x0 + 0x68);
  pvVar2 = *(void **)(in_x0 + 0x70);
  uVar3 = (ulong)*(uint *)(in_x0 + 0x28);
  if (uVar1 != uVar3) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar2);
    if (uVar3 == 0) {
      *(undefined8 *)(in_x0 + 0x68) = 0;
      *(undefined8 *)(in_x0 + 0x70) = 0;
      *(undefined8 *)(in_x0 + 0x60) = 0xffffffffffffffff;
      return;
    }
    pvVar2 = (void *)UnalignedAllocate(uVar3);
  }
  *(ulong *)(in_x0 + 0x68) = uVar3;
  *(void **)(in_x0 + 0x70) = pvVar2;
  *(undefined8 *)(in_x0 + 0x60) = 0xffffffffffffffff;
  return;
}


