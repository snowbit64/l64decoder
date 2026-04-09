// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d32af4
// Entry Point: 00d32af4
// Size: 1064 bytes
// Signature: undefined FUN_00d32af4(void)


void FUN_00d32af4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined uVar4;
  long lVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long local_78;
  long local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar16 = *(long *)(param_1 + 0x2a0);
  uVar3 = *(undefined4 *)(param_1 + 0x208);
  plVar17 = (long *)(lVar16 + 0xd0);
  lVar13 = *plVar17;
  *(undefined4 *)(param_1 + 0x208) = 1;
  if ((lVar13 != 0) || (cVar6 = FUN_00d328e8(plVar17), cVar6 != '\0')) {
    plVar1 = (long *)(lVar16 + 0xe8);
    lVar13 = param_1 + 0x310;
    plVar2 = (long *)(param_1 + 0x328);
LAB_00d32b78:
    uVar7 = (**(code **)(param_2 + 0x28))(param_2,param_3,param_4,&local_78);
    lVar11 = local_78;
    uVar10 = 0;
    switch(uVar7) {
    case 0:
      if (*(long *)(param_1 + 0x120) == param_2) {
        uVar10 = 4;
        *(long *)(param_1 + 0x220) = local_78;
      }
      else {
        uVar10 = 4;
      }
      goto switchD_00d32bb4_caseD_fffffffc;
    case 6:
    case 9:
      local_70 = param_3;
      if (*plVar1 != 0) goto LAB_00d32e04;
      do {
        cVar6 = FUN_00d328e8(plVar17);
        if (cVar6 == '\0') goto LAB_00d32e3c;
LAB_00d32e04:
        uVar8 = (**(code **)(param_2 + 0x70))
                          (param_2,&local_70,lVar11,plVar1,*(undefined8 *)(lVar16 + 0xe0));
      } while (1 < uVar8);
      param_3 = local_78;
      if (*(long *)(lVar16 + 0xf0) == 0) goto LAB_00d32e3c;
      goto LAB_00d32b78;
    case 10:
      uVar10 = (**(code **)(param_2 + 0x50))(param_2,param_3);
      if (-1 < (int)uVar10) {
        uVar8 = XmlUtf8Encode(uVar10,&local_70);
        param_3 = local_78;
        if (0 < (int)uVar8) {
          uVar18 = (ulong)uVar8;
          plVar19 = &local_70;
          do {
            puVar14 = *(undefined **)(lVar16 + 0xe8);
            if (*(undefined **)(lVar16 + 0xe0) == puVar14) {
              cVar6 = FUN_00d328e8(plVar17);
              if (cVar6 == '\0') goto LAB_00d32e3c;
              puVar14 = (undefined *)*plVar1;
            }
            uVar18 = uVar18 - 1;
            uVar4 = *(undefined *)plVar19;
            *plVar1 = (long)(puVar14 + 1);
            *puVar14 = uVar4;
            param_3 = local_78;
            plVar19 = (long *)((long)plVar19 + 1);
          } while (uVar18 != 0);
        }
        goto LAB_00d32b78;
      }
      lVar13 = *(long *)(param_1 + 0x120);
      uVar10 = 0xe;
      break;
    case 0x1c:
      if ((*(char *)(param_1 + 0x390) == '\0') && (*(long *)(param_1 + 0x120) == param_2)) {
        uVar10 = 10;
        goto LAB_00d32f08;
      }
      iVar9 = *(int *)(param_2 + 0x80);
      local_70 = param_3 + iVar9;
      if ((*plVar2 == 0) && (cVar6 = FUN_00d328e8(lVar13), cVar6 == '\0')) {
LAB_00d32e44:
        uVar10 = 1;
        goto switchD_00d32bb4_caseD_fffffffc;
      }
      while (uVar8 = (**(code **)(param_2 + 0x70))
                               (param_2,&local_70,lVar11 - iVar9,plVar2,
                                *(undefined8 *)(param_1 + 800)), 1 < uVar8) {
        cVar6 = FUN_00d328e8(lVar13);
        if (cVar6 == '\0') goto LAB_00d32e44;
      }
      if (*(long *)(param_1 + 0x330) == 0) goto LAB_00d32e44;
      puVar14 = *(undefined **)(param_1 + 0x328);
      if (puVar14 == *(undefined **)(param_1 + 800)) {
        cVar6 = FUN_00d328e8(lVar13);
        if (cVar6 == '\0') goto LAB_00d32e3c;
        puVar14 = (undefined *)*plVar2;
      }
      *(undefined **)(param_1 + 0x328) = puVar14 + 1;
      *puVar14 = 0;
      if (*(long *)(param_1 + 0x330) == 0) goto LAB_00d32e3c;
      lVar11 = FUN_00d31dd4(param_1,lVar16 + 0x108,*(long *)(param_1 + 0x330),0);
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x330);
      if (lVar11 == 0) {
        *(undefined *)(lVar16 + 0x100) = *(undefined *)(lVar16 + 0x102);
        uVar10 = 0;
        goto switchD_00d32bb4_caseD_fffffffc;
      }
      if (*(char *)(lVar11 + 0x38) != '\0') {
        lVar13 = *(long *)(param_1 + 0x120);
        uVar10 = 0xc;
        break;
      }
      lVar12 = *(long *)(lVar11 + 0x18);
      if (lVar12 == 0) goto LAB_00d32db4;
      pcVar15 = *(code **)(param_1 + 0xe0);
      if (pcVar15 == (code *)0x0) {
        *(undefined *)(lVar16 + 0x100) = *(undefined *)(lVar16 + 0x102);
        param_3 = local_78;
      }
      else {
        *(undefined *)(lVar16 + 0x103) = 0;
        *(undefined *)(lVar11 + 0x38) = 1;
        iVar9 = (*pcVar15)(*(undefined8 *)(param_1 + 0xe8),0,*(undefined8 *)(lVar11 + 0x20),lVar12,
                           *(undefined8 *)(lVar11 + 0x28));
        if (iVar9 == 0) {
          uVar10 = 0x15;
          *(undefined *)(lVar11 + 0x38) = 0;
          goto switchD_00d32bb4_caseD_fffffffc;
        }
        *(undefined *)(lVar11 + 0x38) = 0;
        param_3 = local_78;
        if (*(char *)(lVar16 + 0x103) == '\0') {
          *(undefined *)(lVar16 + 0x100) = *(undefined *)(lVar16 + 0x102);
        }
      }
      goto LAB_00d32b78;
    case 0xfffffffc:
      goto switchD_00d32bb4_caseD_fffffffc;
    case 0xfffffffd:
      local_78 = param_3 + *(int *)(param_2 + 0x80);
    case 7:
      puVar14 = *(undefined **)(lVar16 + 0xe8);
      if (*(undefined **)(lVar16 + 0xe0) == puVar14) {
        cVar6 = FUN_00d328e8(plVar17);
        if (cVar6 == '\0') {
LAB_00d32e3c:
          uVar10 = 1;
          goto switchD_00d32bb4_caseD_fffffffc;
        }
        puVar14 = (undefined *)*plVar1;
      }
      *plVar1 = (long)(puVar14 + 1);
      *puVar14 = 10;
      param_3 = local_78;
      goto LAB_00d32b78;
    default:
      lVar13 = *(long *)(param_1 + 0x120);
      uVar10 = 0x17;
      break;
    case 0xffffffff:
      lVar13 = *(long *)(param_1 + 0x120);
      uVar10 = 4;
    }
    if (lVar13 == param_2) {
LAB_00d32f08:
      *(long *)(param_1 + 0x220) = param_3;
    }
    goto switchD_00d32bb4_caseD_fffffffc;
  }
  uVar10 = 1;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00d32e98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
LAB_00d32db4:
  *(undefined *)(lVar11 + 0x38) = 1;
  uVar10 = FUN_00d32af4(param_1,*(undefined8 *)(param_1 + 0x1b8),*(long *)(lVar11 + 8),
                        *(long *)(lVar11 + 8) + (long)*(int *)(lVar11 + 0x10));
  *(undefined *)(lVar11 + 0x38) = 0;
  param_3 = local_78;
  if ((int)uVar10 != 0) goto switchD_00d32bb4_caseD_fffffffc;
  goto LAB_00d32b78;
switchD_00d32bb4_caseD_fffffffc:
  *(undefined4 *)(param_1 + 0x208) = uVar3;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
  goto LAB_00d32e98;
}


