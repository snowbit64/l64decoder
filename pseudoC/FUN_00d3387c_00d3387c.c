// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3387c
// Entry Point: 00d3387c
// Size: 720 bytes
// Signature: undefined FUN_00d3387c(void)


void FUN_00d3387c(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined *puVar10;
  long **pplVar11;
  char *pcVar12;
  long **pplVar13;
  long **pplVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (*(long *)(param_1 + 0x88) == 0) {
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      local_60 = param_3;
      if (*(char *)(param_2 + 0x84) != '\0') {
        (**(code **)(param_1 + 0xa0))
                  (*(undefined8 *)(param_1 + 8),param_3,(int)param_4 - (int)param_3);
        uVar8 = 1;
        if (*(long *)(lVar5 + 0x28) == local_58) {
          return;
        }
        goto LAB_00d33b48;
      }
      if (*(long *)(param_1 + 0x120) == param_2) {
        plVar16 = (long *)(param_1 + 0x220);
        plVar17 = (long *)(param_1 + 0x228);
      }
      else {
        plVar16 = *(long **)(param_1 + 0x238);
        plVar17 = plVar16 + 1;
      }
      do {
        local_68 = *(undefined8 *)(param_1 + 0x58);
        uVar7 = (**(code **)(param_2 + 0x70))
                          (param_2,&local_60,param_4,&local_68,*(undefined8 *)(param_1 + 0x60));
        *plVar17 = local_60;
        (**(code **)(param_1 + 0xa0))
                  (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                   (int)local_68 - (int)*(undefined8 *)(param_1 + 0x58));
        *plVar16 = local_60;
      } while (1 < uVar7);
    }
    uVar8 = 1;
    if (*(long *)(lVar5 + 0x28) == local_58) {
      return;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x80);
    puVar1 = (undefined8 *)(param_1 + 0x310);
    local_60 = param_3 + (long)iVar4 * 4;
    if ((*(long *)(param_1 + 0x328) != 0) || (cVar6 = FUN_00d328e8(puVar1), cVar6 != '\0')) {
      puVar2 = (undefined8 *)(param_1 + 800);
      puVar3 = (undefined8 *)(param_1 + 0x328);
      do {
        uVar7 = (**(code **)(param_2 + 0x70))
                          (param_2,&local_60,param_4 + (long)iVar4 * -3,puVar3,*puVar2);
        if (uVar7 < 2) {
          if (*(long *)(param_1 + 0x330) == 0) break;
          puVar10 = (undefined *)*puVar3;
          if (puVar10 == (undefined *)*puVar2) {
            cVar6 = FUN_00d328e8(puVar1);
            if (cVar6 == '\0') break;
            puVar10 = (undefined *)*puVar3;
            *(undefined **)(param_1 + 0x328) = puVar10 + 1;
            *puVar10 = 0;
            pcVar9 = *(char **)(param_1 + 0x330);
          }
          else {
            *(undefined **)(param_1 + 0x328) = puVar10 + 1;
            *puVar10 = 0;
            pcVar9 = *(char **)(param_1 + 0x330);
          }
          if (pcVar9 != (char *)0x0) {
            cVar6 = *pcVar9;
            goto joined_r0x00d339e0;
          }
          break;
        }
        cVar6 = FUN_00d328e8(puVar1);
      } while (cVar6 != '\0');
    }
    uVar8 = 0;
    if (*(long *)(lVar5 + 0x28) == local_58) {
      return;
    }
  }
  goto LAB_00d33b48;
joined_r0x00d339e0:
  if (cVar6 == '\0') {
    (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 8));
    pplVar11 = *(long ***)(param_1 + 0x318);
    pplVar13 = *(long ***)(param_1 + 0x310);
  }
  else {
    if (cVar6 != '\r') goto code_r0x00d339ec;
    cVar6 = '\r';
    pcVar12 = pcVar9;
    do {
      pcVar15 = pcVar12;
      if (cVar6 == '\r') {
        *pcVar15 = '\n';
        pcVar12 = pcVar9 + 1;
        if (*pcVar12 == '\n') {
          pcVar12 = pcVar9 + 2;
        }
        cVar6 = *pcVar12;
        pcVar9 = pcVar12;
      }
      else {
        *pcVar15 = cVar6;
        cVar6 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
      }
      pcVar12 = pcVar15 + 1;
    } while (cVar6 != '\0');
    pcVar15[1] = '\0';
    (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 8));
    pplVar11 = *(long ***)(param_1 + 0x318);
    pplVar13 = *(long ***)(param_1 + 0x310);
  }
  goto joined_r0x00d33a08;
code_r0x00d339ec:
  pcVar9 = pcVar9 + 1;
  cVar6 = *pcVar9;
  goto joined_r0x00d339e0;
joined_r0x00d33a08:
  if (pplVar11 == (long **)0x0) {
LAB_00d33ab0:
    *(long ***)(param_1 + 0x318) = pplVar13;
  }
  else {
    pplVar14 = pplVar13;
    if (pplVar13 != (long **)0x0) {
      do {
        pplVar13 = pplVar14;
        pplVar14 = (long **)*pplVar13;
        *pplVar13 = (long *)pplVar11;
        pplVar11 = pplVar13;
      } while (pplVar14 != (long **)0x0);
      goto LAB_00d33ab0;
    }
  }
  uVar8 = 1;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *puVar2 = 0;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_00d33b48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


