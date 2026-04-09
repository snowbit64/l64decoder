// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e80ea4
// Entry Point: 00e80ea4
// Size: 280 bytes
// Signature: undefined FUN_00e80ea4(void)


int FUN_00e80ea4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar4 = 0;
  if (param_6 != 0) {
    uVar4 = param_1 / param_6;
  }
  uVar1 = param_3 + param_5 * 2 + 1;
  if ((int)uVar4 < 12000) {
    uVar8 = 1;
  }
  else if (uVar4 >> 7 < 0x7d) {
    uVar8 = 2;
  }
  else if (uVar4 >> 5 < 0x271) {
    uVar8 = 3;
  }
  else if (uVar4 >> 6 < 0x177) {
    uVar8 = 4;
  }
  else if (uVar4 >> 8 < 0x7d) {
    uVar8 = 5;
  }
  else {
    if (0x7c < uVar4 >> 9) {
      iVar6 = (&DAT_00568ed0)[(int)uVar1] + (uVar4 - 64000 >> 1);
      goto LAB_00e80f68;
    }
    uVar8 = 6;
  }
  uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  iVar2 = (&DAT_00568e58)[(ulong)(uVar8 - 1) * 5];
  iVar3 = (&DAT_00568e58)[(ulong)uVar8 * 5];
  iVar5 = iVar3 - iVar2;
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = (int)((uVar4 - iVar2) * *(int *)((long)(&DAT_00568e58 + (ulong)uVar8 * 5) + uVar7) +
                 (iVar3 - uVar4) * *(int *)((long)(&DAT_00568e58 + (ulong)(uVar8 - 1) * 5) + uVar7))
            / iVar5;
  }
LAB_00e80f68:
  iVar2 = iVar6 + 100;
  if (param_4 != 0) {
    iVar2 = iVar6;
  }
  iVar6 = iVar2 + 300;
  if (param_2 != 0x450) {
    iVar6 = iVar2;
  }
  iVar2 = iVar6 * param_6 + -1000;
  if ((int)uVar4 < 12000 || param_6 != 2) {
    iVar2 = iVar6 * param_6;
  }
  return iVar2;
}


