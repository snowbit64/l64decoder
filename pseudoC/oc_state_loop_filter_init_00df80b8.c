// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_loop_filter_init
// Entry Point: 00df80b8
// Size: 188 bytes
// Signature: undefined oc_state_loop_filter_init(void)


undefined8 oc_state_loop_filter_init(long param_1,void *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  bVar2 = *(byte *)(param_1 + (ulong)*(byte *)(param_1 + 0x40b) + 0xd010);
  uVar5 = (ulong)bVar2;
  if (uVar5 != 0) {
    memset(param_2,0,0x400);
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = (lVar3 - uVar5) + 0x7f;
      if (-1 < (long)uVar1) {
        *(uint *)((long)param_2 + (uVar1 & 0xffffffff) * 4) = (int)uVar4 - (uint)bVar2;
      }
      *(int *)((long)param_2 + lVar3 * 4 + 0x1fc) = (int)lVar3;
      *(int *)((long)param_2 + uVar4 * 4 + 0x1fc) = (int)uVar4;
      if (uVar5 + uVar4 + 0x7f < 0x100) {
        *(uint *)((long)param_2 + uVar4 * 4 + uVar5 * 4 + 0x1fc) = (uint)bVar2 + (int)lVar3;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (uVar5 != uVar4);
    return 0;
  }
  return 1;
}


