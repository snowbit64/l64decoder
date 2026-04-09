// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_dec_icdf
// Entry Point: 00e64f00
// Size: 284 bytes
// Signature: undefined ec_dec_icdf(void)


int ec_dec_icdf(long *param_1,byte *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = -1;
  uVar5 = *(uint *)(param_1 + 4);
  do {
    uVar4 = uVar5;
    iVar2 = iVar2 + 1;
    uVar5 = (*(uint *)(param_1 + 4) >> (ulong)(param_3 & 0x1f)) * (uint)*param_2;
    uVar3 = *(uint *)((long)param_1 + 0x24) - uVar5;
    param_2 = param_2 + 1;
  } while (*(uint *)((long)param_1 + 0x24) < uVar5);
  uVar4 = uVar4 - uVar5;
  *(uint *)(param_1 + 4) = uVar4;
  *(uint *)((long)param_1 + 0x24) = uVar3;
  if (uVar4 < 0x800001) {
    iVar7 = *(int *)(param_1 + 3);
    uVar5 = *(uint *)((long)param_1 + 0x1c);
    uVar6 = *(uint *)((long)param_1 + 0x2c);
    if (*(uint *)(param_1 + 1) <= uVar5) {
      iVar7 = iVar7 + 8;
      uVar5 = ((uVar3 & 0x7fffff) << 8 | (uVar6 & 1) << 7) ^ 0xff;
      uVar3 = uVar4 * 0x100;
      if (0x8000 < uVar4) {
        *(int *)(param_1 + 3) = iVar7;
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
        *(uint *)(param_1 + 4) = uVar4 * 0x100;
        *(uint *)((long)param_1 + 0x24) = uVar5;
        return iVar2;
      }
      do {
        uVar4 = uVar3 << 8;
        uVar5 = (uVar5 & 0x7fffff) << 8 | 0xff;
        iVar7 = iVar7 + 8;
        bVar1 = uVar3 < 0x8001;
        uVar3 = uVar4;
      } while (bVar1);
      *(int *)(param_1 + 3) = iVar7;
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      *(uint *)(param_1 + 4) = uVar4;
      *(uint *)((long)param_1 + 0x24) = uVar5;
      return iVar2;
    }
    do {
      iVar7 = iVar7 + 8;
      *(int *)(param_1 + 3) = iVar7;
      *(uint *)(param_1 + 4) = uVar4 << 8;
      if (uVar5 < *(uint *)(param_1 + 1)) {
        *(uint *)((long)param_1 + 0x1c) = uVar5 + 1;
        uVar8 = (uint)*(byte *)(*param_1 + (ulong)uVar5);
        uVar5 = uVar5 + 1;
      }
      else {
        uVar8 = 0;
      }
      *(uint *)((long)param_1 + 0x2c) = uVar8;
      uVar3 = ((uVar8 | uVar6 << 8) >> 1 & 0xff | (uVar3 & 0x7fffff) << 8) ^ 0xff;
      *(uint *)((long)param_1 + 0x24) = uVar3;
      bVar1 = uVar4 < 0x8001;
      uVar4 = uVar4 << 8;
      uVar6 = uVar8;
    } while (bVar1);
  }
  return iVar2;
}


