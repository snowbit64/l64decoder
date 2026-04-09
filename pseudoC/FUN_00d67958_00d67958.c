// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d67958
// Entry Point: 00d67958
// Size: 3072 bytes
// Signature: undefined FUN_00d67958(void)


void FUN_00d67958(long *param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined uVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  code **ppcVar11;
  long *plVar12;
  char **ppcVar13;
  ulong uVar14;
  undefined *puVar15;
  char *pcVar16;
  long lVar17;
  char cVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *puVar21;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar20 = param_1[0x40];
  if (*(char *)((long)param_1 + 0x121) == '\0') {
    if (0 < *(int *)((long)param_1 + 0x164)) {
      lVar9 = 0x2d;
      do {
        lVar17 = param_1[lVar9];
        if ((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) == 0)) {
          FUN_00d6936c(param_1,*(undefined4 *)(lVar17 + 0x14),0);
          iVar3 = *(int *)(param_1 + 0x38);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x38);
        }
        if (iVar3 != 0) {
          FUN_00d6936c(param_1,*(undefined4 *)(lVar17 + 0x18),1);
        }
        lVar17 = lVar9 + -0x2c;
        lVar9 = lVar9 + 1;
      } while (lVar17 < *(int *)((long)param_1 + 0x164));
    }
    goto LAB_00d67f5c;
  }
  uVar2 = *(uint *)((long)param_1 + 0x164);
  uVar8 = (ulong)uVar2;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  if (0 < (int)uVar2) {
    iVar3 = *(int *)(param_1 + 0x38);
    if (*(int *)((long)param_1 + 0x1bc) == 0) {
      if (*(int *)((long)param_1 + 0x1c4) == 0) {
        if (iVar3 == 0) {
          if (uVar2 < 2) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar8 & 0xfffffffe;
            plVar12 = param_1 + 0x2e;
            uVar19 = uVar14;
            do {
              plVar1 = plVar12 + -1;
              lVar9 = *plVar12;
              plVar12 = plVar12 + 2;
              uVar19 = uVar19 - 2;
              iVar3 = *(int *)(lVar9 + 0x14);
              *(undefined *)((long)&local_68 + (long)*(int *)(*plVar1 + 0x14)) = 1;
              *(undefined *)((long)&local_68 + (long)iVar3) = 1;
            } while (uVar19 != 0);
            if (uVar14 == uVar8) goto LAB_00d67b7c;
          }
          lVar9 = uVar8 - uVar14;
          plVar12 = param_1 + uVar14 + 0x2d;
          do {
            lVar9 = lVar9 + -1;
            *(undefined *)((long)&local_68 + (long)*(int *)(*plVar12 + 0x14)) = 1;
            plVar12 = plVar12 + 1;
          } while (lVar9 != 0);
        }
        else {
          plVar12 = param_1 + 0x2d;
          do {
            lVar9 = *plVar12;
            uVar8 = uVar8 - 1;
            *(undefined *)((long)&local_68 + (long)*(int *)(lVar9 + 0x14)) = 1;
            *(undefined *)((long)&local_78 + (long)*(int *)(lVar9 + 0x18)) = 1;
            plVar12 = plVar12 + 1;
          } while (uVar8 != 0);
        }
      }
      else if (iVar3 != 0) {
        plVar12 = param_1 + 0x2d;
        do {
          uVar8 = uVar8 - 1;
          *(undefined *)((long)&local_78 + (long)*(int *)(*plVar12 + 0x18)) = 1;
          plVar12 = plVar12 + 1;
        } while (uVar8 != 0);
      }
    }
    else if (iVar3 != 0) {
      if (uVar2 < 2) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar8 & 0xfffffffe;
        plVar12 = param_1 + 0x2e;
        uVar19 = uVar14;
        do {
          plVar1 = plVar12 + -1;
          lVar9 = *plVar12;
          plVar12 = plVar12 + 2;
          uVar19 = uVar19 - 2;
          iVar3 = *(int *)(lVar9 + 0x18);
          *(undefined *)((long)&local_78 + (long)*(int *)(*plVar1 + 0x18)) = 1;
          *(undefined *)((long)&local_78 + (long)iVar3) = 1;
        } while (uVar19 != 0);
        if (uVar14 == uVar8) goto LAB_00d67b7c;
      }
      lVar9 = uVar8 - uVar14;
      plVar12 = param_1 + uVar14 + 0x2d;
      do {
        lVar9 = lVar9 + -1;
        *(undefined *)((long)&local_78 + (long)*(int *)(*plVar12 + 0x18)) = 1;
        plVar12 = plVar12 + 1;
      } while (lVar9 != 0);
    }
  }
LAB_00d67b7c:
  iVar3 = (uint)(byte)local_78 + (uint)(byte)local_68 + (uint)local_68._1_1_ + (uint)local_78._1_1_
          + (uint)local_68._2_1_ + (uint)local_78._2_1_ + (uint)local_68._3_1_ +
          (uint)local_78._3_1_ + (uint)local_68._4_1_ + (uint)local_78._4_1_ + (uint)local_68._5_1_
          + (uint)local_78._5_1_ + (uint)local_68._6_1_ + (uint)local_78._6_1_ +
          (uint)local_68._7_1_ + (uint)local_78._7_1_ + (uint)(byte)local_60 + (uint)(byte)local_70
          + (uint)local_60._1_1_ + (uint)local_70._1_1_ + (uint)local_60._2_1_ +
          (uint)local_70._2_1_ + (uint)local_60._3_1_ + (uint)local_70._3_1_ + (uint)local_60._4_1_
          + (uint)local_70._4_1_ + (uint)local_60._5_1_ + (uint)local_70._5_1_ +
          (uint)local_60._6_1_ + (uint)local_70._6_1_ + (uint)local_60._7_1_ + (uint)local_70._7_1_;
  if (iVar3 != 0) {
    puVar10 = (undefined8 *)param_1[5];
    puVar15 = (undefined *)*puVar10;
    *puVar10 = puVar15 + 1;
    *puVar15 = 0xff;
    lVar9 = puVar10[1];
    puVar10[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)puVar10[3])(param_1), cVar7 == '\0')) {
      ppcVar11 = (code **)*param_1;
      *(undefined4 *)(ppcVar11 + 5) = 0x19;
      (**ppcVar11)(param_1);
    }
    puVar10 = (undefined8 *)param_1[5];
    puVar15 = (undefined *)*puVar10;
    *puVar10 = puVar15 + 1;
    *puVar15 = 0xcc;
    lVar9 = puVar10[1];
    puVar10[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)puVar10[3])(param_1), cVar7 == '\0')) {
      ppcVar11 = (code **)*param_1;
      *(undefined4 *)(ppcVar11 + 5) = 0x19;
      (**ppcVar11)(param_1);
    }
    plVar12 = (long *)param_1[5];
    iVar3 = iVar3 * 2 + 2;
    puVar15 = (undefined *)*plVar12;
    *plVar12 = (long)(puVar15 + 1);
    *puVar15 = (char)((uint)iVar3 >> 8);
    lVar9 = plVar12[1];
    plVar12[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
      ppcVar11 = (code **)*param_1;
      *(undefined4 *)(ppcVar11 + 5) = 0x19;
      (**ppcVar11)(param_1);
    }
    plVar12 = (long *)param_1[5];
    puVar15 = (undefined *)*plVar12;
    *plVar12 = (long)(puVar15 + 1);
    *puVar15 = (char)iVar3;
    lVar9 = plVar12[1];
    plVar12[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
      ppcVar11 = (code **)*param_1;
      *(undefined4 *)(ppcVar11 + 5) = 0x19;
      (**ppcVar11)(param_1);
    }
    lVar9 = 0;
    do {
      if (*(char *)((long)&local_68 + lVar9) == '\0') {
LAB_00d67e8c:
        cVar7 = *(char *)((long)&local_78 + lVar9);
      }
      else {
        ppcVar13 = (char **)param_1[5];
        pcVar16 = *ppcVar13;
        *ppcVar13 = pcVar16 + 1;
        *pcVar16 = (char)lVar9;
        pcVar16 = ppcVar13[1];
        ppcVar13[1] = pcVar16 + -1;
        if ((pcVar16 + -1 == (char *)0x0) &&
           (cVar7 = (*(code *)ppcVar13[3])(param_1), cVar7 == '\0')) {
          ppcVar11 = (code **)*param_1;
          *(undefined4 *)(ppcVar11 + 5) = 0x19;
          (**ppcVar11)(param_1);
        }
        ppcVar13 = (char **)param_1[5];
        cVar7 = *(char *)((long)param_1 + lVar9 + 0xe0);
        pcVar16 = *ppcVar13;
        cVar18 = *(char *)((long)param_1 + lVar9 + 0xf0);
        *ppcVar13 = pcVar16 + 1;
        *pcVar16 = cVar7 + cVar18 * '\x10';
        pcVar16 = ppcVar13[1];
        ppcVar13[1] = pcVar16 + -1;
        if ((pcVar16 + -1 != (char *)0x0) ||
           (cVar7 = (*(code *)ppcVar13[3])(param_1), cVar7 != '\0')) goto LAB_00d67e8c;
        ppcVar11 = (code **)*param_1;
        *(undefined4 *)(ppcVar11 + 5) = 0x19;
        (**ppcVar11)(param_1);
        cVar7 = *(char *)((long)&local_78 + lVar9);
      }
      if (cVar7 != '\0') {
        ppcVar13 = (char **)param_1[5];
        pcVar16 = *ppcVar13;
        *ppcVar13 = pcVar16 + 1;
        *pcVar16 = (char)lVar9 + '\x10';
        pcVar16 = ppcVar13[1];
        ppcVar13[1] = pcVar16 + -1;
        if ((pcVar16 + -1 == (char *)0x0) &&
           (cVar7 = (*(code *)ppcVar13[3])(param_1), cVar7 == '\0')) {
          ppcVar11 = (code **)*param_1;
          *(undefined4 *)(ppcVar11 + 5) = 0x19;
          (**ppcVar11)(param_1);
        }
        plVar12 = (long *)param_1[5];
        puVar15 = (undefined *)*plVar12;
        uVar5 = *(undefined *)((long)param_1 + lVar9 + 0x100);
        *plVar12 = (long)(puVar15 + 1);
        *puVar15 = uVar5;
        lVar17 = plVar12[1];
        plVar12[1] = lVar17 + -1;
        if ((lVar17 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
          ppcVar11 = (code **)*param_1;
          *(undefined4 *)(ppcVar11 + 5) = 0x19;
          (**ppcVar11)(param_1);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x10);
  }
LAB_00d67f5c:
  if (*(int *)(param_1 + 0x26) != *(int *)(lVar20 + 0x38)) {
    puVar10 = (undefined8 *)param_1[5];
    puVar15 = (undefined *)*puVar10;
    *puVar10 = puVar15 + 1;
    *puVar15 = 0xff;
    lVar9 = puVar10[1];
    puVar10[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)puVar10[3])(param_1), cVar7 == '\0')) {
      ppcVar11 = (code **)*param_1;
      *(undefined4 *)(ppcVar11 + 5) = 0x19;
      (**ppcVar11)(param_1);
    }
    puVar10 = (undefined8 *)param_1[5];
    puVar15 = (undefined *)*puVar10;
    *puVar10 = puVar15 + 1;
    *puVar15 = 0xdd;
    lVar9 = puVar10[1];
    puVar10[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)puVar10[3])(param_1), cVar7 == '\0')) {
      ppcVar11 = (code **)*param_1;
      *(undefined4 *)(ppcVar11 + 5) = 0x19;
      (**ppcVar11)(param_1);
    }
    puVar10 = (undefined8 *)param_1[5];
    puVar15 = (undefined *)*puVar10;
    *puVar10 = puVar15 + 1;
    *puVar15 = 0;
    lVar9 = puVar10[1];
    puVar10[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)puVar10[3])(param_1), cVar7 == '\0')) {
      ppcVar11 = (code **)*param_1;
      *(undefined4 *)(ppcVar11 + 5) = 0x19;
      (**ppcVar11)(param_1);
    }
    puVar10 = (undefined8 *)param_1[5];
    puVar15 = (undefined *)*puVar10;
    *puVar10 = puVar15 + 1;
    *puVar15 = 4;
    lVar9 = puVar10[1];
    puVar10[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)puVar10[3])(param_1), cVar7 == '\0')) {
      ppcVar11 = (code **)*param_1;
      *(undefined4 *)(ppcVar11 + 5) = 0x19;
      (**ppcVar11)(param_1);
    }
    plVar12 = (long *)param_1[5];
    uVar4 = *(undefined4 *)(param_1 + 0x26);
    puVar15 = (undefined *)*plVar12;
    *plVar12 = (long)(puVar15 + 1);
    *puVar15 = (char)((uint)uVar4 >> 8);
    lVar9 = plVar12[1];
    plVar12[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
      ppcVar11 = (code **)*param_1;
      *(undefined4 *)(ppcVar11 + 5) = 0x19;
      (**ppcVar11)(param_1);
    }
    plVar12 = (long *)param_1[5];
    puVar15 = (undefined *)*plVar12;
    *plVar12 = (long)(puVar15 + 1);
    *puVar15 = (char)uVar4;
    lVar9 = plVar12[1];
    plVar12[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
      ppcVar11 = (code **)*param_1;
      *(undefined4 *)(ppcVar11 + 5) = 0x19;
      (**ppcVar11)(param_1);
    }
    *(undefined4 *)(lVar20 + 0x38) = *(undefined4 *)(param_1 + 0x26);
  }
  puVar10 = (undefined8 *)param_1[5];
  puVar15 = (undefined *)*puVar10;
  *puVar10 = puVar15 + 1;
  *puVar15 = 0xff;
  lVar20 = puVar10[1];
  puVar10[1] = lVar20 + -1;
  if ((lVar20 + -1 == 0) && (cVar7 = (*(code *)puVar10[3])(param_1), cVar7 == '\0')) {
    ppcVar11 = (code **)*param_1;
    *(undefined4 *)(ppcVar11 + 5) = 0x19;
    (**ppcVar11)(param_1);
  }
  puVar10 = (undefined8 *)param_1[5];
  puVar15 = (undefined *)*puVar10;
  *puVar10 = puVar15 + 1;
  *puVar15 = 0xda;
  lVar20 = puVar10[1];
  puVar10[1] = lVar20 + -1;
  if ((lVar20 + -1 == 0) && (cVar7 = (*(code *)puVar10[3])(param_1), cVar7 == '\0')) {
    ppcVar11 = (code **)*param_1;
    *(undefined4 *)(ppcVar11 + 5) = 0x19;
    (**ppcVar11)(param_1);
  }
  plVar12 = (long *)param_1[5];
  puVar15 = (undefined *)*plVar12;
  iVar3 = *(int *)((long)param_1 + 0x164) * 2 + 6;
  *plVar12 = (long)(puVar15 + 1);
  *puVar15 = (char)((uint)iVar3 >> 8);
  lVar20 = plVar12[1];
  plVar12[1] = lVar20 + -1;
  if ((lVar20 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
    ppcVar11 = (code **)*param_1;
    *(undefined4 *)(ppcVar11 + 5) = 0x19;
    (**ppcVar11)(param_1);
  }
  plVar12 = (long *)param_1[5];
  puVar15 = (undefined *)*plVar12;
  *plVar12 = (long)(puVar15 + 1);
  *puVar15 = (char)iVar3;
  lVar20 = plVar12[1];
  plVar12[1] = lVar20 + -1;
  if ((lVar20 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
    ppcVar11 = (code **)*param_1;
    *(undefined4 *)(ppcVar11 + 5) = 0x19;
    (**ppcVar11)(param_1);
  }
  plVar12 = (long *)param_1[5];
  uVar4 = *(undefined4 *)((long)param_1 + 0x164);
  puVar15 = (undefined *)*plVar12;
  *plVar12 = (long)(puVar15 + 1);
  *puVar15 = (char)uVar4;
  lVar20 = plVar12[1];
  plVar12[1] = lVar20 + -1;
  if ((lVar20 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
    ppcVar11 = (code **)*param_1;
    *(undefined4 *)(ppcVar11 + 5) = 0x19;
    (**ppcVar11)(param_1);
  }
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar20 = 0;
    do {
      plVar12 = (long *)param_1[5];
      puVar15 = (undefined *)*plVar12;
      puVar21 = (undefined4 *)param_1[lVar20 + 0x2d];
      uVar4 = *puVar21;
      *plVar12 = (long)(puVar15 + 1);
      *puVar15 = (char)uVar4;
      lVar9 = plVar12[1];
      plVar12[1] = lVar9 + -1;
      if ((lVar9 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
        ppcVar11 = (code **)*param_1;
        *(undefined4 *)(ppcVar11 + 5) = 0x19;
        (**ppcVar11)(param_1);
        if (*(int *)((long)param_1 + 0x1bc) != 0) goto LAB_00d683c0;
LAB_00d68388:
        if (*(int *)((long)param_1 + 0x1c4) != 0) goto LAB_00d683c0;
        cVar7 = (char)puVar21[5];
        cVar18 = cVar7;
        if (*(int *)(param_1 + 0x38) == 0) goto LAB_00d6839c;
LAB_00d683cc:
        cVar7 = cVar18;
        cVar18 = (char)puVar21[6];
      }
      else {
        if (*(int *)((long)param_1 + 0x1bc) == 0) goto LAB_00d68388;
LAB_00d683c0:
        cVar7 = '\0';
        cVar18 = '\0';
        if (*(int *)(param_1 + 0x38) != 0) goto LAB_00d683cc;
LAB_00d6839c:
        cVar18 = '\0';
      }
      ppcVar13 = (char **)param_1[5];
      pcVar16 = *ppcVar13;
      *ppcVar13 = pcVar16 + 1;
      *pcVar16 = cVar18 + cVar7 * '\x10';
      pcVar16 = ppcVar13[1];
      ppcVar13[1] = pcVar16 + -1;
      if ((pcVar16 + -1 == (char *)0x0) && (cVar7 = (*(code *)ppcVar13[3])(param_1), cVar7 == '\0'))
      {
        ppcVar11 = (code **)*param_1;
        *(undefined4 *)(ppcVar11 + 5) = 0x19;
        (**ppcVar11)(param_1);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)((long)param_1 + 0x164));
  }
  plVar12 = (long *)param_1[5];
  uVar4 = *(undefined4 *)((long)param_1 + 0x1bc);
  puVar15 = (undefined *)*plVar12;
  *plVar12 = (long)(puVar15 + 1);
  *puVar15 = (char)uVar4;
  lVar20 = plVar12[1];
  plVar12[1] = lVar20 + -1;
  if ((lVar20 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
    ppcVar11 = (code **)*param_1;
    *(undefined4 *)(ppcVar11 + 5) = 0x19;
    (**ppcVar11)(param_1);
  }
  plVar12 = (long *)param_1[5];
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  puVar15 = (undefined *)*plVar12;
  *plVar12 = (long)(puVar15 + 1);
  *puVar15 = (char)uVar4;
  lVar20 = plVar12[1];
  plVar12[1] = lVar20 + -1;
  if ((lVar20 + -1 == 0) && (cVar7 = (*(code *)plVar12[3])(param_1), cVar7 == '\0')) {
    ppcVar11 = (code **)*param_1;
    *(undefined4 *)(ppcVar11 + 5) = 0x19;
    (**ppcVar11)(param_1);
  }
  ppcVar13 = (char **)param_1[5];
  iVar3 = *(int *)((long)param_1 + 0x1c4);
  uVar4 = *(undefined4 *)(param_1 + 0x39);
  pcVar16 = *ppcVar13;
  *ppcVar13 = pcVar16 + 1;
  *pcVar16 = (char)uVar4 + (char)(iVar3 << 4);
  pcVar16 = ppcVar13[1];
  ppcVar13[1] = pcVar16 + -1;
  if ((pcVar16 + -1 == (char *)0x0) && (cVar7 = (*(code *)ppcVar13[3])(param_1), cVar7 == '\0')) {
    ppcVar11 = (code **)*param_1;
    *(undefined4 *)(ppcVar11 + 5) = 0x19;
    (**ppcVar11)(param_1);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


