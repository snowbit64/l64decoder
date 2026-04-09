// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d5ff30
// Entry Point: 00d5ff30
// Size: 632 bytes
// Signature: undefined FUN_00d5ff30(void)


undefined8 FUN_00d5ff30(long param_1,long *param_2)

{
  bool bVar1;
  short sVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  int *piVar16;
  
  lVar9 = *(long *)(param_1 + 0x220);
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar5 = *(int *)(lVar9 + 0x60);
    if (iVar5 == 0) {
      FUN_00d60668(param_1,*(undefined4 *)(lVar9 + 100));
      iVar5 = *(int *)(param_1 + 0x130);
      *(uint *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1U & 7;
    }
    *(int *)(lVar9 + 0x60) = iVar5 + -1;
  }
  lVar6 = *(long *)(param_1 + 0x1d0);
  lVar8 = 0;
  iVar5 = *(int *)(param_1 + 0x1c0);
  lVar10 = *param_2;
  lVar7 = (long)*(int *)(*(long *)(param_1 + 0x168) + 0x18);
  do {
    sVar2 = *(short *)(lVar10 + (long)*(int *)(lVar6 + (long)iVar5 * 4 + lVar8 * 4) * 2);
    if (sVar2 < 0) {
      iVar11 = -(int)sVar2 >> (*(uint *)(param_1 + 0x1c8) & 0x1f);
    }
    else {
      iVar11 = (int)sVar2 >> (*(uint *)(param_1 + 0x1c8) & 0x1f);
    }
    if (iVar11 != 0) {
      iVar11 = iVar5 + (int)lVar8;
      if (iVar11 < 1) {
        plVar14 = (long *)(lVar9 + lVar7 * 8 + 0xe8);
        iVar15 = *(int *)(param_1 + 0x1bc) + -1;
        iVar12 = iVar11;
        if (iVar11 < *(int *)(param_1 + 0x1bc)) goto LAB_00d60148;
        goto LAB_00d60054;
      }
      uVar13 = iVar5 + lVar8 & 0xffffffff;
      goto LAB_00d60004;
    }
    lVar8 = lVar8 + -1;
  } while (iVar5 + (int)lVar8 != 0);
  iVar11 = 0;
  goto LAB_00d60038;
code_r0x00d600f4:
  if (uVar4 == 1) {
    FUN_00d60800(param_1,lVar7,1);
    uVar4 = 0;
  }
  else {
LAB_00d60060:
    uVar4 = uVar4 & 1;
    lVar8 = lVar7 + 1;
  }
LAB_00d6006c:
  FUN_00d60800(param_1,lVar8,uVar4);
  if (iVar11 <= iVar15) goto LAB_00d60144;
  goto LAB_00d60078;
LAB_00d60144:
  iVar5 = *(int *)(param_1 + 0x1c0);
  goto LAB_00d60148;
  while (uVar3 = uVar13 - 1, bVar1 = 0 < (long)uVar13, uVar13 = uVar3, uVar3 != 0 && bVar1) {
LAB_00d60004:
    sVar2 = *(short *)(lVar10 + (long)*(int *)(lVar6 + uVar13 * 4) * 2);
    if (sVar2 < 0) {
      iVar15 = -(int)sVar2 >> (*(uint *)(param_1 + 0x1c4) & 0x1f);
    }
    else {
      iVar15 = (int)sVar2 >> (*(uint *)(param_1 + 0x1c4) & 0x1f);
    }
    if (iVar15 != 0) goto LAB_00d6003c;
  }
LAB_00d60038:
  uVar13 = 0;
LAB_00d6003c:
  plVar14 = (long *)(lVar9 + lVar7 * 8 + 0xe8);
  iVar15 = *(int *)(param_1 + 0x1bc) + -1;
  iVar12 = (int)uVar13;
  if (*(int *)(param_1 + 0x1bc) <= iVar11) {
LAB_00d60054:
LAB_00d60078:
    lVar7 = *plVar14 + (long)iVar15 + (long)iVar15 * 2;
    if (iVar12 <= iVar15) {
      FUN_00d60800(param_1,lVar7,0);
    }
    piVar16 = (int *)(lVar6 + 4 + (long)iVar15 * 4);
    lVar7 = lVar7 + 1;
    do {
      iVar15 = iVar15 + 1;
      iVar5 = (int)*(short *)(lVar10 + (long)*piVar16 * 2);
      lVar8 = lVar9 + 0x168;
      if (iVar5 < 0) {
        uVar4 = -iVar5 >> (*(uint *)(param_1 + 0x1c8) & 0x1f);
        if (uVar4 != 0) {
          if (uVar4 != 1) goto LAB_00d60060;
          FUN_00d60800(param_1,lVar7,1);
          uVar4 = 1;
          goto LAB_00d6006c;
        }
      }
      else {
        uVar4 = iVar5 >> (*(uint *)(param_1 + 0x1c8) & 0x1f);
        if (uVar4 != 0) goto code_r0x00d600f4;
      }
      FUN_00d60800(param_1,lVar7,0);
      piVar16 = piVar16 + 1;
      lVar7 = lVar7 + 3;
    } while( true );
  }
LAB_00d60148:
  if (iVar15 < iVar5) {
    FUN_00d60800(param_1,*plVar14 + (long)(iVar15 * 3),1);
  }
  return 1;
}


