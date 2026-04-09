// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00efe6a4
// Entry Point: 00efe6a4
// Size: 1848 bytes
// Signature: undefined FUN_00efe6a4(void)


void FUN_00efe6a4(undefined (*param_1) [16],undefined (*param_2) [16])

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined (*pauVar4) [16];
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined (*pauVar12) [16];
  undefined (*pauVar13) [16];
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined (*pauVar18) [16];
  undefined (*pauVar19) [16];
  uint uVar20;
  long lVar21;
  undefined (*pauVar22) [16];
  undefined auVar23 [16];
  
LAB_00efe6c8:
  pauVar19 = (undefined (*) [16])(param_2[-1] + 8);
  pauVar18 = param_1;
LAB_00efe6d0:
  do {
    param_1 = pauVar18;
    uVar15 = (long)param_2 - (long)param_1;
    uVar10 = (long)uVar15 >> 3;
    switch(uVar10) {
    case 0:
    case 1:
      goto switchD_00efeb14_caseD_0;
    case 2:
      if (*(uint *)(param_2[-1] + 8) < *(uint *)*param_1) {
        uVar16 = *(undefined8 *)*param_1;
        *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar16;
        return;
      }
      return;
    case 3:
      uVar14 = *(uint *)(*param_1 + 8);
      if (uVar14 < *(uint *)*param_1) {
        uVar16 = *(undefined8 *)*param_1;
        if (*(uint *)(param_2[-1] + 8) < uVar14) {
          *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = uVar16;
          if ((uint)uVar16 <= *(uint *)(param_2[-1] + 8)) {
            return;
          }
          *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar16;
        return;
      }
      if (*(uint *)(param_2[-1] + 8) < uVar14) {
        uVar16 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar16;
        if (*(uint *)(*param_1 + 8) < *(uint *)*param_1) {
          auVar23 = NEON_ext(*param_1,*param_1,8,1);
          *(long *)(*param_1 + 8) = auVar23._8_8_;
          *(long *)*param_1 = auVar23._0_8_;
          return;
        }
        return;
      }
      return;
    case 4:
      FUN_00efeddc(param_1,*param_1 + 8,param_1 + 1,pauVar19);
      return;
    case 5:
      pauVar18 = param_1 + 1;
      puVar1 = (undefined8 *)(param_1[1] + 8);
      FUN_00efeddc(param_1,*param_1 + 8,pauVar18,puVar1);
      if (*(uint *)(param_1[1] + 8) <= *(uint *)(param_2[-1] + 8)) {
        return;
      }
      uVar16 = *puVar1;
      *puVar1 = *(undefined8 *)(param_2[-1] + 8);
      *(undefined8 *)(param_2[-1] + 8) = uVar16;
      if (*(uint *)*pauVar18 <= *(uint *)puVar1) {
        return;
      }
      uVar16 = *puVar1;
      uVar14 = *(uint *)(*param_1 + 8);
      uVar17 = *(undefined8 *)*pauVar18;
      *(undefined8 *)*pauVar18 = uVar16;
      *puVar1 = uVar17;
      if (uVar14 <= (uint)uVar16) {
        return;
      }
      uVar14 = *(uint *)*param_1;
      uVar17 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = uVar16;
      *(undefined8 *)param_1[1] = uVar17;
      if (uVar14 <= (uint)uVar16) {
        return;
      }
      uVar17 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = uVar16;
      *(undefined8 *)(*param_1 + 8) = uVar17;
      return;
    default:
      if ((long)uVar15 < 0xf8) {
        uVar14 = *(uint *)(*param_1 + 8);
        uVar20 = *(uint *)*param_1;
        uVar5 = *(uint *)param_1[1];
        uVar10 = (ulong)uVar5;
        if (uVar14 < uVar20) {
          uVar15 = *(ulong *)*param_1;
          if (uVar5 < uVar14) {
            *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
          }
          else {
            *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
            *(ulong *)(*param_1 + 8) = uVar15;
            if ((uint)uVar15 <= uVar5) goto LAB_00efed40;
            *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_1[1];
          }
          uVar10 = uVar15 & 0xffffffff;
          *(ulong *)param_1[1] = uVar15;
        }
        else if (uVar5 < uVar14) {
          uVar10 = *(ulong *)(*param_1 + 8);
          uVar16 = *(undefined8 *)param_1[1];
          *(undefined8 *)(*param_1 + 8) = uVar16;
          *(ulong *)param_1[1] = uVar10;
          if ((uint)uVar16 < uVar20) {
            uVar17 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = uVar16;
            *(undefined8 *)(*param_1 + 8) = uVar17;
          }
        }
LAB_00efed40:
        pauVar18 = (undefined (*) [16])(param_1[1] + 8);
        if (pauVar18 == param_2) {
          return;
        }
        lVar11 = 0;
        pauVar19 = pauVar18;
        if ((uint)uVar10 <= *(uint *)*pauVar18) goto LAB_00efedb8;
        goto LAB_00efed78;
      }
      uVar3 = uVar10;
      if ((long)uVar10 < 0) {
        uVar3 = uVar10 + 1;
      }
      pauVar18 = (undefined (*) [16])(*param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
      pauVar12 = pauVar19;
      if (uVar15 < 0x1f39) {
        uVar14 = *(uint *)*pauVar18;
        if (uVar14 < *(uint *)*param_1) {
          uVar16 = *(undefined8 *)*param_1;
          if (*(uint *)*pauVar19 < uVar14) {
            iVar9 = 1;
            iVar8 = 1;
            *(undefined8 *)*param_1 = *(undefined8 *)*pauVar19;
            *(undefined8 *)*pauVar19 = uVar16;
            uVar14 = *(uint *)*param_1;
            uVar20 = *(uint *)*pauVar18;
            if (uVar14 < uVar20) goto LAB_00efe9e4;
          }
          else {
            *(undefined8 *)*param_1 = *(undefined8 *)*pauVar18;
            *(undefined8 *)*pauVar18 = uVar16;
            if ((uint)uVar16 <= *(uint *)*pauVar19) {
              iVar8 = 1;
              goto LAB_00efe9d4;
            }
            iVar9 = 2;
            iVar8 = 2;
            *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar19;
            *(undefined8 *)*pauVar19 = uVar16;
            uVar14 = *(uint *)*param_1;
            uVar20 = *(uint *)*pauVar18;
            if (uVar14 < uVar20) goto LAB_00efe9e4;
          }
          goto LAB_00efe87c;
        }
        if (uVar14 <= *(uint *)*pauVar19) {
          iVar9 = 0;
          iVar8 = 0;
          uVar14 = *(uint *)*param_1;
          uVar20 = *(uint *)*pauVar18;
          if (uVar14 < uVar20) goto LAB_00efe9e4;
          goto LAB_00efe87c;
        }
        uVar16 = *(undefined8 *)*pauVar18;
        *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar19;
        *(undefined8 *)*pauVar19 = uVar16;
        if (*(uint *)*param_1 <= *(uint *)*pauVar18) {
          iVar9 = 1;
          iVar8 = 1;
          uVar14 = *(uint *)*param_1;
          uVar20 = *(uint *)*pauVar18;
          if (uVar14 < uVar20) goto LAB_00efe9e4;
          goto LAB_00efe87c;
        }
        iVar9 = 2;
        iVar8 = 2;
        uVar16 = *(undefined8 *)*param_1;
        *(undefined8 *)*param_1 = *(undefined8 *)*pauVar18;
        *(undefined8 *)*pauVar18 = uVar16;
        uVar14 = *(uint *)*param_1;
        uVar20 = *(uint *)*pauVar18;
        if (uVar20 <= uVar14) goto LAB_00efe87c;
LAB_00efe9e4:
        pauVar12 = (undefined (*) [16])(*param_1 + 8);
        pauVar13 = pauVar19;
        if (pauVar19 <= pauVar12) goto LAB_00efe9f4;
        goto LAB_00efea1c;
      }
      uVar15 = uVar10 + 3;
      if (-1 < (long)uVar10) {
        uVar15 = uVar10;
      }
      lVar11 = (uVar15 & 0x7ffffffffffffffc) * 2;
      puVar1 = (undefined8 *)(*param_1 + lVar11);
      puVar2 = (undefined8 *)(*pauVar18 + lVar11);
      iVar8 = FUN_00efeddc(param_1,puVar1,pauVar18,puVar2);
      if (*(uint *)*pauVar19 < *(uint *)puVar2) {
        uVar16 = *puVar2;
        *puVar2 = *(undefined8 *)*pauVar19;
        *(undefined8 *)*pauVar19 = uVar16;
        if (*(uint *)puVar2 < *(uint *)*pauVar18) {
          uVar16 = *(undefined8 *)*pauVar18;
          *(undefined8 *)*pauVar18 = *puVar2;
          *puVar2 = uVar16;
          if (*(uint *)*pauVar18 < *(uint *)puVar1) {
            uVar16 = *puVar1;
            *puVar1 = *(undefined8 *)*pauVar18;
            *(undefined8 *)*pauVar18 = uVar16;
            if (*(uint *)puVar1 < *(uint *)*param_1) {
              iVar8 = iVar8 + 4;
              uVar16 = *(undefined8 *)*param_1;
              *(undefined8 *)*param_1 = *puVar1;
              *puVar1 = uVar16;
              uVar14 = *(uint *)*param_1;
              uVar20 = *(uint *)*pauVar18;
              iVar9 = iVar8;
              if (uVar14 < uVar20) goto LAB_00efe9e4;
            }
            else {
              iVar8 = iVar8 + 3;
              uVar14 = *(uint *)*param_1;
              uVar20 = *(uint *)*pauVar18;
              iVar9 = iVar8;
              if (uVar14 < uVar20) goto LAB_00efe9e4;
            }
          }
          else {
            iVar8 = iVar8 + 2;
            uVar14 = *(uint *)*param_1;
            uVar20 = *(uint *)*pauVar18;
            iVar9 = iVar8;
            if (uVar14 < uVar20) goto LAB_00efe9e4;
          }
        }
        else {
          iVar8 = iVar8 + 1;
          uVar14 = *(uint *)*param_1;
          uVar20 = *(uint *)*pauVar18;
          iVar9 = iVar8;
          if (uVar14 < uVar20) goto LAB_00efe9e4;
        }
      }
      else {
LAB_00efe9d4:
        uVar14 = *(uint *)*param_1;
        uVar20 = *(uint *)*pauVar18;
        iVar9 = iVar8;
        if (uVar14 < uVar20) goto LAB_00efe9e4;
      }
LAB_00efe87c:
      while (pauVar13 = (undefined (*) [16])(pauVar12[-1] + 8), pauVar13 != param_1) {
        pauVar22 = pauVar12 + -1;
        pauVar12 = pauVar13;
        if (*(uint *)(*pauVar22 + 8) < uVar20) goto code_r0x00efe898;
      }
      pauVar12 = (undefined (*) [16])(*param_1 + 8);
      pauVar18 = pauVar12;
      if (*(uint *)*pauVar19 <= uVar14) {
        while( true ) {
          if (pauVar18 == pauVar19) {
            return;
          }
          if (uVar14 < *(uint *)*pauVar18) break;
          pauVar18 = (undefined (*) [16])(*pauVar18 + 8);
        }
        uVar16 = *(undefined8 *)*pauVar18;
        pauVar12 = (undefined (*) [16])(*pauVar18 + 8);
        *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar19;
        *(undefined8 *)*pauVar19 = uVar16;
      }
      pauVar13 = pauVar19;
      if (pauVar12 == pauVar19) {
        return;
      }
      while( true ) {
        pauVar18 = (undefined (*) [16])(pauVar12[-1] + 8);
        do {
          pauVar12 = pauVar18;
          pauVar18 = (undefined (*) [16])(*pauVar12 + 8);
        } while (*(uint *)*pauVar18 <= *(uint *)*param_1);
        pauVar12 = pauVar12 + 1;
        do {
          pauVar13 = (undefined (*) [16])(pauVar13[-1] + 8);
        } while (*(uint *)*param_1 < *(uint *)*pauVar13);
        if (pauVar13 <= pauVar18) break;
        uVar16 = *(undefined8 *)*pauVar18;
        *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar13;
        *(undefined8 *)*pauVar13 = uVar16;
      }
    }
  } while( true );
LAB_00efed78:
  uVar16 = *(undefined8 *)*pauVar18;
  lVar7 = lVar11;
  do {
    lVar21 = lVar7;
    *(undefined8 *)(param_1[1] + lVar21 + 8) = *(undefined8 *)(param_1[1] + lVar21);
    pauVar19 = param_1;
    if (lVar21 == -0x10) goto LAB_00efedb4;
    lVar7 = lVar21 + -8;
  } while ((uint)uVar16 < *(uint *)(*param_1 + lVar21 + 8));
  pauVar19 = (undefined (*) [16])(param_1[1] + lVar21);
LAB_00efedb4:
  *(undefined8 *)*pauVar19 = uVar16;
  pauVar19 = pauVar18;
LAB_00efedb8:
  do {
    pauVar18 = (undefined (*) [16])(*pauVar19 + 8);
    if (pauVar18 == param_2) {
      return;
    }
    puVar6 = *pauVar19;
    lVar11 = lVar11 + 8;
    pauVar19 = pauVar18;
  } while (*(uint *)puVar6 <= *(uint *)*pauVar18);
  goto LAB_00efed78;
code_r0x00efe898:
  iVar9 = iVar8 + 1;
  uVar16 = *(undefined8 *)*param_1;
  *(undefined8 *)*param_1 = *(undefined8 *)*pauVar13;
  *(undefined8 *)*pauVar13 = uVar16;
  pauVar12 = (undefined (*) [16])(*param_1 + 8);
  if (pauVar12 < pauVar13) {
LAB_00efea1c:
    while( true ) {
      pauVar22 = (undefined (*) [16])(pauVar12[-1] + 8);
      do {
        pauVar12 = pauVar22;
        pauVar22 = (undefined (*) [16])(*pauVar12 + 8);
      } while (*(uint *)*pauVar22 < *(uint *)*pauVar18);
      pauVar12 = pauVar12 + 1;
      do {
        pauVar13 = (undefined (*) [16])(pauVar13[-1] + 8);
      } while (*(uint *)*pauVar18 <= *(uint *)*pauVar13);
      if (pauVar13 < pauVar22) break;
      uVar16 = *(undefined8 *)*pauVar22;
      iVar9 = iVar9 + 1;
      pauVar4 = pauVar13;
      if (pauVar22 != pauVar18) {
        pauVar4 = pauVar18;
      }
      *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar13;
      *(undefined8 *)*pauVar13 = uVar16;
      pauVar18 = pauVar4;
    }
    if (pauVar22 == pauVar18) goto LAB_00efea78;
  }
  else {
LAB_00efe9f4:
    pauVar22 = (undefined (*) [16])(*param_1 + 8);
    if (pauVar22 == pauVar18) goto LAB_00efea78;
  }
  if (*(uint *)*pauVar18 < *(uint *)*pauVar22) {
    iVar9 = iVar9 + 1;
    uVar16 = *(undefined8 *)*pauVar22;
    *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar18;
    *(undefined8 *)*pauVar18 = uVar16;
  }
LAB_00efea78:
  if (iVar9 == 0) {
    uVar10 = FUN_00efef44(param_1,pauVar22);
    uVar15 = FUN_00efef44((undefined (*) [16])(*pauVar22 + 8),param_2);
    if ((uVar15 & 1) != 0) goto LAB_00efeaf4;
    pauVar18 = (undefined (*) [16])(*pauVar22 + 8);
    if ((uVar10 & 1) != 0) goto LAB_00efe6d0;
  }
  if ((long)param_2 - (long)pauVar22 <= (long)pauVar22 - (long)param_1) {
    FUN_00efe6a4((long)*pauVar22 + 8,param_2);
    param_2 = pauVar22;
    goto LAB_00efe6c8;
  }
  FUN_00efe6a4(param_1,pauVar22);
  pauVar18 = (undefined (*) [16])(*pauVar22 + 8);
  goto LAB_00efe6d0;
LAB_00efeaf4:
  param_2 = pauVar22;
  if ((uVar10 & 1) != 0) {
switchD_00efeb14_caseD_0:
    return;
  }
  goto LAB_00efe6c8;
}


