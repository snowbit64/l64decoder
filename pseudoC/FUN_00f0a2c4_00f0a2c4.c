// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0a2c4
// Entry Point: 00f0a2c4
// Size: 276 bytes
// Signature: undefined FUN_00f0a2c4(void)


int FUN_00f0a2c4(long param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  
  uVar8 = *(uint *)(param_1 + 0x60);
  uVar5 = (ulong)uVar8;
  if ((int)uVar8 < 1) {
    iVar4 = -1;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) {
      iVar4 = 0;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x28);
      uVar3 = *(uint *)(param_1 + 0x78);
      if (uVar8 < 2) {
        uVar9 = 0;
        iVar12 = -1;
      }
      else {
        uVar10 = 0;
        uVar9 = uVar5 & 0xfffffffe;
        iVar12 = -1;
        iVar11 = -1;
        do {
          uVar8 = (uint)uVar10;
          pbVar1 = (byte *)(lVar6 + uVar10);
          uVar10 = uVar10 + 2;
          iVar4 = *(int *)(lVar7 + (long)(int)(uVar8 >> (ulong)(uVar3 & 0x1f)) * 4) + (uint)*pbVar1;
          iVar2 = *(int *)(lVar7 + (long)(int)(uVar8 + 1 >> (ulong)(uVar3 & 0x1f)) * 4) +
                  (uint)pbVar1[1];
          if (iVar4 <= iVar12) {
            iVar4 = iVar12;
          }
          if (iVar2 <= iVar11) {
            iVar2 = iVar11;
          }
          iVar12 = iVar4;
          iVar11 = iVar2;
        } while (uVar9 != uVar10);
        if (iVar4 <= iVar2) {
          iVar4 = iVar2;
        }
        iVar12 = iVar4;
        if (uVar9 == uVar5) goto LAB_00f0a39c;
      }
      do {
        uVar8 = (uint)uVar9;
        pbVar1 = (byte *)(lVar6 + uVar9);
        uVar9 = uVar9 + 1;
        iVar4 = *(int *)(lVar7 + (long)(int)(uVar8 >> (ulong)(uVar3 & 0x1f)) * 4) + (uint)*pbVar1;
        if (iVar4 <= iVar12) {
          iVar4 = iVar12;
        }
        iVar12 = iVar4;
      } while (uVar5 != uVar9);
    }
  }
LAB_00f0a39c:
  uVar5 = (ulong)*(uint *)(param_1 + 100);
  if (0 < (int)*(uint *)(param_1 + 100)) {
    puVar13 = *(undefined8 **)(param_1 + 0x18);
    iVar12 = iVar4;
    do {
      iVar4 = FUN_00f0a2c4(*puVar13);
      if (iVar4 <= iVar12) {
        iVar4 = iVar12;
      }
      uVar5 = uVar5 - 1;
      puVar13 = puVar13 + 1;
      iVar12 = iVar4;
    } while (uVar5 != 0);
  }
  return iVar4;
}


