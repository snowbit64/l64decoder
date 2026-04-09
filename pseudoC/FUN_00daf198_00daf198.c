// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00daf198
// Entry Point: 00daf198
// Size: 544 bytes
// Signature: undefined FUN_00daf198(void)


void FUN_00daf198(ulong param_1,undefined *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined uVar9;
  
  uVar6 = (uint)(param_1 >> 0x18) & 0xff;
  uVar4 = (uint)param_1;
  if ((uVar6 - 0x7b < 0xffffffc6) || (uVar6 - 0x5b < 6)) {
    cVar2 = "A0123456789ABCDEF"[(param_1 >> 0x18 & 0xf) + 1];
    cVar3 = "A0123456789ABCDEF"[((param_1 & 0xffffffff) >> 0x1c) + 1];
    *param_2 = 0x5b;
    uVar5 = 4;
    param_2[3] = 0x5d;
    param_2[2] = cVar2;
    param_2[1] = cVar3;
  }
  else {
    uVar5 = 1;
    *param_2 = (char)(param_1 >> 0x18);
  }
  uVar6 = uVar4 >> 0x10 & 0xff;
  if ((uVar6 - 0x7b < 0xffffffc6) || (uVar6 - 0x5b < 6)) {
    cVar2 = "A0123456789ABCDEF"[((param_1 & 0xffffffff) >> 0x14 & 0xf) + 1];
    cVar3 = "A0123456789ABCDEF"[((param_1 & 0xffffffff) >> 0x10 & 0xf) + 1];
    uVar9 = 0x5d;
    param_2[uVar5] = 0x5b;
    (param_2 + uVar5)[1] = cVar2;
    param_2[uVar5 | 2] = cVar3;
    uVar5 = (ulong)((int)uVar5 + 3);
  }
  else {
    uVar9 = (undefined)(param_1 >> 0x10);
  }
  uVar6 = uVar4 >> 8 & 0xff;
  uVar7 = uVar5 + 1;
  param_2[uVar5] = uVar9;
  if ((uVar6 - 0x7b < 0xffffffc6) || (uVar6 - 0x5b < 6)) {
    cVar2 = "A0123456789ABCDEF"[((param_1 & 0xffffffff) >> 0xc & 0xf) + 1];
    param_2[uVar7] = 0x5b;
    cVar3 = "A0123456789ABCDEF"[((param_1 & 0xffffffff) >> 8 & 0xf) + 1];
    uVar9 = 0x5d;
    uVar7 = (ulong)((int)uVar5 + 4);
    param_2[uVar5 + 2] = cVar2;
    param_2[uVar5 + 3] = cVar3;
  }
  else {
    uVar9 = (undefined)(param_1 >> 8);
  }
  uVar5 = uVar7 + 1;
  param_2[uVar7] = uVar9;
  if (((uVar4 & 0xff) - 0x7b < 0xffffffc6) || ((uVar4 & 0xff) - 0x5b < 6)) {
    param_2[uVar5] = 0x5b;
    uVar5 = (ulong)((int)uVar7 + 4);
    cVar2 = "A0123456789ABCDEF"[(param_1 & 0xf) + 1];
    param_2[uVar7 + 2] = "A0123456789ABCDEF"[(param_1 >> 4 & 0xf) + 1];
    param_2[uVar7 + 3] = cVar2;
    lVar8 = uVar5 + 1;
    param_2[uVar5] = 0x5d;
  }
  else {
    lVar8 = uVar7 + 2;
    param_2[uVar5] = (char)param_1;
  }
  if (param_3 != 0) {
    param_2[uVar5 + 2] = 0x20;
    param_2[lVar8] = 0x3a;
    lVar8 = 0;
    do {
      if (*(char *)(param_3 + lVar8) == '\0') {
        param_2[(int)(uVar5 + 3) + (int)lVar8] = 0;
        return;
      }
      lVar1 = lVar8 + 1;
      param_2[lVar8 + uVar5 + 3] = *(char *)(param_3 + lVar8);
      lVar8 = lVar1;
    } while (lVar1 != 0xc3);
    param_2[(int)uVar5 + 0xc6] = 0;
    return;
  }
  param_2[lVar8] = 0;
  return;
}


