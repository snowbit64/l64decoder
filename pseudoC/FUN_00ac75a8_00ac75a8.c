// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ac75a8
// Entry Point: 00ac75a8
// Size: 620 bytes
// Signature: undefined FUN_00ac75a8(void)


bool FUN_00ac75a8(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar3 = param_2[-1];
    lVar6 = *param_1;
    if (*(uint *)(lVar3 + 0x18) == *(uint *)(lVar6 + 0x18)) {
      if (*(uint *)(lVar3 + 0x10) < *(uint *)(lVar6 + 0x10)) {
LAB_00ac7778:
        *param_1 = lVar3;
        param_2[-1] = lVar6;
        return true;
      }
    }
    else if (*(uint *)(lVar3 + 0x18) < *(uint *)(lVar6 + 0x18)) goto LAB_00ac7778;
    break;
  case 3:
    FUN_00ac72cc(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    plVar10 = param_1 + 2;
    FUN_00ac72cc(param_1,param_1 + 1,plVar10);
    lVar3 = param_2[-1];
    lVar6 = param_1[2];
    if (*(uint *)(lVar3 + 0x18) == *(uint *)(lVar6 + 0x18)) {
      if (*(uint *)(lVar6 + 0x10) <= *(uint *)(lVar3 + 0x10)) {
        return true;
      }
    }
    else if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar3 + 0x18)) {
      return true;
    }
    *plVar10 = lVar3;
    param_2[-1] = lVar6;
    lVar3 = *plVar10;
    lVar6 = param_1[1];
    uVar1 = *(uint *)(lVar3 + 0x18);
    bVar2 = *(uint *)(lVar6 + 0x18) <= uVar1;
    if (uVar1 == *(uint *)(lVar6 + 0x18)) {
      bVar2 = *(uint *)(lVar6 + 0x10) <= *(uint *)(lVar3 + 0x10);
    }
    if (!bVar2) {
      lVar8 = *param_1;
      param_1[1] = lVar3;
      param_1[2] = lVar6;
      if (uVar1 == *(uint *)(lVar8 + 0x18)) {
        if (*(uint *)(lVar3 + 0x10) < *(uint *)(lVar8 + 0x10)) {
LAB_00ac7808:
          *param_1 = lVar3;
          param_1[1] = lVar8;
          return true;
        }
      }
      else if (uVar1 < *(uint *)(lVar8 + 0x18)) goto LAB_00ac7808;
    }
    break;
  case 5:
    FUN_00ac73ec(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_00ac72cc(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar3 = 0;
      iVar4 = 0;
      plVar10 = param_1 + 3;
      plVar7 = param_1 + 2;
      do {
        plVar5 = plVar10;
        lVar6 = *plVar5;
        lVar8 = *plVar7;
        uVar1 = *(uint *)(lVar6 + 0x18);
        bVar2 = *(uint *)(lVar8 + 0x18) <= uVar1;
        if (uVar1 == *(uint *)(lVar8 + 0x18)) {
          bVar2 = *(uint *)(lVar8 + 0x10) <= *(uint *)(lVar6 + 0x10);
        }
        if (!bVar2) {
          *plVar5 = lVar8;
          lVar8 = lVar3;
          plVar10 = param_1;
          if (plVar7 != param_1) {
            do {
              lVar11 = *(long *)((long)param_1 + lVar8 + 8);
              if (uVar1 == *(uint *)(lVar11 + 0x18)) {
                if (*(uint *)(lVar11 + 0x10) <= *(uint *)(lVar6 + 0x10)) {
                  plVar10 = (long *)((long)param_1 + lVar8 + 0x10);
                  break;
                }
              }
              else {
                plVar10 = plVar7;
                if (*(uint *)(lVar11 + 0x18) <= uVar1) break;
              }
              plVar7 = plVar7 + -1;
              lVar9 = lVar8 + -8;
              *(long *)((long)param_1 + lVar8 + 0x10) = lVar11;
              lVar8 = lVar9;
              plVar10 = param_1;
            } while (lVar9 != -0x10);
          }
          iVar4 = iVar4 + 1;
          *plVar10 = lVar6;
          if (iVar4 == 8) {
            return plVar5 + 1 == param_2;
          }
        }
        lVar3 = lVar3 + 8;
        plVar10 = plVar5 + 1;
        plVar7 = plVar5;
      } while (plVar5 + 1 != param_2);
    }
  }
  return true;
}


