// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dbbe90
// Entry Point: 00dbbe90
// Size: 456 bytes
// Signature: undefined FUN_00dbbe90(void)


void FUN_00dbbe90(uint *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  
  bVar4 = *(byte *)((long)param_1 + 0x11);
  if ((7 < bVar4) && (bVar5 = *(byte *)(param_1 + 4), (bVar5 >> 1 & 1) == 0)) {
    uVar3 = *param_1;
    uVar6 = (ulong)uVar3;
    if (bVar5 == 4) {
      if (bVar4 == 8) {
        if (uVar3 != 0) {
          puVar8 = (undefined *)(param_2 + uVar6 * 2 + -1);
          puVar10 = puVar8 + uVar6 * 2;
          uVar9 = uVar6;
          do {
            uVar3 = (int)uVar9 - 1;
            uVar9 = (ulong)uVar3;
            *puVar10 = *puVar8;
            puVar10[-1] = puVar8[-1];
            puVar10[-2] = puVar8[-1];
            puVar1 = puVar8 + -1;
            puVar8 = puVar8 + -2;
            puVar10[-3] = *puVar1;
            puVar10 = puVar10 + -4;
          } while (uVar3 != 0);
        }
      }
      else if (uVar3 != 0) {
        puVar8 = (undefined *)(param_2 + uVar6 * 4 + -1);
        puVar10 = puVar8 + uVar6 * 4;
        uVar9 = uVar6;
        do {
          uVar3 = (int)uVar9 - 1;
          uVar9 = (ulong)uVar3;
          *puVar10 = *puVar8;
          puVar10[-1] = puVar8[-1];
          puVar10[-2] = puVar8[-2];
          puVar10[-3] = puVar8[-3];
          puVar10[-4] = puVar8[-2];
          puVar10[-5] = puVar8[-3];
          puVar10[-6] = puVar8[-2];
          puVar1 = puVar8 + -3;
          puVar8 = puVar8 + -4;
          puVar10[-7] = *puVar1;
          puVar10 = puVar10 + -8;
        } while (uVar3 != 0);
      }
    }
    else if (bVar5 == 0) {
      if (bVar4 == 8) {
        if (uVar3 != 0) {
          param_2 = param_2 + -1;
          lVar7 = uVar6 * 3;
          uVar9 = uVar6;
          do {
            puVar8 = (undefined *)(param_2 + lVar7);
            lVar7 = lVar7 + -3;
            *puVar8 = *(undefined *)(param_2 + uVar9);
            puVar8[-1] = *(undefined *)(param_2 + uVar9);
            puVar10 = (undefined *)(param_2 + uVar9);
            uVar9 = uVar9 - 1;
            puVar8[-2] = *puVar10;
          } while ((int)uVar9 != 0);
        }
      }
      else if (uVar3 != 0) {
        puVar8 = (undefined *)(param_2 + uVar6 * 2 + -1);
        puVar10 = puVar8 + uVar6 * 4;
        uVar9 = uVar6;
        do {
          uVar3 = (int)uVar9 - 1;
          uVar9 = (ulong)uVar3;
          *puVar10 = *puVar8;
          puVar10[-1] = puVar8[-1];
          puVar10[-2] = *puVar8;
          puVar10[-3] = puVar8[-1];
          puVar10[-4] = *puVar8;
          puVar1 = puVar8 + -1;
          puVar8 = puVar8 + -2;
          puVar10[-5] = *puVar1;
          puVar10 = puVar10 + -6;
        } while (uVar3 != 0);
      }
    }
    iVar2 = *(byte *)((long)param_1 + 0x12) + 2;
    uVar3 = (uint)*(byte *)((long)param_1 + 0x11) * iVar2;
    *(char *)((long)param_1 + 0x12) = (char)iVar2;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
    *(char *)((long)param_1 + 0x13) = (char)uVar3;
    if ((uVar3 & 0xff) < 8) {
      uVar6 = ((ulong)uVar3 & 0xff) * uVar6 + 7 >> 3;
    }
    else {
      uVar6 = (uVar3 >> 3 & 0x1f) * uVar6;
    }
    *(ulong *)(param_1 + 2) = uVar6;
  }
  return;
}


