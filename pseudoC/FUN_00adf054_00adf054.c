// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00adf054
// Entry Point: 00adf054
// Size: 332 bytes
// Signature: undefined FUN_00adf054(void)


undefined8
FUN_00adf054(long param_1,long param_2,long param_3,uint param_4,int param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  piVar6 = *(int **)(param_6 + 0x158);
  iVar3 = piVar6[1];
  iVar1 = iVar3;
  if (param_5 != -1) {
    iVar1 = param_5;
  }
  *(uint *)(param_6 + 0x144) = *(uint *)(param_6 + 0x144) & 0xfffffffe;
  if (iVar1 == 0x1e) {
    if (*(uint *)(param_6 + 0x148) == 0) {
      return 0x11;
    }
    uVar4 = *(uint *)(*(long *)(param_3 + 0x10) + (ulong)param_4 * 4);
    if (*(uint *)(param_6 + 0x148) <= uVar4) {
      return 0x12;
    }
    param_6 = *(long *)(param_6 + 0x150) + (ulong)uVar4 * 0x160;
    if (param_4 + 1 < *(uint *)(param_3 + 0xc)) goto LAB_00adf15c;
  }
  else {
    if (iVar1 != 0x1c) {
      return 0;
    }
    uVar4 = *(uint *)(param_3 + 0xc);
    if (iVar3 == 0x1c) {
      uVar2 = uVar4;
      if (uVar4 <= param_4) {
        uVar2 = param_4;
      }
      do {
        if (param_4 == uVar2) goto LAB_00adf174;
        lVar8 = *(long *)(param_1 + 0x38);
        if (lVar8 == 0) {
          return 0xc;
        }
        piVar7 = (int *)(*(long *)(param_1 + 0x40) + 0x20);
        while (piVar7[-8] != *piVar6) {
          piVar7 = piVar7 + 0x32;
          lVar8 = lVar8 + -1;
          if (lVar8 == 0) {
            return 0xc;
          }
        }
        lVar8 = *(long *)(*(long *)(param_2 + 0x498) + 0x20);
        if (lVar8 == 0) {
          return 0xc;
        }
        piVar6 = *(int **)(*(long *)(param_2 + 0x498) + 0x28);
        while (*piVar6 != *piVar7) {
          piVar6 = piVar6 + 0x5a;
          lVar8 = lVar8 + -1;
          if (lVar8 == 0) {
            return 0xc;
          }
        }
        param_4 = param_4 + 1;
      } while (piVar6[1] == 0x1c);
    }
    if (param_4 < uVar4) {
LAB_00adf15c:
      uVar5 = FUN_00adf054();
      return uVar5;
    }
  }
LAB_00adf174:
  FUN_00adf4a8(param_6);
  return 0;
}


