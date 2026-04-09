// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d13984
// Entry Point: 00d13984
// Size: 448 bytes
// Signature: undefined FUN_00d13984(void)


void FUN_00d13984(ulong **param_1,ulong **param_2,long *param_3,char *param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar3 = *param_2;
  uVar2 = *(uint *)(param_2 + 1);
  uVar5 = (ulong)uVar2;
  uVar6 = (ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar3) * 8;
  uVar4 = uVar6 - uVar5;
  if (*param_4 == '\0') {
    if (uVar2 != 0) {
      uVar7 = (ulong)(0x40 - uVar2);
      uVar1 = uVar4;
      if (uVar7 <= uVar4) {
        uVar1 = uVar7;
      }
      uVar5 = 0xffffffffffffffffU >> (uVar7 - uVar1 & 0x3f) & -1L << (uVar5 & 0x3f) &
              (*puVar3 ^ 0xffffffffffffffff);
      if (uVar5 != 0) goto LAB_00d13a60;
      if (uVar4 <= uVar7) goto LAB_00d13ae4;
      uVar4 = uVar4 - uVar1;
      puVar3 = puVar3 + 1;
    }
    for (; 0x3f < uVar4; uVar4 = uVar4 - 0x40) {
      if (*puVar3 != 0xffffffffffffffff) {
        uVar6 = ~*puVar3;
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        *param_1 = puVar3;
        *(int *)(param_1 + 1) = (int)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
        return;
      }
      puVar3 = puVar3 + 1;
    }
    if (uVar4 == 0) goto LAB_00d13ad8;
    uVar6 = 0xffffffffffffffffU >> (-uVar4 & 0x3f) & (*puVar3 ^ 0xffffffffffffffff);
  }
  else {
    if (uVar2 != 0) {
      uVar7 = (ulong)(0x40 - uVar2);
      uVar1 = uVar4;
      if (uVar7 <= uVar4) {
        uVar1 = uVar7;
      }
      uVar5 = 0xffffffffffffffffU >> (uVar7 - uVar1 & 0x3f) & -1L << (uVar5 & 0x3f) & *puVar3;
      if (uVar5 != 0) {
LAB_00d13a60:
        uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        *param_1 = puVar3;
        *(int *)(param_1 + 1) = (int)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
        return;
      }
      if (uVar4 <= uVar7) {
LAB_00d13ae4:
        if ((long)uVar4 < 0) {
          if (-1 < (long)(uVar6 - 0x3f)) {
            uVar6 = uVar6 - 0x3f;
          }
          *param_1 = puVar3 + ((long)uVar6 >> 6);
          *(uint *)(param_1 + 1) = uVar2 + (int)uVar4 & 0x3f;
          return;
        }
        *param_1 = puVar3 + (uVar6 >> 6);
        *(uint *)(param_1 + 1) = uVar2 + (int)uVar4 & 0x3f;
        return;
      }
      uVar4 = uVar4 - uVar1;
      puVar3 = puVar3 + 1;
    }
    for (; 0x3f < uVar4; uVar4 = uVar4 - 0x40) {
      uVar6 = *puVar3;
      if (uVar6 != 0) goto LAB_00d13ac4;
      puVar3 = puVar3 + 1;
    }
    if (uVar4 == 0) goto LAB_00d13ad8;
    uVar6 = *puVar3 & 0xffffffffffffffffU >> (-uVar4 & 0x3f);
  }
  if (uVar6 != 0) {
LAB_00d13ac4:
    uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    *param_1 = puVar3;
    *(int *)(param_1 + 1) = (int)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
    return;
  }
LAB_00d13ad8:
  *param_1 = puVar3;
  *(int *)(param_1 + 1) = (int)uVar4;
  return;
}


