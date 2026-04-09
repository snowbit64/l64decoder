// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dd2a98
// Entry Point: 00dd2a98
// Size: 640 bytes
// Signature: undefined FUN_00dd2a98(void)


void FUN_00dd2a98(long param_1,uint param_2,int param_3,int *param_4,long param_5)

{
  ushort *puVar1;
  char cVar2;
  __compar_fn_t p_Var3;
  __compar_fn_t __compar;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  
  iVar5 = *param_4;
  iVar10 = param_3 - param_2;
  puVar1 = (ushort *)(param_5 + (long)iVar5 * 0x10);
  *param_4 = iVar5 + 1;
  if (iVar10 == 1) {
    puVar7 = (ushort *)(param_1 + (long)(int)param_2 * 0x10);
    *puVar1 = *puVar7;
    puVar1[1] = puVar7[1];
    puVar1[2] = puVar7[2];
    puVar1[3] = puVar7[3];
    puVar1[4] = puVar7[4];
    iVar10 = *(int *)(puVar7 + 6);
    puVar1[5] = puVar7[5];
  }
  else {
    puVar7 = (ushort *)(param_1 + (long)(int)param_2 * 0x10);
    uVar12 = *puVar7;
    *puVar1 = uVar12;
    uVar14 = puVar7[1];
    puVar1[1] = uVar14;
    uVar9 = puVar7[2];
    puVar1[2] = uVar9;
    uVar16 = puVar7[3];
    puVar1[3] = uVar16;
    uVar18 = puVar7[4];
    puVar1[4] = uVar18;
    uVar17 = puVar7[5];
    puVar1[5] = uVar17;
    if ((int)(param_2 + 1) < param_3) {
      iVar6 = ~param_2 + param_3;
      puVar7 = (ushort *)(param_1 + (long)(int)(param_2 + 1) * 0x10 + 6);
      do {
        uVar11 = puVar7[-3];
        if (uVar11 < uVar12) {
          *puVar1 = uVar11;
          uVar13 = puVar7[-2];
          if (uVar13 < uVar14) goto LAB_00dd2bf4;
LAB_00dd2bac:
          uVar8 = puVar7[-1];
          uVar13 = uVar14;
          if (uVar9 <= uVar8) goto LAB_00dd2bb8;
LAB_00dd2c08:
          puVar1[2] = uVar8;
          uVar15 = *puVar7;
          if (uVar16 < uVar15) goto LAB_00dd2c1c;
LAB_00dd2bc4:
          uVar12 = puVar7[1];
          uVar15 = uVar16;
          if (uVar12 <= uVar18) goto LAB_00dd2bd0;
LAB_00dd2c30:
          puVar1[4] = uVar12;
          uVar4 = puVar7[2];
          uVar18 = uVar12;
          uVar12 = uVar11;
          uVar9 = uVar8;
          uVar14 = uVar13;
          uVar16 = uVar15;
        }
        else {
          uVar13 = puVar7[-2];
          uVar11 = uVar12;
          if (uVar14 <= uVar13) goto LAB_00dd2bac;
LAB_00dd2bf4:
          puVar1[1] = uVar13;
          uVar8 = puVar7[-1];
          if (uVar8 < uVar9) goto LAB_00dd2c08;
LAB_00dd2bb8:
          uVar15 = *puVar7;
          uVar8 = uVar9;
          if (uVar15 <= uVar16) goto LAB_00dd2bc4;
LAB_00dd2c1c:
          puVar1[3] = uVar15;
          uVar12 = puVar7[1];
          if (uVar18 < uVar12) goto LAB_00dd2c30;
LAB_00dd2bd0:
          uVar4 = puVar7[2];
          uVar12 = uVar11;
          uVar9 = uVar8;
          uVar14 = uVar13;
          uVar16 = uVar15;
        }
        if (uVar17 < uVar4) {
          puVar1[5] = uVar4;
          uVar17 = uVar4;
        }
        iVar6 = iVar6 + -1;
        puVar7 = puVar7 + 8;
      } while (iVar6 != 0);
    }
    uVar18 = uVar18 - uVar14;
    uVar16 = uVar16 - uVar12;
    uVar12 = uVar18;
    if (uVar18 <= uVar16) {
      uVar12 = uVar16;
    }
    cVar2 = '\x02';
    if ((ushort)(uVar17 - uVar9) <= uVar12) {
      cVar2 = uVar16 < uVar18;
    }
    p_Var3 = FUN_00dd2d30;
    if (cVar2 != '\x01') {
      p_Var3 = FUN_00dd2d48;
    }
    __compar = FUN_00dd2d18;
    if (cVar2 != '\0') {
      __compar = p_Var3;
    }
    qsort((void *)(param_1 + (long)(int)param_2 * 0x10),(long)iVar10,0x10,__compar);
    if (iVar10 < 0) {
      iVar10 = iVar10 + 1;
    }
    iVar10 = param_2 + (iVar10 >> 1);
    FUN_00dd2a98(param_1,param_2,iVar10,param_4,param_5);
    FUN_00dd2a98(param_1,iVar10,param_3,param_4,param_5);
    iVar10 = iVar5 - *param_4;
  }
  *(int *)(param_5 + (long)iVar5 * 0x10 + 0xc) = iVar10;
  return;
}


