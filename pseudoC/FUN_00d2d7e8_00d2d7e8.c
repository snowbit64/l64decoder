// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2d7e8
// Entry Point: 00d2d7e8
// Size: 752 bytes
// Signature: undefined FUN_00d2d7e8(void)


undefined4 FUN_00d2d7e8(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  char **ppcVar4;
  long lVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  
  cVar2 = *param_2;
  if (cVar2 == '\0') {
    return 1;
  }
  lVar8 = *(long *)(param_1 + 0x2a0);
  lVar1 = param_1 + 0x310;
  pcVar9 = param_2;
  do {
    if (cVar2 == '\0') {
LAB_00d2da20:
      puVar6 = *(undefined **)(param_1 + 0x328);
      if (puVar6 == *(undefined **)(param_1 + 800)) {
        cVar2 = FUN_00d328e8(lVar1);
        if (cVar2 == '\0') {
          return 0;
        }
        puVar6 = *(undefined **)(param_1 + 0x328);
      }
      *(undefined **)(param_1 + 0x328) = puVar6 + 1;
      *puVar6 = 0;
      lVar5 = FUN_00d31dd4(param_1,lVar8,*(undefined8 *)(param_1 + 0x330),0);
      if (lVar5 != 0) {
        *(undefined *)(lVar5 + 0x38) = 1;
      }
      if (*param_2 != '\0') {
        param_2 = param_2 + 1;
      }
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x330);
      cVar2 = *param_2;
      pcVar9 = param_2;
    }
    else if (cVar2 == '=') {
      puVar6 = *(undefined **)(param_1 + 0x328);
      ppcVar4 = (char **)(lVar8 + 0x130);
      if (puVar6 != *(undefined **)(param_1 + 0x330)) {
        if (puVar6 == *(undefined **)(param_1 + 800)) {
          cVar2 = FUN_00d328e8(lVar1);
          if (cVar2 == '\0') {
            return 0;
          }
          puVar6 = *(undefined **)(param_1 + 0x328);
        }
        *(undefined **)(param_1 + 0x328) = puVar6 + 1;
        *puVar6 = 0;
        ppcVar4 = (char **)FUN_00d31dd4(param_1,lVar8 + 0x78,*(undefined8 *)(param_1 + 0x330),0x10);
        if (ppcVar4 == (char **)0x0) {
          return 0;
        }
        pcVar9 = *ppcVar4;
        pcVar7 = *(char **)(param_1 + 0x330);
        if (pcVar9 == pcVar7) {
          do {
            pcVar7 = *(char **)(lVar8 + 0xb8);
            if (pcVar7 == *(char **)(lVar8 + 0xb0)) {
              cVar2 = FUN_00d328e8(lVar8 + 0xa0);
              if (cVar2 == '\0') {
                *ppcVar4 = (char *)0x0;
                return 0;
              }
              pcVar7 = *(char **)(lVar8 + 0xb8);
            }
            cVar2 = *pcVar9;
            *(char **)(lVar8 + 0xb8) = pcVar7 + 1;
            *pcVar7 = cVar2;
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          pcVar9 = *(char **)(lVar8 + 0xc0);
          *(undefined8 *)(lVar8 + 0xc0) = *(undefined8 *)(lVar8 + 0xb8);
          *ppcVar4 = pcVar9;
          if (pcVar9 == (char *)0x0) {
            return 0;
          }
          pcVar7 = *(char **)(param_1 + 0x330);
        }
        *(char **)(param_1 + 0x328) = pcVar7;
      }
      while( true ) {
        pcVar9 = param_2 + 1;
        cVar2 = *pcVar9;
        if ((cVar2 == '\0') || (cVar2 == '\f')) break;
        pcVar7 = *(char **)(param_1 + 0x328);
        if (pcVar7 == *(char **)(param_1 + 800)) {
          cVar2 = FUN_00d328e8(lVar1);
          if (cVar2 == '\0') {
            return 0;
          }
          cVar2 = *pcVar9;
          pcVar7 = *(char **)(param_1 + 0x328);
        }
        *(char **)(param_1 + 0x328) = pcVar7 + 1;
        *pcVar7 = cVar2;
        param_2 = pcVar9;
      }
      puVar6 = *(undefined **)(param_1 + 0x328);
      if (puVar6 == *(undefined **)(param_1 + 800)) {
        cVar2 = FUN_00d328e8(lVar1);
        if (cVar2 == '\0') {
          return 0;
        }
        puVar6 = *(undefined **)(param_1 + 0x328);
      }
      *(undefined **)(param_1 + 0x328) = puVar6 + 1;
      *puVar6 = 0;
      iVar3 = FUN_00d36b10(param_1,ppcVar4,0,*(undefined8 *)(param_1 + 0x330),param_1 + 0x2c0);
      if (iVar3 != 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x330);
      pcVar7 = param_2 + 2;
      param_2 = pcVar9;
      if (*pcVar9 != '\0') {
        param_2 = pcVar7;
      }
      cVar2 = *param_2;
      pcVar9 = param_2;
    }
    else {
      if (cVar2 == '\f') goto LAB_00d2da20;
      pcVar7 = *(char **)(param_1 + 0x328);
      if (pcVar7 == *(char **)(param_1 + 800)) {
        cVar2 = FUN_00d328e8(lVar1);
        if (cVar2 == '\0') {
          return 0;
        }
        cVar2 = *param_2;
        pcVar7 = *(char **)(param_1 + 0x328);
      }
      param_2 = param_2 + 1;
      *(char **)(param_1 + 0x328) = pcVar7 + 1;
      *pcVar7 = cVar2;
      cVar2 = *pcVar9;
    }
    if (cVar2 == '\0') {
      return 1;
    }
    cVar2 = *param_2;
  } while( true );
}


