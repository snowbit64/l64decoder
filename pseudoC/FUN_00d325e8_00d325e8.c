// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d325e8
// Entry Point: 00d325e8
// Size: 768 bytes
// Signature: undefined FUN_00d325e8(void)


char ** FUN_00d325e8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char **ppcVar11;
  char **ppcVar12;
  long lVar13;
  long lVar14;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar14 = *(long *)(param_1 + 0x2a0);
  lVar2 = lVar14 + 0xa0;
  ppcVar11 = (char **)(lVar14 + 0xb8);
  pcVar8 = *ppcVar11;
  if (pcVar8 == *(char **)(lVar14 + 0xb0)) {
    cVar5 = FUN_00d328e8(lVar2);
    if (cVar5 == '\0') goto LAB_00d32880;
    pcVar8 = *ppcVar11;
    *ppcVar11 = pcVar8 + 1;
    *pcVar8 = '\0';
    pcVar8 = *ppcVar11;
  }
  else {
    *ppcVar11 = pcVar8 + 1;
    *pcVar8 = '\0';
    pcVar8 = *ppcVar11;
  }
  local_60 = param_3;
  if (pcVar8 != (char *)0x0) goto LAB_00d32694;
  do {
    cVar5 = FUN_00d328e8(lVar2);
    if (cVar5 == '\0') goto LAB_00d32880;
LAB_00d32694:
    uVar6 = (**(code **)(param_2 + 0x70))
                      (param_2,&local_60,param_4,ppcVar11,*(undefined8 *)(lVar14 + 0xb0));
  } while (1 < uVar6);
  if (*(long *)(lVar14 + 0xc0) != 0) {
    puVar3 = *(undefined **)(lVar14 + 0xb8);
    if (puVar3 == *(undefined **)(lVar14 + 0xb0)) {
      cVar5 = FUN_00d328e8(lVar2);
      if (cVar5 == '\0') goto LAB_00d32880;
      pcVar8 = *ppcVar11;
      *(char **)(lVar14 + 0xb8) = pcVar8 + 1;
      *pcVar8 = '\0';
      lVar13 = *(long *)(lVar14 + 0xc0);
    }
    else {
      *(undefined **)(lVar14 + 0xb8) = puVar3 + 1;
      *puVar3 = 0;
      lVar13 = *(long *)(lVar14 + 0xc0);
    }
    if (lVar13 != 0) {
      pcVar8 = (char *)(lVar13 + 1);
      ppcVar12 = (char **)FUN_00d31dd4(param_1,lVar14 + 0x50,pcVar8,0x18);
      if (ppcVar12 == (char **)0x0) goto LAB_00d32884;
      if (*ppcVar12 != pcVar8) {
        *(undefined8 *)(lVar14 + 0xb8) = *(undefined8 *)(lVar14 + 0xc0);
        goto LAB_00d32884;
      }
      pcVar9 = *(char **)(lVar14 + 0xb8);
      *(char **)(lVar14 + 0xc0) = pcVar9;
      if (*(char *)(param_1 + 0x1c8) == '\0') goto LAB_00d32884;
      cVar5 = *pcVar8;
      if ((((cVar5 == 'x') && (*(char *)(lVar13 + 2) == 'm')) && (*(char *)(lVar13 + 3) == 'l')) &&
         ((*(char *)(lVar13 + 4) == 'n' && (*(char *)(lVar13 + 5) == 's')))) {
        if (*(char *)(lVar13 + 6) == ':') {
          pcVar8 = (char *)FUN_00d31dd4(param_1,lVar14 + 0x78,lVar13 + 7,0x10);
          ppcVar12[1] = pcVar8;
        }
        else {
          if (*(char *)(lVar13 + 6) != '\0') goto LAB_00d327ac;
          ppcVar12[1] = (char *)(lVar14 + 0x130);
        }
        *(undefined *)((long)ppcVar12 + 0x11) = 1;
      }
      else {
LAB_00d327ac:
        uVar10 = 0;
        while (cVar5 != '\0') {
          if (cVar5 == ':') {
            if ((int)uVar10 == 0) goto LAB_00d32820;
            uVar10 = uVar10 & 0xffffffff;
            goto LAB_00d32800;
          }
          pcVar1 = (char *)(lVar13 + 2 + uVar10);
          uVar10 = uVar10 + 1;
          cVar5 = *pcVar1;
        }
      }
      goto LAB_00d32884;
    }
  }
  goto LAB_00d32880;
LAB_00d32800:
  do {
    if (pcVar9 == *(char **)(lVar14 + 0xb0)) {
      cVar5 = FUN_00d328e8(lVar2);
      if (cVar5 == '\0') goto LAB_00d32880;
      pcVar9 = *ppcVar11;
    }
    uVar10 = uVar10 - 1;
    cVar5 = *pcVar8;
    *ppcVar11 = pcVar9 + 1;
    *pcVar9 = cVar5;
    pcVar9 = *ppcVar11;
    pcVar8 = pcVar8 + 1;
  } while (uVar10 != 0);
LAB_00d32820:
  if (pcVar9 == *(char **)(lVar14 + 0xb0)) {
    cVar5 = FUN_00d328e8(lVar2);
    if (cVar5 == '\0') goto LAB_00d32880;
    pcVar9 = *ppcVar11;
  }
  *(char **)(lVar14 + 0xb8) = pcVar9 + 1;
  *pcVar9 = '\0';
  ppcVar7 = (char **)FUN_00d31dd4(param_1,lVar14 + 0x78,*(undefined8 *)(lVar14 + 0xc0),0x10);
  ppcVar12[1] = (char *)ppcVar7;
  if (ppcVar7 != (char **)0x0) {
    if (*ppcVar7 == *(char **)(lVar14 + 0xc0)) {
      *(undefined8 *)(lVar14 + 0xc0) = *(undefined8 *)(lVar14 + 0xb8);
    }
    else {
      *ppcVar11 = *(char **)(lVar14 + 0xc0);
    }
    goto LAB_00d32884;
  }
LAB_00d32880:
  ppcVar12 = (char **)0x0;
LAB_00d32884:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return ppcVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


