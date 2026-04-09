// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc17b0
// Entry Point: 00dc17b0
// Size: 124 bytes
// Signature: undefined FUN_00dc17b0(void)


void FUN_00dc17b0(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  
  bVar3 = *param_3;
  lVar6 = *(long *)(param_1 + 8);
  uVar11 = (uint)*param_2 + (uint)bVar3;
  *param_2 = (byte)uVar11;
  if (1 < lVar6) {
    pbVar8 = param_2 + 1;
    pbVar10 = param_3 + 1;
    do {
      uVar7 = (uint)bVar3;
      bVar3 = *pbVar10;
      uVar4 = (uVar11 & 0xff) - uVar7;
      uVar5 = bVar3 - uVar7;
      uVar1 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar1 = uVar5;
      }
      uVar2 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar2 = uVar4;
      }
      uVar5 = uVar5 + uVar4;
      uVar4 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar4 = uVar5;
      }
      uVar5 = (uint)bVar3;
      if (uVar1 <= uVar2) {
        uVar5 = uVar11 & 0xff;
        uVar2 = uVar1;
      }
      if (uVar2 <= uVar4) {
        uVar7 = uVar5;
      }
      uVar11 = uVar7 + *pbVar8;
      pbVar9 = pbVar8 + 1;
      *pbVar8 = (byte)uVar11;
      pbVar8 = pbVar9;
      pbVar10 = pbVar10 + 1;
    } while (pbVar9 < param_2 + lVar6);
  }
  return;
}


