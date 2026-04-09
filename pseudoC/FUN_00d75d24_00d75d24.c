// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d75d24
// Entry Point: 00d75d24
// Size: 364 bytes
// Signature: undefined FUN_00d75d24(void)


void FUN_00d75d24(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  short **ppsVar10;
  undefined4 *puVar11;
  short *psVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + 0x230);
  if (*(long *)(lVar13 + 0x20) == 0) goto LAB_00d75e80;
  if (((*(char *)(param_1 + 0x61) == '\0') || (*(char *)(param_1 + 0x129) == '\0')) ||
     (*(long *)(param_1 + 0xb0) == 0)) {
LAB_00d75e74:
    pcVar7 = FUN_00d7614c;
  }
  else {
    lVar6 = *(long *)(lVar13 + 0xd8);
    if (lVar6 == 0) {
      lVar6 = (***(code ***)(param_1 + 8))(param_1,1,(long)*(int *)(param_1 + 0x38) * 0x18);
      *(long *)(lVar13 + 0xd8) = lVar6;
      if (0 < *(int *)(param_1 + 0x38)) goto LAB_00d75da0;
      goto LAB_00d75e74;
    }
    if (*(int *)(param_1 + 0x38) < 1) goto LAB_00d75e74;
LAB_00d75da0:
    lVar8 = 0;
    lVar9 = 0;
    bVar5 = false;
    puVar11 = (undefined4 *)(lVar6 + 0xc);
    ppsVar10 = (short **)(*(long *)(param_1 + 0x120) + 0x50);
    do {
      psVar12 = *ppsVar10;
      if (((((psVar12 == (short *)0x0) || (*psVar12 == 0)) ||
           ((psVar12[1] == 0 || ((psVar12[8] == 0 || (psVar12[0x10] == 0)))))) || (psVar12[9] == 0))
         || ((psVar12[2] == 0 || (*(int *)(*(long *)(param_1 + 0xb0) + lVar8) < 0))))
      goto LAB_00d75e74;
      lVar6 = *(long *)(param_1 + 0xb0) + lVar8;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x100;
      ppsVar10 = ppsVar10 + 0xc;
      puVar11[-2] = *(undefined4 *)(lVar6 + 4);
      uVar1 = *(uint *)(lVar6 + 4);
      puVar11[-1] = *(undefined4 *)(lVar6 + 8);
      uVar2 = *(uint *)(lVar6 + 8);
      *puVar11 = *(undefined4 *)(lVar6 + 0xc);
      uVar3 = *(uint *)(lVar6 + 0xc);
      puVar11[1] = *(undefined4 *)(lVar6 + 0x10);
      uVar4 = *(uint *)(lVar6 + 0x10);
      puVar11[2] = *(undefined4 *)(lVar6 + 0x14);
      puVar11 = puVar11 + 6;
      if ((*(uint *)(lVar6 + 0x14) | uVar4 | uVar3 | uVar2 | uVar1) != 0) {
        bVar5 = true;
      }
    } while (lVar9 < *(int *)(param_1 + 0x38));
    if (!bVar5) goto LAB_00d75e74;
    pcVar7 = FUN_00d76614;
  }
  *(code **)(lVar13 + 0x18) = pcVar7;
LAB_00d75e80:
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}


