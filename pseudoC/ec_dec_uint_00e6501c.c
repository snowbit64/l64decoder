// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_dec_uint
// Entry Point: 00e6501c
// Size: 396 bytes
// Signature: undefined ec_dec_uint(void)


uint ec_dec_uint(long *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = param_2 - 1;
  if (uVar4 < 0x100) {
    uVar4 = 0;
    if (param_2 != 0) {
      uVar4 = *(uint *)(param_1 + 4) / param_2;
    }
    uVar9 = 0;
    if (uVar4 != 0) {
      uVar9 = *(uint *)((long)param_1 + 0x24) / uVar4;
    }
    *(uint *)(param_1 + 5) = uVar4;
    uVar8 = 0;
    if (uVar9 + 1 <= param_2) {
      uVar8 = param_2 - (uVar9 + 1);
    }
    ec_dec_update(param_1,uVar8,uVar8 + 1,param_2);
  }
  else {
    uVar5 = 0x18 - (int)LZCOUNT(uVar4);
    uVar9 = (uVar4 >> (ulong)(uVar5 & 0x1f)) + 1;
    uVar8 = 0;
    if (uVar9 != 0) {
      uVar8 = *(uint *)(param_1 + 4) / uVar9;
    }
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = *(uint *)((long)param_1 + 0x24) / uVar8;
    }
    *(uint *)(param_1 + 5) = uVar8;
    iVar2 = 0;
    if (uVar6 + 1 <= uVar9) {
      iVar2 = uVar9 - (uVar6 + 1);
    }
    ec_dec_update(param_1,iVar2,iVar2 + 1);
    uVar6 = *(uint *)(param_1 + 2);
    uVar9 = *(uint *)((long)param_1 + 0x14);
    if (uVar9 < uVar5) {
      uVar3 = *(uint *)(param_1 + 1);
      uVar8 = *(uint *)((long)param_1 + 0xc);
      uVar7 = uVar9;
      if (uVar8 < uVar3) {
        do {
          while (uVar8 < uVar3) {
            uVar8 = uVar8 + 1;
            *(uint *)((long)param_1 + 0xc) = uVar8;
            uVar9 = uVar7 + 8;
            uVar6 = (uint)*(byte *)(*param_1 + (ulong)(uVar3 - uVar8)) << (ulong)(uVar7 & 0x1f) |
                    uVar6;
            bVar1 = 0x10 < (int)uVar7;
            uVar7 = uVar9;
            if (bVar1) goto LAB_00e65158;
          }
          uVar9 = uVar7 + 8;
          uVar6 = 0 << (ulong)(uVar7 & 0x1f) | uVar6;
          bVar1 = (int)uVar7 < 0x11;
          uVar7 = uVar9;
        } while (bVar1);
      }
      else {
        uVar8 = uVar9;
        if ((int)uVar9 < 0x12) {
          uVar8 = 0x11;
        }
        uVar9 = uVar9 + ((uVar8 - uVar9) + 7 & 0xfffffff8) + 8;
      }
    }
LAB_00e65158:
    uVar8 = uVar6 & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU) | iVar2 << (ulong)(uVar5 & 0x1f);
    *(uint *)(param_1 + 2) = uVar6 >> (ulong)(uVar5 & 0x1f);
    *(uint *)((long)param_1 + 0x14) = uVar9 - uVar5;
    *(uint *)(param_1 + 3) = *(int *)(param_1 + 3) + uVar5;
    if (uVar4 < uVar8) {
      *(undefined4 *)(param_1 + 6) = 1;
      return uVar4;
    }
  }
  return uVar8;
}


