// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d2fc8
// Entry Point: 006d2fc8
// Size: 1288 bytes
// Signature: undefined FUN_006d2fc8(void)


void FUN_006d2fc8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  void *pvVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined6 uStack_78;
  undefined2 local_72;
  
  lVar10 = tpidr_el0;
  lVar13 = *(long *)(lVar10 + 0x28);
  bVar6 = *(byte *)param_2;
  bVar7 = *(byte *)param_1;
  uVar2 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar2 = param_2[1];
  }
  uVar3 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    uVar3 = param_1[1];
  }
  sVar4 = uVar2;
  if (uVar3 <= uVar2) {
    sVar4 = uVar3;
  }
  if (sVar4 == 0) {
LAB_006d30a4:
    if (uVar2 <= uVar3) goto LAB_006d305c;
LAB_006d30ac:
    bVar8 = *(byte *)param_3;
    uVar3 = (ulong)(bVar8 >> 1);
    if ((bVar8 & 1) != 0) {
      uVar3 = param_3[1];
    }
    sVar4 = uVar3;
    if (uVar2 <= uVar3) {
      sVar4 = uVar2;
    }
    if (sVar4 == 0) {
LAB_006d32c4:
      if (uVar2 < uVar3) {
LAB_006d32cc:
        uVar15 = param_1[1];
        uVar17 = param_1[2];
        uVar9 = *(undefined *)((long)param_1 + 1);
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        uVar18 = param_1[5];
        uVar19 = *param_3;
        uVar12 = param_3[2];
        uStack_78 = (undefined6)*(undefined8 *)((long)param_1 + 2);
        param_1[1] = param_3[1];
        *param_1 = uVar19;
        uVar20 = param_1[4];
        uVar19 = param_1[3];
        param_1[2] = uVar12;
        uVar21 = param_3[3];
        *(undefined2 *)param_3 = 0;
        uVar12 = param_3[5];
        local_72 = (undefined2)uVar15;
        param_1[4] = param_3[4];
        param_1[3] = uVar21;
        param_1[5] = uVar12;
        if ((*(byte *)param_3 & 1) != 0) {
          operator_delete((void *)param_3[2]);
        }
        *(byte *)param_3 = bVar7;
        *(undefined *)((long)param_3 + 1) = uVar9;
        uVar12 = 1;
        *(ulong *)((long)param_3 + 2) = CONCAT26(local_72,uStack_78);
        param_3[1] = uVar15;
        param_3[2] = uVar17;
        param_3[4] = uVar20;
        param_3[3] = uVar19;
        param_3[5] = uVar18;
        goto LAB_006d349c;
      }
    }
    else {
      pvVar14 = (void *)param_3[2];
      pvVar16 = (void *)param_2[2];
      if ((bVar8 & 1) == 0) {
        pvVar14 = (void *)((long)param_3 + 1);
      }
      if ((bVar6 & 1) == 0) {
        pvVar16 = (void *)((long)param_2 + 1);
      }
      iVar11 = memcmp(pvVar16,pvVar14,sVar4);
      if (iVar11 == 0) goto LAB_006d32c4;
      if (iVar11 < 0) goto LAB_006d32cc;
    }
    uVar15 = param_1[1];
    pvVar14 = (void *)param_1[2];
    uVar9 = *(undefined *)((long)param_1 + 1);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar12 = param_1[5];
    uVar18 = *param_2;
    uVar17 = param_2[2];
    uStack_78 = (undefined6)*(undefined8 *)((long)param_1 + 2);
    param_1[1] = param_2[1];
    *param_1 = uVar18;
    uVar19 = param_1[4];
    uVar18 = param_1[3];
    param_1[2] = uVar17;
    uVar20 = param_2[3];
    *(undefined2 *)param_2 = 0;
    uVar17 = param_2[5];
    local_72 = (undefined2)uVar15;
    param_1[4] = param_2[4];
    param_1[3] = uVar20;
    param_1[5] = uVar17;
    puVar1 = param_2 + 3;
    if ((*(byte *)param_2 & 1) != 0) {
      operator_delete((void *)param_2[2]);
    }
    *(byte *)param_2 = bVar7;
    *(undefined *)((long)param_2 + 1) = uVar9;
    *(undefined8 *)((long)param_2 + 2) = CONCAT26(local_72,uStack_78);
    param_2[1] = uVar15;
    param_2[2] = pvVar14;
    param_2[4] = uVar19;
    *puVar1 = uVar18;
    param_2[5] = uVar12;
    bVar6 = *(byte *)param_3;
    uVar2 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      uVar2 = param_3[1];
    }
    uVar3 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      uVar3 = param_2[1];
    }
    sVar4 = uVar2;
    if (uVar3 <= uVar2) {
      sVar4 = uVar3;
    }
    if (sVar4 == 0) {
LAB_006d3364:
      if (uVar3 < uVar2) {
LAB_006d336c:
        uVar15 = param_2[1];
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        uVar18 = param_2[5];
        uVar12 = *param_3;
        uVar17 = param_3[2];
        uStack_78 = (undefined6)*(undefined8 *)((long)param_2 + 2);
        param_2[1] = param_3[1];
        *param_2 = uVar12;
        uVar20 = param_2[4];
        uVar19 = *puVar1;
        param_2[2] = uVar17;
        uVar12 = param_3[3];
        *(undefined2 *)param_3 = 0;
        uVar17 = param_3[5];
        local_72 = (undefined2)uVar15;
        param_2[4] = param_3[4];
        *puVar1 = uVar12;
        param_2[5] = uVar17;
        if ((*(byte *)param_3 & 1) != 0) {
          operator_delete((void *)param_3[2]);
        }
        uVar12 = 2;
        *(byte *)param_3 = bVar7;
        *(undefined *)((long)param_3 + 1) = uVar9;
        *(ulong *)((long)param_3 + 2) = CONCAT26(local_72,uStack_78);
        param_3[1] = uVar15;
        param_3[2] = pvVar14;
        param_3[4] = uVar20;
        param_3[3] = uVar19;
        param_3[5] = uVar18;
        goto LAB_006d349c;
      }
    }
    else {
      pvVar16 = (void *)param_3[2];
      if ((bVar6 & 1) == 0) {
        pvVar16 = (void *)((long)param_3 + 1);
      }
      pvVar5 = (void *)((long)param_2 + 1);
      if ((bVar7 & 1) != 0) {
        pvVar5 = pvVar14;
      }
      iVar11 = memcmp(pvVar5,pvVar16,sVar4);
      if (iVar11 == 0) goto LAB_006d3364;
      if (iVar11 < 0) goto LAB_006d336c;
    }
LAB_006d3498:
    uVar12 = 1;
  }
  else {
    pvVar14 = (void *)param_2[2];
    pvVar16 = (void *)param_1[2];
    if ((bVar6 & 1) == 0) {
      pvVar14 = (void *)((long)param_2 + 1);
    }
    if ((bVar7 & 1) == 0) {
      pvVar16 = (void *)((long)param_1 + 1);
    }
    iVar11 = memcmp(pvVar16,pvVar14,sVar4);
    if (iVar11 == 0) goto LAB_006d30a4;
    if (iVar11 < 0) goto LAB_006d30ac;
LAB_006d305c:
    bVar7 = *(byte *)param_3;
    uVar3 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      uVar3 = param_3[1];
    }
    sVar4 = uVar3;
    if (uVar2 <= uVar3) {
      sVar4 = uVar2;
    }
    if (sVar4 == 0) {
LAB_006d31d0:
      if (uVar2 < uVar3) {
        pvVar16 = (void *)param_2[2];
LAB_006d31dc:
        uVar9 = *(undefined *)((long)param_2 + 1);
        uVar15 = param_2[1];
        uVar12 = param_2[5];
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        uVar18 = *param_3;
        uStack_78 = (undefined6)*(undefined8 *)((long)param_2 + 2);
        uVar17 = param_3[2];
        local_72 = (undefined2)uVar15;
        param_2[1] = param_3[1];
        *param_2 = uVar18;
        uVar19 = param_2[4];
        uVar18 = param_2[3];
        param_2[2] = uVar17;
        uVar20 = param_3[3];
        *(undefined2 *)param_3 = 0;
        uVar17 = param_3[5];
        param_2[4] = param_3[4];
        param_2[3] = uVar20;
        param_2[5] = uVar17;
        if ((*(byte *)param_3 & 1) != 0) {
          operator_delete((void *)param_3[2]);
        }
        *(byte *)param_3 = bVar6;
        *(undefined *)((long)param_3 + 1) = uVar9;
        *(ulong *)((long)param_3 + 2) = CONCAT26(local_72,uStack_78);
        param_3[1] = uVar15;
        param_3[2] = pvVar16;
        param_3[4] = uVar19;
        param_3[3] = uVar18;
        param_3[5] = uVar12;
        bVar6 = *(byte *)param_2;
        bVar7 = *(byte *)param_1;
        uVar2 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          uVar2 = param_2[1];
        }
        uVar3 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          uVar3 = param_1[1];
        }
        sVar4 = uVar2;
        if (uVar3 <= uVar2) {
          sVar4 = uVar3;
        }
        if (sVar4 == 0) {
LAB_006d33f8:
          if (uVar2 <= uVar3) goto LAB_006d3498;
          pvVar16 = (void *)param_1[2];
        }
        else {
          pvVar14 = (void *)param_2[2];
          pvVar16 = (void *)param_1[2];
          if ((bVar6 & 1) == 0) {
            pvVar14 = (void *)((long)param_2 + 1);
          }
          pvVar5 = pvVar16;
          if ((bVar7 & 1) == 0) {
            pvVar5 = (void *)((long)param_1 + 1);
          }
          iVar11 = memcmp(pvVar5,pvVar14,sVar4);
          if (iVar11 == 0) goto LAB_006d33f8;
          if (-1 < iVar11) goto LAB_006d3498;
        }
        uVar9 = *(undefined *)((long)param_1 + 1);
        uVar15 = *(undefined8 *)((long)param_1 + 2);
        *param_1 = 0;
        uVar17 = param_1[1];
        param_1[1] = 0;
        param_1[2] = 0;
        uVar19 = *param_2;
        uVar12 = param_2[2];
        uVar18 = param_1[5];
        param_1[1] = param_2[1];
        *param_1 = uVar19;
        uVar20 = param_1[4];
        uVar19 = param_1[3];
        param_1[2] = uVar12;
        uVar21 = param_2[3];
        *(undefined2 *)param_2 = 0;
        uVar12 = param_2[5];
        uStack_78 = (undefined6)uVar15;
        local_72 = (undefined2)uVar17;
        param_1[4] = param_2[4];
        param_1[3] = uVar21;
        param_1[5] = uVar12;
        if ((*(byte *)param_2 & 1) != 0) {
          operator_delete((void *)param_2[2]);
        }
        *(byte *)param_2 = bVar7;
        *(undefined *)((long)param_2 + 1) = uVar9;
        param_2[2] = pvVar16;
        *(undefined8 *)((long)param_2 + 2) = CONCAT26(local_72,uStack_78);
        param_2[1] = uVar17;
        uVar12 = 2;
        param_2[4] = uVar20;
        param_2[3] = uVar19;
        param_2[5] = uVar18;
        goto LAB_006d349c;
      }
    }
    else {
      pvVar14 = (void *)param_3[2];
      pvVar16 = (void *)param_2[2];
      if ((bVar7 & 1) == 0) {
        pvVar14 = (void *)((long)param_3 + 1);
      }
      pvVar5 = pvVar16;
      if ((bVar6 & 1) == 0) {
        pvVar5 = (void *)((long)param_2 + 1);
      }
      iVar11 = memcmp(pvVar5,pvVar14,sVar4);
      if (iVar11 == 0) goto LAB_006d31d0;
      if (iVar11 < 0) goto LAB_006d31dc;
    }
    uVar12 = 0;
  }
LAB_006d349c:
  if (*(long *)(lVar10 + 0x28) != lVar13) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}


