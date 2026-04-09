// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_borders_fill_caps
// Entry Point: 00df7b24
// Size: 268 bytes
// Signature: undefined oc_state_borders_fill_caps(void)


void oc_state_borders_fill_caps(long param_1,int param_2,int param_3)

{
  size_t __n;
  void *__src;
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 == 0) {
    uVar4 = 0;
    uVar1 = 0x10;
  }
  else {
    uVar4 = (*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1;
    uVar1 = 0x10 >> (ulong)(~*(uint *)(param_1 + 0x30) & 1);
  }
  lVar2 = param_1 + (long)param_2 * 0x48 + (long)param_3 * 0x18;
  lVar6 = (long)*(int *)(lVar2 + 0x1a8);
  lVar7 = (ulong)(0x10 >> (ulong)uVar4) * lVar6;
  if (lVar7 != 0) {
    lVar3 = *(long *)(lVar2 + 0x1b0);
    lVar8 = 0;
    uVar5 = (ulong)uVar1;
    __n = (long)*(int *)(lVar2 + 0x1a0) + (ulong)uVar1 * 2;
    lVar2 = (long)*(int *)(param_1 + (long)param_2 * 0x48 + (long)param_3 * 0x18 + 0x1a4);
    __src = (void *)(lVar3 - uVar5);
    do {
      memcpy((void *)((long)__src - lVar6),__src,__n);
      memcpy((void *)(lVar3 + (lVar2 * lVar6 - uVar5) + lVar8),
             (void *)(((lVar3 + (lVar2 + -1) * lVar6) - uVar5) + lVar8),__n);
      lVar8 = lVar8 + lVar6;
      __src = (void *)((long)__src - lVar6);
    } while (lVar7 - lVar8 != 0);
  }
  return;
}


