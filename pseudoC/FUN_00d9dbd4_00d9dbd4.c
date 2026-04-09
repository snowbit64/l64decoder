// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9dbd4
// Entry Point: 00d9dbd4
// Size: 640 bytes
// Signature: undefined FUN_00d9dbd4(void)


void FUN_00d9dbd4(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  undefined (*pauVar13) [16];
  ulong uVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  long local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 == -1) {
    uVar12 = -*(int *)(param_1 + 0xf) - 2;
    uVar1 = uVar12 & 0xfffffc00;
    uVar6 = *(int *)((long)param_1 + 0x84) + *(int *)(param_1 + 0x10);
    uVar8 = (ulong)uVar6;
    if (uVar6 == 0) {
      iVar4 = -1;
    }
    else {
      lVar9 = param_1[5];
      if (uVar6 < 8) {
        uVar11 = 0;
LAB_00d9dc78:
        lVar7 = uVar8 - uVar11;
        puVar10 = (uint *)(lVar9 + uVar11 * 4);
        do {
          uVar6 = 0;
          if (uVar1 <= *puVar10) {
            uVar6 = *puVar10 - uVar1;
          }
          lVar7 = lVar7 + -1;
          *puVar10 = uVar6;
          puVar10 = puVar10 + 1;
        } while (lVar7 != 0);
      }
      else {
        uVar11 = uVar8 & 0xfffffff8;
        pauVar13 = (undefined (*) [16])(lVar9 + 0x10);
        uVar14 = uVar11;
        do {
          uVar14 = uVar14 - 8;
          auVar15._8_4_ = uVar1;
          auVar15._0_8_ = CONCAT44(uVar12,uVar12) & 0xfffffc00fffffc00;
          auVar15._12_4_ = uVar1;
          auVar15 = NEON_uqsub(pauVar13[-1],auVar15,4);
          auVar16._8_4_ = uVar1;
          auVar16._0_8_ = CONCAT44(uVar12,uVar12) & 0xfffffc00fffffc00;
          auVar16._12_4_ = uVar1;
          auVar16 = NEON_uqsub(*pauVar13,auVar16,4);
          *(long *)(pauVar13[-1] + 8) = auVar15._8_8_;
          *(long *)pauVar13[-1] = auVar15._0_8_;
          *(long *)(*pauVar13 + 8) = auVar16._8_8_;
          *(long *)*pauVar13 = auVar16._0_8_;
          pauVar13 = pauVar13 + 2;
        } while (uVar14 != 0);
        if (uVar11 != uVar8) goto LAB_00d9dc78;
      }
      iVar4 = *(int *)(param_1 + 1);
    }
    iVar4 = iVar4 - uVar1;
    *(int *)(param_1 + 1) = iVar4;
    *(ulong *)((long)param_1 + 0xc) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20) - uVar1,
                  (int)*(undefined8 *)((long)param_1 + 0xc) - uVar1);
    iVar5 = *(int *)(param_1 + 10);
  }
  else {
    iVar5 = *(int *)(param_1 + 10);
  }
  if (iVar5 == 0) {
    uVar6 = *(uint *)((long)param_1 + 0x5c);
    if (uVar6 == *(int *)(param_1 + 2) - iVar4) {
      if (*(int *)((long)param_1 + 100) == 0) {
        if ((long)(void *)param_1[8] + ((ulong)*(uint *)((long)param_1 + 0x54) - *param_1) <=
            (ulong)uVar6) {
          memmove((void *)param_1[8],(void *)(*param_1 - (ulong)*(uint *)(param_1 + 0xb)),
                  (ulong)(uVar6 + *(uint *)(param_1 + 0xb)));
          *param_1 = param_1[8] + (ulong)*(uint *)(param_1 + 0xb);
          if (*(int *)(param_1 + 10) != 0) goto LAB_00d9dd24;
        }
      }
      if (*(int *)(param_1 + 0x11) == 0) {
        if (*(int *)((long)param_1 + 100) == 0) {
          iVar4 = *(int *)(param_1 + 2);
          iVar5 = *(int *)(param_1 + 1);
          do {
            lVar9 = *param_1 + (ulong)(uint)(iVar4 - iVar5);
            local_30 = (param_1[8] + (ulong)*(uint *)((long)param_1 + 0x54)) - lVar9;
            if (local_30 == 0) break;
            iVar4 = (**(code **)param_1[9])((code **)param_1[9],lVar9,&local_30);
            *(int *)(param_1 + 0x11) = iVar4;
            if (iVar4 != 0) break;
            if (local_30 == 0) goto LAB_00d9ddd4;
            iVar5 = *(int *)(param_1 + 1);
            iVar4 = *(int *)(param_1 + 2) + (int)local_30;
            *(int *)(param_1 + 2) = iVar4;
          } while ((uint)(iVar4 - iVar5) <= *(uint *)((long)param_1 + 0x5c));
        }
        else {
          uVar1 = *(uint *)(param_1 + 2);
          uVar8 = param_1[0xd];
          uVar6 = (uint)uVar8;
          if (~uVar1 <= uVar8) {
            uVar6 = ~uVar1;
          }
          param_1[0xd] = uVar8 - uVar6;
          *(uint *)(param_1 + 2) = uVar6 + uVar1;
          if (uVar8 - uVar6 == 0) {
LAB_00d9ddd4:
            *(undefined4 *)(param_1 + 10) = 1;
          }
        }
      }
    }
  }
LAB_00d9dd24:
  iVar4 = *(int *)(param_1 + 3);
  if (iVar4 == *(int *)((long)param_1 + 0x1c)) {
    iVar4 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = *(int *)((long)param_1 + 0x1c) - iVar4;
  if (~uVar1 <= uVar6) {
    uVar6 = ~uVar1;
  }
  uVar2 = *(int *)(param_1 + 2) - uVar1;
  uVar12 = uVar2 - *(uint *)((long)param_1 + 0x5c);
  if (uVar2 < *(uint *)((long)param_1 + 0x5c) || uVar12 == 0) {
    uVar12 = (uint)(uVar2 != 0);
  }
  if (uVar6 <= uVar12) {
    uVar12 = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 4);
  if (uVar2 <= *(uint *)(param_1 + 4)) {
    uVar6 = uVar2;
  }
  *(uint *)((long)param_1 + 0x14) = uVar6;
  *(uint *)((long)param_1 + 0xc) = uVar12 + uVar1;
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


