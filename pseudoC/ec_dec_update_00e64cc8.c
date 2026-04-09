// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_dec_update
// Entry Point: 00e64cc8
// Size: 296 bytes
// Signature: undefined ec_dec_update(void)


void ec_dec_update(long *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *(int *)(param_1 + 5) * (param_4 - param_3);
  uVar2 = *(int *)((long)param_1 + 0x24) - iVar6;
  *(uint *)((long)param_1 + 0x24) = uVar2;
  if (param_2 == 0) {
    uVar3 = *(int *)(param_1 + 4) - iVar6;
    *(uint *)(param_1 + 4) = uVar3;
  }
  else {
    uVar3 = *(int *)(param_1 + 5) * (param_3 - param_2);
    *(uint *)(param_1 + 4) = uVar3;
  }
  if (uVar3 < 0x800001) {
    iVar6 = *(int *)(param_1 + 3);
    uVar4 = *(uint *)((long)param_1 + 0x1c);
    uVar5 = *(uint *)((long)param_1 + 0x2c);
    if (*(uint *)(param_1 + 1) <= uVar4) {
      iVar6 = iVar6 + 8;
      uVar2 = ((uVar2 & 0x7fffff) << 8 | (uVar5 & 1) << 7) ^ 0xff;
      uVar4 = uVar3 << 8;
      if (uVar3 < 0x8001) {
        do {
          uVar3 = uVar4 << 8;
          uVar2 = (uVar2 & 0x7fffff) << 8 | 0xff;
          iVar6 = iVar6 + 8;
          bVar1 = uVar4 < 0x8001;
          uVar4 = uVar3;
        } while (bVar1);
        *(int *)(param_1 + 3) = iVar6;
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
        *(uint *)(param_1 + 4) = uVar3;
        *(uint *)((long)param_1 + 0x24) = uVar2;
        return;
      }
      *(int *)(param_1 + 3) = iVar6;
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      *(uint *)(param_1 + 4) = uVar3 << 8;
      *(uint *)((long)param_1 + 0x24) = uVar2;
      return;
    }
    do {
      iVar6 = iVar6 + 8;
      *(int *)(param_1 + 3) = iVar6;
      *(uint *)(param_1 + 4) = uVar3 << 8;
      if (uVar4 < *(uint *)(param_1 + 1)) {
        *(uint *)((long)param_1 + 0x1c) = uVar4 + 1;
        uVar7 = (uint)*(byte *)(*param_1 + (ulong)uVar4);
        uVar4 = uVar4 + 1;
      }
      else {
        uVar7 = 0;
      }
      *(uint *)((long)param_1 + 0x2c) = uVar7;
      uVar2 = ((uVar7 | uVar5 << 8) >> 1 & 0xff | (uVar2 & 0x7fffff) << 8) ^ 0xff;
      *(uint *)((long)param_1 + 0x24) = uVar2;
      bVar1 = uVar3 < 0x8001;
      uVar3 = uVar3 << 8;
      uVar5 = uVar7;
    } while (bVar1);
  }
  return;
}


