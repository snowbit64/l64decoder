// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d3cf4
// Entry Point: 006d3cf4
// Size: 1048 bytes
// Signature: undefined FUN_006d3cf4(void)


void FUN_006d3cf4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  size_t sVar2;
  void *__s1;
  byte bVar3;
  undefined uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  void *pvVar14;
  void *pvVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  undefined6 local_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  uVar11 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  local_68 = *(long *)(lVar5 + 0x28);
  if (uVar11 < 6) {
    bVar7 = true;
    switch(uVar11) {
    case 2:
      bVar3 = *(byte *)param_1;
      bVar10 = *(byte *)(param_2 + -6);
      uVar11 = (ulong)(bVar10 >> 1);
      if ((bVar10 & 1) != 0) {
        uVar11 = param_2[-5];
      }
      uVar13 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar13 = param_1[1];
      }
      sVar2 = uVar11;
      if (uVar13 <= uVar11) {
        sVar2 = uVar13;
      }
      if (sVar2 == 0) {
LAB_006d4014:
        if (uVar11 <= uVar13) goto LAB_006d40b8;
        pvVar15 = (void *)param_1[2];
      }
      else {
        pvVar14 = (void *)param_2[-4];
        pvVar15 = (void *)param_1[2];
        if ((bVar10 & 1) == 0) {
          pvVar14 = (void *)((long)param_2 + -0x2f);
        }
        __s1 = pvVar15;
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)((long)param_1 + 1);
        }
        iVar8 = memcmp(__s1,pvVar14,sVar2);
        if (iVar8 == 0) goto LAB_006d4014;
        if (-1 < iVar8) goto LAB_006d40b8;
      }
      uVar4 = *(undefined *)((long)param_1 + 1);
      *param_1 = 0;
      uVar11 = param_1[1];
      param_1[1] = 0;
      param_1[2] = 0;
      uVar20 = param_2[-6];
      uVar13 = param_2[-4];
      local_78 = (undefined6)*(undefined8 *)((long)param_1 + 2);
      local_a0 = (void *)param_1[5];
      uStack_72 = (undefined2)uVar11;
      uStack_70 = (undefined6)(uVar11 >> 0x10);
      param_1[1] = param_2[-5];
      *param_1 = uVar20;
      uStack_a8 = param_1[4];
      local_b0 = param_1[3];
      param_1[2] = uVar13;
      uVar13 = param_2[-3];
      *(undefined2 *)(param_2 + -6) = 0;
      uVar11 = param_2[-1];
      param_1[4] = param_2[-2];
      param_1[3] = uVar13;
      param_1[5] = uVar11;
      if ((*(byte *)(param_2 + -6) & 1) != 0) {
        operator_delete((void *)param_2[-4]);
      }
      *(byte *)(param_2 + -6) = bVar3;
      *(undefined *)((long)param_2 + -0x2f) = uVar4;
      param_2[-4] = (ulong)pvVar15;
      *(ulong *)((long)param_2 + -0x2e) = CONCAT26(uStack_72,local_78);
      param_2[-5] = CONCAT62(uStack_70,uStack_72);
      bVar7 = true;
      param_2[-2] = uStack_a8;
      param_2[-3] = local_b0;
      param_2[-1] = (ulong)local_a0;
      break;
    case 3:
      FUN_006d2fc8(param_1,param_1 + 6,param_2 + -6);
      bVar7 = true;
      break;
    case 4:
      FUN_006d34d0(param_1,param_1 + 6,param_1 + 0xc,param_2 + -6);
      bVar7 = true;
      break;
    case 5:
      FUN_006d3858(param_1,param_1 + 6,param_1 + 0xc,param_1 + 0x12,param_2 + -6);
      bVar7 = true;
    }
  }
  else {
    FUN_006d2fc8(param_1,param_1 + 6,param_1 + 0xc);
    if (param_1 + 0x12 != param_2) {
      lVar17 = 0;
      iVar8 = 0;
      puVar1 = param_1 + 0x12;
      puVar16 = param_1 + 0xc;
LAB_006d3e60:
      puVar12 = puVar1;
      bVar10 = *(byte *)puVar12;
      bVar3 = *(byte *)puVar16;
      uVar11 = (ulong)(bVar10 >> 1);
      if ((bVar10 & 1) != 0) {
        uVar11 = puVar12[1];
      }
      uVar13 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar13 = puVar16[1];
      }
      sVar2 = uVar11;
      if (uVar13 <= uVar11) {
        sVar2 = uVar13;
      }
      if (sVar2 == 0) {
LAB_006d3ec4:
        if (uVar13 < uVar11) {
LAB_006d3ecc:
          uStack_a8 = puVar12[1];
          local_b0 = *puVar12;
          bVar10 = 0;
          local_a0 = (void *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          uStack_90 = puVar12[4];
          local_98 = puVar12[3];
          local_88 = puVar12[5];
          *puVar12 = 0;
          lVar18 = lVar17;
          do {
            if ((bVar10 & 1) != 0) {
              operator_delete(*(void **)((long)param_1 + lVar18 + 0xa0));
            }
            uVar19 = *(undefined8 *)((long)param_1 + lVar18 + 0x60);
            *(undefined2 *)((long)param_1 + lVar18 + 0x60) = 0;
            *(undefined8 *)((long)param_1 + lVar18 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar18 + 0x68);
            *(undefined8 *)((long)param_1 + lVar18 + 0x90) = uVar19;
            *(undefined8 *)((long)param_1 + lVar18 + 0xa0) =
                 *(undefined8 *)((long)param_1 + lVar18 + 0x70);
            *(undefined8 *)((long)param_1 + lVar18 + 0xb0) =
                 *(undefined8 *)((long)param_1 + lVar18 + 0x80);
            *(undefined8 *)((long)param_1 + lVar18 + 0xa8) =
                 *(undefined8 *)((long)param_1 + lVar18 + 0x78);
            *(undefined8 *)((long)param_1 + lVar18 + 0xb8) =
                 *(undefined8 *)((long)param_1 + lVar18 + 0x88);
            if (lVar18 == -0x60) {
              bVar10 = *(byte *)param_1;
              puVar1 = param_1;
              goto joined_r0x006d3fd0;
            }
            bVar10 = *(byte *)((long)param_1 + lVar18 + 0x30);
            uVar11 = local_b0 >> 1 & 0x7f;
            if ((local_b0 & 1) != 0) {
              uVar11 = uStack_a8;
            }
            uVar13 = (ulong)(bVar10 >> 1);
            if ((bVar10 & 1) != 0) {
              uVar13 = *(ulong *)((long)param_1 + lVar18 + 0x38);
            }
            sVar2 = uVar11;
            if (uVar13 <= uVar11) {
              sVar2 = uVar13;
            }
            if (sVar2 == 0) {
LAB_006d3f00:
              if (uVar11 <= uVar13) goto LAB_006d3fb4;
            }
            else {
              pvVar14 = (void *)((ulong)&local_b0 | 1);
              if ((local_b0 & 1) != 0) {
                pvVar14 = local_a0;
              }
              pvVar15 = (void *)((long)param_1 + lVar18 + 0x31);
              if ((bVar10 & 1) != 0) {
                pvVar15 = *(void **)((long)param_1 + lVar18 + 0x40);
              }
              iVar9 = memcmp(pvVar15,pvVar14,sVar2);
              if (iVar9 == 0) goto LAB_006d3f00;
              if (-1 < iVar9) goto LAB_006d3fb4;
            }
            lVar6 = lVar18 + 0x60;
            lVar18 = lVar18 + -0x30;
            bVar10 = *(byte *)((long)param_1 + lVar6);
          } while( true );
        }
      }
      else {
        pvVar14 = (void *)puVar12[2];
        pvVar15 = (void *)puVar16[2];
        if ((bVar10 & 1) == 0) {
          pvVar14 = (void *)((long)puVar12 + 1);
        }
        if ((bVar3 & 1) == 0) {
          pvVar15 = (void *)((long)puVar16 + 1);
        }
        iVar9 = memcmp(pvVar15,pvVar14,sVar2);
        if (iVar9 == 0) goto LAB_006d3ec4;
        if (iVar9 < 0) goto LAB_006d3ecc;
      }
      goto LAB_006d3e50;
    }
LAB_006d40b8:
    bVar7 = true;
  }
switchD_006d3d5c_caseD_0:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar7);
LAB_006d3fb4:
  puVar1 = (ulong *)((long)param_1 + lVar18 + 0x60);
  bVar10 = *(byte *)puVar1;
joined_r0x006d3fd0:
  if ((bVar10 & 1) != 0) {
    operator_delete((void *)puVar1[2]);
  }
  iVar8 = iVar8 + 1;
  puVar1[1] = uStack_a8;
  *puVar1 = local_b0;
  puVar1[2] = (ulong)local_a0;
  *(ulong *)((long)param_1 + lVar18 + 0x80) = uStack_90;
  *(ulong *)((long)param_1 + lVar18 + 0x78) = local_98;
  *(ulong *)((long)param_1 + lVar18 + 0x88) = local_88;
  if (iVar8 == 8) {
    bVar7 = puVar12 + 6 == param_2;
    goto switchD_006d3d5c_caseD_0;
  }
LAB_006d3e50:
  lVar17 = lVar17 + 0x30;
  puVar1 = puVar12 + 6;
  puVar16 = puVar12;
  if (puVar12 + 6 == param_2) goto LAB_006d40c0;
  goto LAB_006d3e60;
LAB_006d40c0:
  bVar7 = true;
  goto switchD_006d3d5c_caseD_0;
}


