// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00efef44
// Entry Point: 00efef44
// Size: 872 bytes
// Signature: undefined FUN_00efef44(void)


bool FUN_00efef44(undefined (*param_1) [16],undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined (*pauVar14) [16];
  undefined auVar15 [16];
  
  uVar5 = (long)param_2 - (long)param_1 >> 3;
  if (uVar5 < 6) {
    switch(uVar5) {
    default:
      return true;
    case 2:
      if (*(uint *)*param_1 <= *(uint *)(param_2 + -1)) {
        return true;
      }
      uVar6 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = param_2[-1];
      param_2[-1] = uVar6;
      return true;
    case 3:
      goto switchD_00efef88_caseD_3;
    case 4:
      FUN_00efeddc(param_1,*param_1 + 8,param_1 + 1,param_2 + -1);
      return true;
    case 5:
      pauVar14 = param_1 + 1;
      puVar9 = (undefined8 *)(param_1[1] + 8);
      FUN_00efeddc(param_1,*param_1 + 8,pauVar14,puVar9);
      if (*(uint *)(param_1[1] + 8) <= *(uint *)(param_2 + -1)) {
        return true;
      }
      uVar6 = *puVar9;
      *puVar9 = param_2[-1];
      param_2[-1] = uVar6;
      if (*(uint *)*pauVar14 <= *(uint *)puVar9) {
        return true;
      }
      uVar6 = *puVar9;
      uVar1 = *(uint *)(*param_1 + 8);
      uVar8 = *(undefined8 *)*pauVar14;
      *(undefined8 *)*pauVar14 = uVar6;
      *puVar9 = uVar8;
      if (uVar1 <= (uint)uVar6) {
        return true;
      }
      uVar1 = *(uint *)*param_1;
      uVar8 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = uVar6;
      *(undefined8 *)param_1[1] = uVar8;
      if (uVar1 <= (uint)uVar6) {
        return true;
      }
      uVar8 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = uVar6;
      *(undefined8 *)(*param_1 + 8) = uVar8;
      return true;
    }
  }
  uVar1 = *(uint *)(*param_1 + 8);
  uVar2 = *(uint *)*param_1;
  uVar3 = *(uint *)param_1[1];
  uVar5 = (ulong)uVar3;
  if (uVar1 < uVar2) {
    uVar7 = *(ulong *)*param_1;
    if (uVar3 < uVar1) {
      *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
    }
    else {
      *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
      *(ulong *)(*param_1 + 8) = uVar7;
      if ((uint)uVar7 <= uVar3) goto LAB_00eff1e0;
      *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_1[1];
    }
    uVar5 = uVar7 & 0xffffffff;
    *(ulong *)param_1[1] = uVar7;
  }
  else if (uVar3 < uVar1) {
    uVar5 = *(ulong *)(*param_1 + 8);
    uVar6 = *(undefined8 *)param_1[1];
    *(undefined8 *)(*param_1 + 8) = uVar6;
    *(ulong *)param_1[1] = uVar5;
    if ((uint)uVar6 < uVar2) {
      uVar8 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = uVar6;
      *(undefined8 *)(*param_1 + 8) = uVar8;
    }
  }
LAB_00eff1e0:
  puVar9 = (undefined8 *)(param_1[1] + 8);
  if (puVar9 == param_2) {
    return true;
  }
  lVar11 = 0;
  iVar12 = 0;
  puVar10 = puVar9;
  if ((uint)uVar5 <= *(uint *)puVar9) goto LAB_00eff268;
  do {
    uVar6 = *puVar9;
    lVar4 = lVar11;
    do {
      lVar13 = lVar4;
      *(undefined8 *)(param_1[1] + lVar13 + 8) = *(undefined8 *)(param_1[1] + lVar13);
      pauVar14 = param_1;
      if (lVar13 == -0x10) goto LAB_00eff258;
      lVar4 = lVar13 + -8;
    } while ((uint)uVar6 < *(uint *)(*param_1 + lVar13 + 8));
    pauVar14 = (undefined (*) [16])(param_1[1] + lVar13);
LAB_00eff258:
    iVar12 = iVar12 + 1;
    *(undefined8 *)*pauVar14 = uVar6;
    puVar10 = puVar9;
    if (iVar12 == 8) {
      return puVar9 + 1 == param_2;
    }
LAB_00eff268:
    do {
      puVar9 = puVar10 + 1;
      if (puVar9 == param_2) {
        return true;
      }
      uVar1 = *(uint *)puVar10;
      lVar11 = lVar11 + 8;
      puVar10 = puVar9;
    } while (uVar1 <= *(uint *)puVar9);
  } while( true );
switchD_00efef88_caseD_3:
  uVar1 = *(uint *)(*param_1 + 8);
  if (*(uint *)*param_1 <= uVar1) {
    if (uVar1 <= *(uint *)(param_2 + -1)) {
      return true;
    }
    uVar6 = *(undefined8 *)(*param_1 + 8);
    *(undefined8 *)(*param_1 + 8) = param_2[-1];
    param_2[-1] = uVar6;
    if (*(uint *)*param_1 <= *(uint *)(*param_1 + 8)) {
      return true;
    }
    auVar15 = NEON_ext(*param_1,*param_1,8,1);
    *(long *)(*param_1 + 8) = auVar15._8_8_;
    *(long *)*param_1 = auVar15._0_8_;
    return true;
  }
  uVar6 = *(undefined8 *)*param_1;
  if (*(uint *)(param_2 + -1) < uVar1) {
    *(undefined8 *)*param_1 = param_2[-1];
    param_2[-1] = uVar6;
    return true;
  }
  *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
  *(undefined8 *)(*param_1 + 8) = uVar6;
  if ((uint)uVar6 <= *(uint *)(param_2 + -1)) {
    return true;
  }
  *(undefined8 *)(*param_1 + 8) = param_2[-1];
  param_2[-1] = uVar6;
  return true;
}


