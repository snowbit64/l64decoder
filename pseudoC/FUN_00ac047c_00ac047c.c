// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ac047c
// Entry Point: 00ac047c
// Size: 732 bytes
// Signature: undefined FUN_00ac047c(void)


bool FUN_00ac047c(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar6 = *param_1;
    if (*(uint *)(param_2[-1] + 0x28) < *(uint *)(lVar6 + 0x28)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar6;
    }
    break;
  case 3:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar9 = param_2[-1];
    uVar1 = *(uint *)(lVar6 + 0x28);
    uVar2 = *(uint *)(lVar4 + 0x28);
    if (uVar2 < uVar1) {
      if (*(uint *)(lVar9 + 0x28) < uVar2) {
        *param_1 = lVar9;
        param_2[-1] = lVar6;
        return true;
      }
      *param_1 = lVar4;
      param_1[1] = lVar6;
      if (uVar1 <= *(uint *)(param_2[-1] + 0x28)) {
        return true;
      }
      param_1[1] = param_2[-1];
      param_2[-1] = lVar6;
      return true;
    }
    if (*(uint *)(lVar9 + 0x28) < uVar2) {
      param_1[1] = lVar9;
      param_2[-1] = lVar4;
      lVar6 = *param_1;
      if (*(uint *)(lVar6 + 0x28) <= *(uint *)(param_1[1] + 0x28)) {
        return true;
      }
      *param_1 = param_1[1];
      param_1[1] = lVar6;
      return true;
    }
    break;
  case 4:
    FUN_00ac0350(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    plVar11 = param_1 + 2;
    plVar7 = param_1 + 3;
    FUN_00ac0350(param_1,param_1 + 1,plVar11,plVar7);
    lVar6 = param_1[3];
    if (*(uint *)(param_2[-1] + 0x28) < *(uint *)(lVar6 + 0x28)) {
      *plVar7 = param_2[-1];
      param_2[-1] = lVar6;
      lVar6 = *plVar7;
      lVar4 = *plVar11;
      uVar1 = *(uint *)(lVar6 + 0x28);
      if (uVar1 < *(uint *)(lVar4 + 0x28)) {
        lVar9 = param_1[1];
        *plVar11 = lVar6;
        *plVar7 = lVar4;
        if (uVar1 < *(uint *)(lVar9 + 0x28)) {
          lVar4 = *param_1;
          param_1[1] = lVar6;
          param_1[2] = lVar9;
          if (*(uint *)(lVar4 + 0x28) <= uVar1) {
            return true;
          }
          *param_1 = lVar6;
          param_1[1] = lVar4;
          return true;
        }
      }
    }
    break;
  default:
    lVar10 = *param_1;
    plVar12 = param_1 + 1;
    lVar4 = *plVar12;
    plVar11 = param_1 + 2;
    lVar9 = *plVar11;
    uVar1 = *(uint *)(lVar10 + 0x28);
    uVar2 = *(uint *)(lVar4 + 0x28);
    uVar3 = *(uint *)(lVar9 + 0x28);
    lVar6 = lVar9;
    plVar7 = param_1;
    if (uVar2 < uVar1) {
      lVar5 = lVar10;
      if (uVar2 <= uVar3) {
        *param_1 = lVar4;
        param_1[1] = lVar10;
        plVar7 = plVar12;
        if (uVar1 <= uVar3) goto LAB_00ac06a8;
      }
LAB_00ac0698:
      *plVar7 = lVar9;
      *plVar11 = lVar10;
      lVar6 = lVar5;
    }
    else if (uVar3 < uVar2) {
      *plVar12 = lVar9;
      *plVar11 = lVar4;
      lVar5 = lVar4;
      lVar6 = lVar4;
      plVar11 = plVar12;
      if (uVar3 < uVar1) goto LAB_00ac0698;
    }
LAB_00ac06a8:
    if (param_1 + 3 != param_2) {
      iVar8 = 0;
      lVar4 = 0x18;
      plVar11 = param_1 + 3;
      do {
        lVar10 = *plVar11;
        uVar1 = *(uint *)(lVar10 + 0x28);
        lVar9 = lVar4;
        if (uVar1 < *(uint *)(lVar6 + 0x28)) {
          do {
            lVar5 = lVar9 + -8;
            *(long *)((long)param_1 + lVar9) = lVar6;
            plVar7 = param_1;
            if (lVar5 == 0) goto LAB_00ac0704;
            lVar6 = *(long *)((long)param_1 + lVar9 + -0x10);
            lVar9 = lVar5;
          } while (uVar1 < *(uint *)(lVar6 + 0x28));
          plVar7 = (long *)((long)param_1 + lVar5);
LAB_00ac0704:
          iVar8 = iVar8 + 1;
          *plVar7 = lVar10;
          if (iVar8 == 8) {
            return plVar11 + 1 == param_2;
          }
        }
        if (plVar11 + 1 == param_2) {
          return true;
        }
        lVar6 = *plVar11;
        lVar4 = lVar4 + 8;
        plVar11 = plVar11 + 1;
      } while( true );
    }
  }
  return true;
}


