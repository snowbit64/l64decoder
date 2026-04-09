// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: constructorErrorCheck
// Entry Point: 00c1ae00
// Size: 836 bytes
// Signature: undefined __thiscall constructorErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, AST_Node * param_2, GsTFunction * param_3, GsTOperator param_4, SHC_Type * param_5)


/* GISLParserContext::constructorErrorCheck(GsTSourceLoc const&, AST_Node*, GsTFunction&,
   GsTOperator, SHC_Type*) */

undefined8 __thiscall
GISLParserContext::constructorErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,AST_Node *param_2,GsTFunction *param_3,
          GsTOperator param_4,SHC_Type *param_5)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar4 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
  if (lVar4 == 0) {
    pcVar5 = "constructor argument does not have a type";
  }
  else {
    uVar19 = *(undefined8 *)(param_3 + 0x50);
    uVar18 = *(undefined8 *)(param_3 + 0x68);
    uVar17 = *(undefined8 *)(param_3 + 0x60);
    uVar21 = *(undefined8 *)(param_3 + 0x48);
    uVar20 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_5 + 0x18) = *(undefined8 *)(param_3 + 0x58);
    *(undefined8 *)(param_5 + 0x10) = uVar19;
    *(undefined8 *)(param_5 + 0x28) = uVar18;
    *(undefined8 *)(param_5 + 0x20) = uVar17;
    *(undefined8 *)(param_5 + 8) = uVar21;
    *(undefined8 *)param_5 = uVar20;
    lVar4 = *(long *)(param_3 + 0x20);
    uVar7 = (*(long *)(param_3 + 0x28) - lVar4 >> 3) * -0x5555555555555555;
    iVar6 = (int)uVar7;
    if (iVar6 < 1) {
      uVar8 = 1;
    }
    else {
      uVar7 = uVar7 & 0xffffffff;
      uVar8 = 1;
      plVar14 = (long *)(lVar4 + 0x10);
      do {
        uVar7 = uVar7 - 1;
        uVar8 = uVar8 & (*(byte *)(*plVar14 + 0x10) & 2) >> 1;
        plVar14 = plVar14 + 3;
      } while (uVar7 != 0);
    }
    uVar9 = 2;
    if ((param_4 - 0x7d < 0xfffffff7 & uVar8) == 0) {
      uVar9 = 0;
    }
    *(uint *)(param_5 + 0x10) = *(uint *)(param_5 + 0x10) & 0xfffffffd | uVar9;
    if (param_4 == 0x86) {
      if ((iVar6 == 1) && (*(SHC_Type **)(lVar4 + 0x10) != param_5)) {
        pcVar5 = "Cannot convert to struct type";
      }
      else {
        if ((int)((ulong)(*(long *)(*(long *)(*(long *)(param_5 + 8) + 8) + 0x38) -
                         *(long *)(*(long *)(*(long *)(param_5 + 8) + 8) + 0x30)) >> 3) *
            -0x49249249 == iVar6) {
          return 0;
        }
        pcVar5 = "Number of constructor parameters does not match the number of structure fields";
      }
    }
    else if (param_4 == 0x87) {
      if (*(int *)(*(long *)(param_5 + 8) + 0x10) == iVar6) {
        return 0;
      }
      pcVar5 = "array constructor needs one argument per array element";
    }
    else {
      if (param_4 == 0x88) {
        return 0;
      }
      if (iVar6 < 1) {
        return 0;
      }
      lVar16 = 0;
      uVar8 = 0;
      bVar2 = false;
      bVar3 = 0;
      bVar1 = false;
      lVar15 = 0x10;
      do {
        piVar11 = *(int **)(*(long *)(lVar4 + lVar15) + 8);
        iVar6 = *piVar11;
        if (2 < iVar6) {
          error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),
                "constructing from a non-numeric input","constructor",&DAT_0050a39f);
          lVar4 = *(long *)(param_3 + 0x20);
          piVar11 = *(int **)(*(long *)(lVar4 + lVar15) + 8);
          bVar1 = true;
          iVar6 = *piVar11;
        }
        if (iVar6 == 0) {
          iVar6 = 1;
          iVar10 = 1;
        }
        else if (iVar6 == 1) {
          iVar6 = piVar11[5];
          iVar10 = 1;
        }
        else if (iVar6 == 2) {
          iVar6 = piVar11[4];
          iVar10 = piVar11[5];
        }
        else {
          iVar6 = 0;
          iVar10 = 0;
        }
        piVar11 = *(int **)(param_5 + 8);
        iVar12 = *piVar11;
        if (iVar12 == 0) {
          iVar12 = 1;
LAB_00c1af40:
          iVar13 = 1;
        }
        else {
          if (iVar12 == 1) {
            iVar12 = piVar11[5];
            goto LAB_00c1af40;
          }
          if (iVar12 == 2) {
            iVar12 = piVar11[4];
            iVar13 = piVar11[5];
          }
          else {
            iVar12 = 0;
            iVar13 = 0;
          }
        }
        uVar8 = uVar8 + iVar10 * iVar6;
        bVar2 = (bool)(bVar3 | bVar2);
        lVar16 = lVar16 + 1;
        lVar15 = lVar15 + 0x18;
        bVar3 = (uint)(iVar13 * iVar12) <= uVar8 | bVar3;
      } while (lVar16 < (int)((ulong)(*(long *)(param_3 + 0x28) - lVar4) >> 3) * -0x55555555);
      if (bVar1) {
        return 1;
      }
      if (bVar2) {
        pcVar5 = "too many inputs";
      }
      else {
        if (uVar8 < 2) {
          return 0;
        }
        piVar11 = *(int **)(param_5 + 8);
        iVar6 = *piVar11;
        if (iVar6 == 0) {
          iVar6 = 1;
          iVar10 = 1;
        }
        else if (iVar6 == 1) {
          iVar6 = piVar11[5];
          iVar10 = 1;
        }
        else if (iVar6 == 2) {
          iVar6 = piVar11[4];
          iVar10 = piVar11[5];
        }
        else {
          iVar6 = 0;
          iVar10 = 0;
        }
        if ((uint)(iVar10 * iVar6) <= uVar8) {
          return 0;
        }
        pcVar5 = "not enough data provided for construction";
      }
    }
  }
  error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),pcVar5,"constructor",
        &DAT_0050a39f);
  return 1;
}


