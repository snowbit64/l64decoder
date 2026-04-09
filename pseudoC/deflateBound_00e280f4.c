// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflateBound
// Entry Point: 00e280f4
// Size: 352 bytes
// Signature: undefined deflateBound(void)


long deflateBound(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  lVar1 = param_2 + (param_2 + 7 >> 3) + (param_2 + 0x3f >> 6);
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar4 = *(long **)(param_1 + 0x38), plVar4 != (long *)0x0 && (*plVar4 == param_1)))) {
    iVar2 = *(int *)(plVar4 + 1);
    if (((iVar2 - 0x39U < 0x39) &&
        ((1L << ((ulong)(iVar2 - 0x39U) & 0x3f) & 0x100400400011001U) != 0)) ||
       ((iVar2 == 0x2a || (iVar2 == 0x29a)))) {
      iVar2 = *(int *)(plVar4 + 6);
      if (iVar2 == 0) {
        lVar6 = 0;
      }
      else if (iVar2 == 2) {
        lVar5 = plVar4[7];
        if (lVar5 == 0) {
          lVar6 = 0x12;
        }
        else {
          if (*(long *)(lVar5 + 0x18) == 0) {
            lVar6 = 0x12;
          }
          else {
            lVar6 = (ulong)(*(int *)(lVar5 + 0x20) + 2) + 0x12;
          }
          pcVar7 = *(char **)(lVar5 + 0x28);
          if (*(char **)(lVar5 + 0x28) != (char *)0x0) {
            do {
              cVar3 = *pcVar7;
              lVar6 = lVar6 + 1;
              pcVar7 = pcVar7 + 1;
            } while (cVar3 != '\0');
          }
          pcVar7 = *(char **)(lVar5 + 0x38);
          if (*(char **)(lVar5 + 0x38) != (char *)0x0) {
            do {
              cVar3 = *pcVar7;
              lVar6 = lVar6 + 1;
              pcVar7 = pcVar7 + 1;
            } while (cVar3 != '\0');
          }
          if (*(int *)(lVar5 + 0x44) != 0) {
            lVar6 = lVar6 + 2;
          }
        }
      }
      else if (iVar2 == 1) {
        lVar6 = 6;
        if (*(int *)((long)plVar4 + 0xac) != 0) {
          lVar6 = 10;
        }
      }
      else {
        lVar6 = 6;
      }
      if ((*(int *)((long)plVar4 + 0x54) == 0xf) && (*(int *)(plVar4 + 0x11) == 0xf)) {
        return param_2 + 7 + (param_2 >> 0xc) + (param_2 >> 0xe) + (param_2 >> 0x19) + lVar6;
      }
      return lVar1 + 5 + lVar6;
    }
  }
  return lVar1 + 0xb;
}


