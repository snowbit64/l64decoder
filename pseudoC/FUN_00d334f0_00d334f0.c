// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d334f0
// Entry Point: 00d334f0
// Size: 908 bytes
// Signature: undefined FUN_00d334f0(void)


void FUN_00d334f0(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined *puVar10;
  char *pcVar11;
  long **pplVar12;
  long **pplVar13;
  long **pplVar14;
  char *pcVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x80) == 0) {
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      local_70 = param_3;
      if (*(char *)(param_2 + 0x84) != '\0') {
        (**(code **)(param_1 + 0xa0))
                  (*(undefined8 *)(param_1 + 8),param_3,(int)param_4 - (int)param_3);
        uVar8 = 1;
        if (*(long *)(lVar4 + 0x28) == local_68) {
          return;
        }
        goto LAB_00d33878;
      }
      if (*(long *)(param_1 + 0x120) == param_2) {
        plVar17 = (long *)(param_1 + 0x220);
        plVar18 = (long *)(param_1 + 0x228);
      }
      else {
        plVar17 = *(long **)(param_1 + 0x238);
        plVar18 = plVar17 + 1;
      }
      do {
        local_78 = *(undefined8 *)(param_1 + 0x58);
        uVar7 = (**(code **)(param_2 + 0x70))
                          (param_2,&local_70,param_4,&local_78,*(undefined8 *)(param_1 + 0x60));
        *plVar18 = local_70;
        (**(code **)(param_1 + 0xa0))
                  (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                   (int)local_78 - (int)*(undefined8 *)(param_1 + 0x58));
        *plVar17 = local_70;
      } while (1 < uVar7);
    }
    uVar8 = 1;
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
    goto LAB_00d33878;
  }
  param_3 = param_3 + (long)*(int *)(param_2 + 0x80) * 2;
  iVar6 = (**(code **)(param_2 + 0x38))(param_2,param_3);
  puVar1 = (undefined8 *)(param_1 + 0x310);
  local_70 = param_3;
  if ((*(long *)(param_1 + 0x328) != 0) || (cVar5 = FUN_00d328e8(puVar1), cVar5 != '\0')) {
    puVar2 = (undefined8 *)(param_1 + 0x328);
    puVar3 = (undefined8 *)(param_1 + 800);
    do {
      uVar7 = (**(code **)(param_2 + 0x70))(param_2,&local_70,param_3 + iVar6,puVar2,*puVar3);
      if (uVar7 < 2) {
        if (*(long *)(param_1 + 0x330) == 0) break;
        puVar10 = (undefined *)*puVar2;
        if (puVar10 == (undefined *)*puVar3) {
          cVar5 = FUN_00d328e8(puVar1);
          if (cVar5 == '\0') break;
          puVar10 = (undefined *)*puVar2;
          *(undefined **)(param_1 + 0x328) = puVar10 + 1;
          *puVar10 = 0;
          lVar16 = *(long *)(param_1 + 0x330);
        }
        else {
          *(undefined **)(param_1 + 0x328) = puVar10 + 1;
          *puVar10 = 0;
          lVar16 = *(long *)(param_1 + 0x330);
        }
        if (lVar16 != 0) {
          *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
          local_70 = (**(code **)(param_2 + 0x40))(param_2,param_3 + iVar6);
          iVar6 = *(int *)(param_2 + 0x80);
          if ((*(long *)(param_1 + 0x328) != 0) || (cVar5 = FUN_00d328e8(puVar1), cVar5 != '\0')) {
            goto LAB_00d3369c;
          }
        }
        break;
      }
      cVar5 = FUN_00d328e8(puVar1);
    } while (cVar5 != '\0');
  }
  goto LAB_00d33734;
joined_r0x00d3371c:
  if (cVar5 == '\0') goto LAB_00d33818;
  if (cVar5 == '\r') {
    cVar5 = '\r';
    pcVar11 = pcVar9;
    do {
      pcVar15 = pcVar11;
      if (cVar5 == '\r') {
        *pcVar15 = '\n';
        pcVar11 = pcVar9 + 1;
        if (*pcVar11 == '\n') {
          pcVar11 = pcVar9 + 2;
        }
        cVar5 = *pcVar11;
        pcVar9 = pcVar11;
      }
      else {
        *pcVar15 = cVar5;
        cVar5 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
      }
      pcVar11 = pcVar15 + 1;
    } while (cVar5 != '\0');
    pcVar15[1] = '\0';
LAB_00d33818:
    (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 8),lVar16);
    pplVar13 = *(long ***)(param_1 + 0x310);
    if (*(long ***)(param_1 + 0x318) == (long **)0x0) {
LAB_00d33854:
      *(long ***)(param_1 + 0x318) = pplVar13;
    }
    else {
      pplVar12 = *(long ***)(param_1 + 0x318);
      pplVar14 = pplVar13;
      if (pplVar13 != (long **)0x0) {
        do {
          pplVar13 = pplVar14;
          pplVar14 = (long **)*pplVar13;
          *pplVar13 = (long *)pplVar12;
          pplVar12 = pplVar13;
        } while (pplVar14 != (long **)0x0);
        goto LAB_00d33854;
      }
    }
    uVar8 = 1;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *puVar3 = 0;
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
    goto LAB_00d33878;
  }
  pcVar9 = pcVar9 + 1;
  cVar5 = *pcVar9;
  goto joined_r0x00d3371c;
  while (cVar5 = FUN_00d328e8(puVar1), cVar5 != '\0') {
LAB_00d3369c:
    uVar7 = (**(code **)(param_2 + 0x70))
                      (param_2,&local_70,param_4 + (long)iVar6 * -2,puVar2,*puVar3);
    if (uVar7 < 2) {
      if (*(long *)(param_1 + 0x330) == 0) break;
      puVar10 = (undefined *)*puVar2;
      if (puVar10 == (undefined *)*puVar3) {
        cVar5 = FUN_00d328e8(puVar1);
        if (cVar5 == '\0') break;
        puVar10 = (undefined *)*puVar2;
      }
      *(undefined **)(param_1 + 0x328) = puVar10 + 1;
      *puVar10 = 0;
      pcVar9 = *(char **)(param_1 + 0x330);
      if (pcVar9 != (char *)0x0) {
        cVar5 = *pcVar9;
        goto joined_r0x00d3371c;
      }
      break;
    }
  }
LAB_00d33734:
  uVar8 = 0;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_00d33878:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


