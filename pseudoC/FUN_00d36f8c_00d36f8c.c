// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d36f8c
// Entry Point: 00d36f8c
// Size: 1228 bytes
// Signature: undefined FUN_00d36f8c(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_00d36f8c(long param_1,long param_2,uint param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  char **ppcVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  ppcVar1 = (char **)(param_6 + 0x18);
  lVar12 = *(long *)(param_1 + 0x2a0);
  lVar15 = param_1 + 0x340;
  plVar2 = (long *)(param_1 + 0x358);
LAB_00d36ffc:
  lVar17 = param_4;
  uVar7 = (**(code **)(param_2 + 0x20))(param_2,lVar17,param_5,&local_78);
  lVar10 = local_78;
  uVar9 = 0;
  switch(uVar7) {
  case 0:
    if (*(long *)(param_1 + 0x120) == param_2) {
      uVar9 = 4;
      *(long *)(param_1 + 0x220) = local_78;
    }
    else {
      uVar9 = 4;
    }
    goto switchD_00d37038_caseD_fffffffc;
  case 6:
    local_70 = lVar17;
    if (*ppcVar1 != (char *)0x0) goto LAB_00d37340;
    do {
      cVar5 = FUN_00d328e8(param_6);
      if (cVar5 == '\0') goto LAB_00d3736c;
LAB_00d37340:
      uVar8 = (**(code **)(param_2 + 0x70))
                        (param_2,&local_70,lVar10,ppcVar1,*(undefined8 *)(param_6 + 0x10));
    } while (1 < uVar8);
    param_4 = local_78;
    if (*(long *)(param_6 + 0x20) == 0) goto LAB_00d3736c;
    goto LAB_00d36ffc;
  case 7:
  case 0x27:
    pcVar13 = *ppcVar1;
joined_r0x00d37048:
    if (((param_3 & 0xff) != 0) ||
       ((param_4 = local_78, pcVar13 != *(char **)(param_6 + 0x20) && (pcVar13[-1] != ' ')))) {
      if (pcVar13 == *(char **)(param_6 + 0x10)) {
        cVar5 = FUN_00d328e8(param_6);
        if (cVar5 == '\0') {
LAB_00d3736c:
          uVar9 = 1;
          goto switchD_00d37038_caseD_fffffffc;
        }
        pcVar13 = *ppcVar1;
      }
      *ppcVar1 = pcVar13 + 1;
      *pcVar13 = ' ';
      param_4 = local_78;
    }
    goto LAB_00d36ffc;
  case 9:
    cVar5 = (**(code **)(param_2 + 0x58))
                      (param_2,lVar17 + *(int *)(param_2 + 0x80),local_78 - *(int *)(param_2 + 0x80)
                      );
    lVar10 = local_78;
    if (cVar5 == '\0') {
      iVar3 = *(int *)(param_2 + 0x80);
      local_70 = lVar17 + iVar3;
      if ((*plVar2 == 0) && (cVar5 = FUN_00d328e8(lVar15), cVar5 == '\0')) goto LAB_00d3736c;
      while (uVar8 = (**(code **)(param_2 + 0x70))
                               (param_2,&local_70,lVar10 - iVar3,plVar2,
                                *(undefined8 *)(param_1 + 0x350)), 1 < uVar8) {
        cVar5 = FUN_00d328e8(lVar15);
        if (cVar5 == '\0') goto LAB_00d3736c;
      }
      if (*(long *)(param_1 + 0x360) == 0) goto LAB_00d3736c;
      puVar14 = *(undefined **)(param_1 + 0x358);
      if (puVar14 == *(undefined **)(param_1 + 0x350)) {
        cVar5 = FUN_00d328e8(lVar15);
        if (cVar5 == '\0') goto LAB_00d3736c;
        puVar14 = (undefined *)*plVar2;
      }
      *(undefined **)(param_1 + 0x358) = puVar14 + 1;
      *puVar14 = 0;
      if (*(long *)(param_1 + 0x360) == 0) goto LAB_00d3736c;
      lVar10 = FUN_00d31dd4(param_1,lVar12,*(long *)(param_1 + 0x360),0);
      *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x360);
      if (lVar12 + 0xa0 == param_6) {
        if (*(int *)(param_1 + 0x204) != 0) {
          if (*(char *)(lVar12 + 0x102) == '\0') {
            cVar5 = *(char *)(lVar12 + 0x101);
            goto joined_r0x00d372dc;
          }
          if (*(long *)(param_1 + 0x238) == 0) goto LAB_00d372a8;
        }
LAB_00d372e0:
        param_4 = local_78;
        if (lVar10 == 0) goto LAB_00d36ffc;
      }
      else {
        if (*(char *)(lVar12 + 0x101) != '\0') {
          cVar5 = *(char *)(lVar12 + 0x102);
joined_r0x00d372dc:
          if (cVar5 != '\0') goto LAB_00d372e0;
        }
LAB_00d372a8:
        if (lVar10 == 0) {
          uVar9 = 0xb;
          goto switchD_00d37038_caseD_fffffffc;
        }
        if (*(char *)(lVar10 + 0x3a) == '\0') {
          uVar9 = 0x18;
          goto switchD_00d37038_caseD_fffffffc;
        }
      }
      if (*(char *)(lVar10 + 0x38) != '\0') {
        lVar15 = *(long *)(param_1 + 0x120);
        uVar9 = 0xc;
        break;
      }
      if (*(long *)(lVar10 + 0x30) != 0) {
        lVar15 = *(long *)(param_1 + 0x120);
        uVar9 = 0xf;
        break;
      }
      lVar11 = *(long *)(lVar10 + 8);
      if (lVar11 == 0) {
        lVar15 = *(long *)(param_1 + 0x120);
        uVar9 = 0x10;
        break;
      }
      *(undefined *)(lVar10 + 0x38) = 1;
      uVar9 = FUN_00d36f8c(param_1,*(undefined8 *)(param_1 + 0x1b8),param_3,lVar11,
                           lVar11 + *(int *)(lVar10 + 0x10),param_6);
      *(undefined *)(lVar10 + 0x38) = 0;
      param_4 = local_78;
      if ((int)uVar9 != 0) {
switchD_00d37038_caseD_fffffffc:
        if (*(long *)(lVar4 + 0x28) == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar9);
      }
    }
    else {
      pcVar13 = *(char **)(param_6 + 0x18);
      if (pcVar13 == *(char **)(param_6 + 0x10)) {
        cVar6 = FUN_00d328e8(param_6);
        if (cVar6 == '\0') goto LAB_00d3736c;
        pcVar13 = *ppcVar1;
      }
      *ppcVar1 = pcVar13 + 1;
      *pcVar13 = cVar5;
      param_4 = local_78;
    }
    goto LAB_00d36ffc;
  case 10:
    uVar9 = (**(code **)(param_2 + 0x50))(param_2,lVar17);
    if (-1 < (int)uVar9) {
      if (((((param_3 & 0xff) != 0) || ((int)uVar9 != 0x20)) ||
          ((param_4 = local_78, *(long *)(param_6 + 0x18) != *(long *)(param_6 + 0x20) &&
           (param_4 = local_78, *(char *)(*(long *)(param_6 + 0x18) + -1) != ' ')))) &&
         (uVar8 = XmlUtf8Encode(uVar9,&local_70), param_4 = local_78, 0 < (int)uVar8)) {
        uVar16 = (ulong)uVar8;
        plVar18 = &local_70;
        do {
          pcVar13 = *(char **)(param_6 + 0x18);
          if (pcVar13 == *(char **)(param_6 + 0x10)) {
            cVar5 = FUN_00d328e8(param_6);
            if (cVar5 == '\0') goto LAB_00d3736c;
            pcVar13 = *ppcVar1;
          }
          uVar16 = uVar16 - 1;
          cVar5 = *(char *)plVar18;
          *ppcVar1 = pcVar13 + 1;
          *pcVar13 = cVar5;
          plVar18 = (long *)((long)plVar18 + 1);
          param_4 = local_78;
        } while (uVar16 != 0);
      }
      goto LAB_00d36ffc;
    }
    lVar15 = *(long *)(param_1 + 0x120);
    uVar9 = 0xe;
    break;
  case 0xfffffffc:
    goto switchD_00d37038_caseD_fffffffc;
  case 0xfffffffd:
    local_78 = lVar17 + *(int *)(param_2 + 0x80);
    pcVar13 = *ppcVar1;
    goto joined_r0x00d37048;
  default:
    lVar15 = *(long *)(param_1 + 0x120);
    uVar9 = 0x17;
    break;
  case 0xffffffff:
    lVar15 = *(long *)(param_1 + 0x120);
    uVar9 = 4;
  }
  if (lVar15 == param_2) {
    *(long *)(param_1 + 0x220) = lVar17;
  }
  goto switchD_00d37038_caseD_fffffffc;
}


