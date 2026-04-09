// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d96f80
// Entry Point: 00d96f80
// Size: 1056 bytes
// Signature: undefined FUN_00d96f80(void)


undefined8 FUN_00d96f80(long param_1,uint param_2,code **param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x3d358);
  if (uVar1 < 2) {
    uVar6 = 0;
  }
  else if (uVar1 == 2) {
    uVar6 = 2;
  }
  else if (uVar1 < 5) {
    uVar6 = 4;
  }
  else if (uVar1 < 9) {
    uVar6 = 6;
  }
  else if (uVar1 < 0x11) {
    uVar6 = 8;
  }
  else if (uVar1 < 0x21) {
    uVar6 = 10;
  }
  else if (uVar1 < 0x41) {
    uVar6 = 0xc;
  }
  else if (uVar1 < 0x81) {
    uVar6 = 0xe;
  }
  else if (uVar1 < 0x101) {
    uVar6 = 0x10;
  }
  else if (uVar1 < 0x201) {
    uVar6 = 0x12;
  }
  else if (uVar1 < 0x401) {
    uVar6 = 0x14;
  }
  else if (uVar1 < 0x801) {
    uVar6 = 0x16;
  }
  else if (uVar1 < 0x1001) {
    uVar6 = 0x18;
  }
  else if (uVar1 < 0x2001) {
    uVar6 = 0x1a;
  }
  else if (uVar1 < 0x4001) {
    uVar6 = 0x1c;
  }
  else if (uVar1 < 0x8001) {
    uVar6 = 0x1e;
  }
  else if (uVar1 < 0x10001) {
    uVar6 = 0x20;
  }
  else if (uVar1 < 0x20001) {
    uVar6 = 0x22;
  }
  else if (uVar1 < 0x40001) {
    uVar6 = 0x24;
  }
  else if (uVar1 < 0x80001) {
    uVar6 = 0x26;
  }
  else if (uVar1 < 0x100001) {
    uVar6 = 0x28;
  }
  else if (uVar1 < 0x200001) {
    uVar6 = 0x2a;
  }
  else if (uVar1 < 0x400001) {
    uVar6 = 0x2c;
  }
  else if (uVar1 < 0x800001) {
    uVar6 = 0x2e;
  }
  else if (uVar1 < 0x1000001) {
    uVar6 = 0x30;
  }
  else if (uVar1 < 0x2000001) {
    uVar6 = 0x32;
  }
  else if (uVar1 < 0x4000001) {
    uVar6 = 0x34;
  }
  else if (uVar1 < 0x8000001) {
    uVar6 = 0x36;
  }
  else if (uVar1 < 0x10000001) {
    uVar6 = 0x38;
  }
  else if (uVar1 < 0x20000001) {
    uVar6 = 0x3a;
  }
  else {
    uVar6 = 0x3e;
    if (uVar1 < 0x40000001) {
      uVar6 = 0x3c;
    }
  }
  *(undefined4 *)(param_1 + 0x33bd0) = uVar6;
  *(undefined4 *)(param_1 + 0x3d34c) = 0;
  *(undefined4 *)(param_1 + 0x3d354) = 0;
  if (*(long *)(param_1 + 0x3d318) == 0) {
    lVar5 = (**param_3)(param_3,0x10000);
    *(long *)(param_1 + 0x3d318) = lVar5;
    if (lVar5 == 0) {
      return 2;
    }
    *(long *)(param_1 + 0x3d310) = lVar5 + 0x10000;
    lVar5 = *(long *)(param_1 + 0x33be8);
    uVar1 = *(int *)(param_1 + 0x33bd8) + *(int *)(param_1 + 0x33bd4);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x33be8);
    uVar1 = *(int *)(param_1 + 0x33bd8) + *(int *)(param_1 + 0x33bd4);
  }
  if (((lVar5 == 0) || (*(long *)(param_1 + 0x3d368) == 0)) ||
     (*(uint *)(param_1 + 0x3d2e4) != uVar1)) {
    (*param_3[1])(param_3);
    (*param_3[1])(param_3,*(undefined8 *)(param_1 + 0x3d368));
    pcVar7 = *param_3;
    uVar2 = 0x300 << (ulong)(uVar1 & 0x1f);
    uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    *(undefined8 *)(param_1 + 0x33be8) = 0;
    *(undefined8 *)(param_1 + 0x3d368) = 0;
    uVar4 = (*pcVar7)(param_3,uVar8);
    pcVar7 = *param_3;
    *(undefined8 *)(param_1 + 0x33be8) = uVar4;
    lVar5 = (*pcVar7)(param_3,uVar8);
    *(long *)(param_1 + 0x3d368) = lVar5;
    if ((*(long *)(param_1 + 0x33be8) == 0) || (lVar5 == 0)) {
      (*param_3[1])(param_3);
      (*param_3[1])(param_3,*(undefined8 *)(param_1 + 0x3d368));
      *(undefined8 *)(param_1 + 0x33be8) = 0;
      *(undefined8 *)(param_1 + 0x3d368) = 0;
      return 2;
    }
    *(uint *)(param_1 + 0x3d2e4) = uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x3d358);
  lVar5 = param_1 + 0x38;
  iVar3 = param_2 - uVar1;
  if (param_2 <= uVar1 + 0x1000) {
    iVar3 = 0x1000;
  }
  *(uint *)(param_1 + 0xac) = (uint)(0x1000000 < uVar1);
  iVar3 = MatchFinder_Create(lVar5,uVar1,iVar3,*(undefined4 *)(param_1 + 0x32f70),0x111,param_4);
  if (iVar3 != 0) {
    *(long *)(param_1 + 0x30) = lVar5;
    MatchFinder_CreateVTable(lVar5,param_1);
    LzmaEnc_Init(param_1);
    LzmaEnc_InitPrices(param_1);
    *(undefined8 *)(param_1 + 0x3d340) = 0;
    return 0;
  }
  return 2;
}


