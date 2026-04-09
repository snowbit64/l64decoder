// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_dec_bits
// Entry Point: 00e651a8
// Size: 192 bytes
// Signature: undefined ec_dec_bits(void)


uint ec_dec_bits(long *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 2);
  uVar6 = *(uint *)((long)param_1 + 0x14);
  if (uVar6 < param_2) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar5 = *(uint *)((long)param_1 + 0xc);
    uVar4 = uVar6;
    if (uVar5 < uVar2) {
      do {
        while (uVar5 < uVar2) {
          uVar5 = uVar5 + 1;
          *(uint *)((long)param_1 + 0xc) = uVar5;
          uVar6 = uVar4 + 8;
          uVar3 = (uint)*(byte *)(*param_1 + (ulong)(uVar2 - uVar5)) << (ulong)(uVar4 & 0x1f) |
                  uVar3;
          bVar1 = 0x10 < (int)uVar4;
          uVar4 = uVar6;
          if (bVar1) goto LAB_00e65240;
        }
        uVar6 = uVar4 + 8;
        uVar3 = 0 << (ulong)(uVar4 & 0x1f) | uVar3;
        bVar1 = (int)uVar4 < 0x11;
        uVar4 = uVar6;
      } while (bVar1);
    }
    else {
      uVar5 = uVar6;
      if ((int)uVar6 < 0x12) {
        uVar5 = 0x11;
      }
      uVar6 = uVar6 + ((uVar5 - uVar6) + 7 & 0xfffffff8) + 8;
    }
  }
LAB_00e65240:
  *(uint *)(param_1 + 2) = uVar3 >> (ulong)(param_2 & 0x1f);
  *(uint *)((long)param_1 + 0x14) = uVar6 - param_2;
  *(uint *)(param_1 + 3) = *(int *)(param_1 + 3) + param_2;
  return uVar3 & (-1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
}


