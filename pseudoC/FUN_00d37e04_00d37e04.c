// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d37e04
// Entry Point: 00d37e04
// Size: 788 bytes
// Signature: undefined FUN_00d37e04(void)


undefined8
FUN_00d37e04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,long param_5)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char **ppcVar9;
  long lVar10;
  int iVar11;
  char *pcVar12;
  
  lVar10 = 0;
  pcVar8 = (char *)0x0;
  puVar6 = param_4;
  do {
    do {
      if (puVar6 == param_4 + param_5) {
        return 1;
      }
      puVar7 = puVar6 + 1;
      ppcVar9 = (char **)*puVar6;
      puVar6 = puVar7;
    } while (ppcVar9 == (char **)0x0);
    pcVar12 = *ppcVar9;
    do {
      pcVar5 = *(char **)(param_3 + 0x18);
      if (pcVar5 == *(char **)(param_3 + 0x10)) {
        cVar3 = FUN_00d328e8(param_3);
        if (cVar3 == '\0') {
          return 0;
        }
        pcVar5 = *(char **)(param_3 + 0x18);
      }
      cVar3 = *pcVar12;
      *(char **)(param_3 + 0x18) = pcVar5 + 1;
      *pcVar5 = cVar3;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    lVar4 = *(long *)(param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_3 + 0x18);
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = FUN_00d31dd4(param_1,param_2,lVar4,0x40);
    if (lVar4 == 0) {
      return 0;
    }
    pcVar12 = ppcVar9[3];
    if (ppcVar9[3] == (char *)0x0) {
      pcVar12 = ppcVar9[1];
      iVar11 = *(int *)(ppcVar9 + 2);
      if ((*(long *)(param_3 + 0x18) == 0) && (cVar3 = FUN_00d328e8(param_3), cVar3 == '\0')) {
        return 0;
      }
      if (0 < iVar11) {
        iVar11 = iVar11 + 1;
        do {
          pcVar5 = *(char **)(param_3 + 0x18);
          if (pcVar5 == *(char **)(param_3 + 0x10)) {
            cVar3 = FUN_00d328e8(param_3);
            if (cVar3 == '\0') {
              return 0;
            }
            pcVar5 = *(char **)(param_3 + 0x18);
          }
          iVar11 = iVar11 + -1;
          cVar3 = *pcVar12;
          *(char **)(param_3 + 0x18) = pcVar5 + 1;
          *pcVar5 = cVar3;
          pcVar12 = pcVar12 + 1;
        } while (1 < iVar11);
      }
      pcVar12 = *(char **)(param_3 + 0x18);
      lVar1 = *(long *)(param_3 + 0x20);
      *(char **)(param_3 + 0x20) = pcVar12;
      if (lVar1 == 0) {
        return 0;
      }
      uVar2 = *(undefined4 *)(ppcVar9 + 2);
      *(long *)(lVar4 + 8) = lVar1;
      *(undefined4 *)(lVar4 + 0x10) = uVar2;
    }
    else {
      do {
        pcVar5 = *(char **)(param_3 + 0x18);
        if (pcVar5 == *(char **)(param_3 + 0x10)) {
          cVar3 = FUN_00d328e8(param_3);
          if (cVar3 == '\0') {
            return 0;
          }
          pcVar5 = *(char **)(param_3 + 0x18);
        }
        cVar3 = *pcVar12;
        *(char **)(param_3 + 0x18) = pcVar5 + 1;
        *pcVar5 = cVar3;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      pcVar12 = *(char **)(param_3 + 0x18);
      lVar1 = *(long *)(param_3 + 0x20);
      *(char **)(param_3 + 0x20) = pcVar12;
      if (lVar1 == 0) {
        return 0;
      }
      pcVar5 = ppcVar9[4];
      *(long *)(lVar4 + 0x18) = lVar1;
      if (pcVar5 != (char *)0x0) {
        if (pcVar5 != pcVar8) {
          pcVar8 = pcVar5;
          if (pcVar12 != *(char **)(param_3 + 0x10)) goto LAB_00d37fb8;
          do {
            cVar3 = FUN_00d328e8(param_3);
            if (cVar3 == '\0') {
              return 0;
            }
            pcVar12 = *(char **)(param_3 + 0x18);
LAB_00d37fb8:
            do {
              cVar3 = *pcVar8;
              *(char **)(param_3 + 0x18) = pcVar12 + 1;
              *pcVar12 = cVar3;
              if (*pcVar8 == '\0') {
                pcVar12 = *(char **)(param_3 + 0x18);
                lVar10 = *(long *)(param_3 + 0x20);
                *(char **)(param_3 + 0x20) = pcVar12;
                pcVar8 = pcVar5;
                if (lVar10 == 0) {
                  return 0;
                }
                goto LAB_00d38010;
              }
              pcVar12 = *(char **)(param_3 + 0x18);
              pcVar8 = pcVar8 + 1;
            } while (pcVar12 != *(char **)(param_3 + 0x10));
          } while( true );
        }
LAB_00d38010:
        *(long *)(lVar4 + 0x20) = lVar10;
      }
      pcVar5 = ppcVar9[5];
      if (pcVar5 != (char *)0x0) {
        if (pcVar12 != *(char **)(param_3 + 0x10)) goto LAB_00d3803c;
        do {
          cVar3 = FUN_00d328e8(param_3);
          if (cVar3 == '\0') {
            return 0;
          }
          pcVar12 = *(char **)(param_3 + 0x18);
LAB_00d3803c:
          do {
            cVar3 = *pcVar5;
            *(char **)(param_3 + 0x18) = pcVar12 + 1;
            *pcVar12 = cVar3;
            if (*pcVar5 == '\0') {
              pcVar12 = *(char **)(param_3 + 0x18);
              lVar1 = *(long *)(param_3 + 0x20);
              *(char **)(param_3 + 0x20) = pcVar12;
              if (lVar1 == 0) {
                return 0;
              }
              *(long *)(lVar4 + 0x28) = lVar1;
              goto LAB_00d38078;
            }
            pcVar12 = *(char **)(param_3 + 0x18);
            pcVar5 = pcVar5 + 1;
          } while (pcVar12 != *(char **)(param_3 + 0x10));
        } while( true );
      }
    }
LAB_00d38078:
    pcVar5 = ppcVar9[6];
    if (pcVar5 != (char *)0x0) {
      if (pcVar12 != *(char **)(param_3 + 0x10)) goto LAB_00d380a0;
      do {
        cVar3 = FUN_00d328e8(param_3);
        if (cVar3 == '\0') {
          return 0;
        }
        pcVar12 = *(char **)(param_3 + 0x18);
LAB_00d380a0:
        do {
          cVar3 = *pcVar5;
          *(char **)(param_3 + 0x18) = pcVar12 + 1;
          *pcVar12 = cVar3;
          if (*pcVar5 == '\0') {
            lVar1 = *(long *)(param_3 + 0x20);
            *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_3 + 0x18);
            if (lVar1 == 0) {
              return 0;
            }
            *(long *)(lVar4 + 0x30) = lVar1;
            goto LAB_00d380dc;
          }
          pcVar12 = *(char **)(param_3 + 0x18);
          pcVar5 = pcVar5 + 1;
        } while (pcVar12 != *(char **)(param_3 + 0x10));
      } while( true );
    }
LAB_00d380dc:
    *(undefined2 *)(lVar4 + 0x39) = *(undefined2 *)((long)ppcVar9 + 0x39);
  } while( true );
}


