// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24214
// Entry Point: 00f24214
// Size: 192 bytes
// Signature: undefined FUN_00f24214(void)


ulong FUN_00f24214(undefined8 param_1,undefined8 *param_2,long *param_3,uint param_4,double *param_5
                  ,uint param_6)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  undefined8 uVar10;
  
  if (((1 < (int)param_6) && (*(int *)((long)param_3 + 0xc) == 5)) &&
     (*(int *)((long)param_5 + 0xc) == 3)) {
    iVar5 = (int)*param_5;
    iVar7 = iVar5;
    if (2 < param_6) {
      if (*(int *)((long)param_5 + 0x1c) == 3) {
        iVar7 = (int)param_5[2];
      }
      else {
        iVar7 = 0;
      }
    }
    iVar4 = iVar5 + -1;
    if ((iVar5 < 1) || (iVar7 < iVar5)) {
      return 0xffffffff;
    }
    lVar6 = *param_3;
    if (iVar7 <= *(int *)(lVar6 + 0x14)) {
      uVar2 = (iVar7 - iVar5) + 1;
      uVar3 = (ulong)uVar2;
      if ((int)param_4 < 0) {
        param_4 = 1;
      }
      if (uVar2 == param_4) {
        uVar8 = uVar3;
        if (iVar7 - iVar5 < 0) {
          return uVar3;
        }
        do {
          lVar1 = (long)iVar4;
          iVar4 = iVar4 + 1;
          uVar8 = uVar8 - 1;
          bVar9 = *(byte *)(lVar6 + lVar1 + 0x18);
          *(undefined4 *)((long)param_2 + 0xc) = 3;
          uVar10 = NEON_ucvtf((ulong)bVar9);
          *param_2 = uVar10;
          param_2 = param_2 + 2;
        } while (uVar8 != 0);
        return uVar3;
      }
    }
  }
  return 0xffffffff;
}


