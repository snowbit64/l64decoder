// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyImageBufferFromGetXZ
// Entry Point: 009d9088
// Size: 168 bytes
// Signature: undefined copyImageBufferFromGetXZ(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementMask::copyImageBufferFromGetXZ() */

void ProceduralPlacementMask::copyImageBufferFromGetXZ(void)

{
  uint uVar1;
  long *in_x0;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar5 = *(uint *)((long)in_x0 + 0x54);
  uVar4 = uVar5 * *(int *)(in_x0 + 10);
  if ((void *)in_x0[0xb] != (void *)0x0) {
    operator_delete__((void *)in_x0[0xb]);
    uVar5 = *(uint *)((long)in_x0 + 0x54);
  }
  pvVar2 = operator_new__((ulong)uVar4 << 2);
  in_x0[0xb] = (long)pvVar2;
  if (uVar5 != 0) {
    uVar4 = 0;
    uVar3 = *(uint *)(in_x0 + 10);
    do {
      if (uVar3 != 0) {
        uVar5 = 0;
        do {
          uVar6 = (**(code **)(*in_x0 + 0x68))();
          uVar3 = *(uint *)(in_x0 + 10);
          uVar1 = uVar5 + uVar4 * uVar3;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(in_x0[0xb] + (ulong)uVar1 * 4) = uVar6;
        } while (uVar5 < uVar3);
        uVar5 = *(uint *)((long)in_x0 + 0x54);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return;
}


