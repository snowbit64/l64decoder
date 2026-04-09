// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ResizeBuffers
// Entry Point: 00d0ac74
// Size: 300 bytes
// Signature: undefined ResizeBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CFB_ModePolicy::ResizeBuffers() */

void CryptoPP::CFB_ModePolicy::ResizeBuffers(void)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  long in_x0;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar4 = (**(code **)(*(long *)(*(long *)(in_x0 + 0x10) + 8) + 0x30))();
  uVar6 = (ulong)uVar4;
  uVar1 = *(ulong *)(in_x0 + 0x28);
  pvVar2 = *(void **)(in_x0 + 0x30);
  if (uVar1 == uVar6) {
    uVar1 = *(ulong *)(in_x0 + 0x50);
    pvVar3 = *(void **)(in_x0 + 0x58);
    *(ulong *)(in_x0 + 0x28) = uVar6;
    *(void **)(in_x0 + 0x30) = pvVar2;
    *(undefined8 *)(in_x0 + 0x20) = 0xffffffffffffffff;
  }
  else {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar2);
    if (uVar4 == 0) {
      uVar1 = *(ulong *)(in_x0 + 0x50);
      pvVar3 = *(void **)(in_x0 + 0x58);
      *(ulong *)(in_x0 + 0x28) = uVar6;
      *(undefined8 *)(in_x0 + 0x30) = 0;
      *(undefined8 *)(in_x0 + 0x20) = 0xffffffffffffffff;
    }
    else {
      uVar5 = UnalignedAllocate(uVar6);
      uVar1 = *(ulong *)(in_x0 + 0x50);
      pvVar3 = *(void **)(in_x0 + 0x58);
      *(ulong *)(in_x0 + 0x28) = uVar6;
      *(undefined8 *)(in_x0 + 0x30) = uVar5;
      *(undefined8 *)(in_x0 + 0x20) = 0xffffffffffffffff;
    }
  }
  if (uVar1 != uVar6) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)pvVar3 + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar3);
    if (uVar4 != 0) {
      uVar5 = UnalignedAllocate(uVar6);
      *(ulong *)(in_x0 + 0x50) = uVar6;
      *(undefined8 *)(in_x0 + 0x58) = uVar5;
      *(undefined8 *)(in_x0 + 0x48) = 0xffffffffffffffff;
      return;
    }
    *(ulong *)(in_x0 + 0x50) = uVar6;
    *(undefined8 *)(in_x0 + 0x58) = 0;
    *(undefined8 *)(in_x0 + 0x48) = 0xffffffffffffffff;
    return;
  }
  *(ulong *)(in_x0 + 0x50) = uVar6;
  *(void **)(in_x0 + 0x58) = pvVar3;
  *(undefined8 *)(in_x0 + 0x48) = 0xffffffffffffffff;
  return;
}


