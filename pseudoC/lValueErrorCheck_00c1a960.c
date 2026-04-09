// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lValueErrorCheck
// Entry Point: 00c1a960
// Size: 816 bytes
// Signature: undefined __thiscall lValueErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, char * param_2, AST_TypedNode * param_3)


/* GISLParserContext::lValueErrorCheck(GsTSourceLoc const&, char const*, AST_TypedNode*) */

void __thiscall
GISLParserContext::lValueErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,char *param_2,AST_TypedNode *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long **pplVar17;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  long **pplVar18;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = (**(code **)(*(long *)param_3 + 0x48))(param_3);
  lVar5 = (**(code **)(*(long *)param_3 + 0x38))(param_3);
  while (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x48);
    if (2 < iVar1 - 0x4fU) {
      if (iVar1 == 0x52) {
        uVar6 = lValueErrorCheck(this,param_1,param_2,*(AST_TypedNode **)(lVar5 + 0x50));
        if ((uVar6 & 1) != 0) goto LAB_00c1ac54;
        local_a0 = 0;
        uStack_98 = 0;
        lVar4 = (**(code **)(**(long **)(lVar5 + 0x58) + 0x30))();
        pplVar17 = *(long ***)(lVar4 + 0x50);
        if (pplVar17 == *(long ***)(lVar4 + 0x58)) goto LAB_00c1ac84;
        goto LAB_00c1ab58;
      }
      if (iVar1 != 0x53) goto LAB_00c1abe4;
      uVar6 = lValueErrorCheck(this,param_1,param_2,*(AST_TypedNode **)(lVar5 + 0x50));
      if ((uVar6 & 1) != 0) goto LAB_00c1ac54;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      lVar4 = (**(code **)(**(long **)(lVar5 + 0x58) + 0x30))();
      pplVar17 = *(long ***)(lVar4 + 0x50);
      if (pplVar17 == *(long ***)(lVar4 + 0x58)) goto LAB_00c1ac84;
      goto LAB_00c1aaa8;
    }
    param_3 = *(AST_TypedNode **)(lVar5 + 0x50);
    lVar4 = (**(code **)(*(long *)param_3 + 0x48))(param_3);
    lVar5 = (**(code **)(*(long *)param_3 + 0x38))(param_3);
  }
  if (lVar4 == 0) {
    pbVar16 = (byte *)0x0;
    uVar14 = *(uint *)((long)param_3 + 0x28);
    if ((uVar14 >> 1 & 1) != 0) goto LAB_00c1ab00;
LAB_00c1aa24:
    if ((uVar14 >> 2 & 1) == 0) {
      if ((uVar14 >> 3 & 1) == 0) {
        uVar14 = **(uint **)((long)param_3 + 0x20);
        if (uVar14 == 7) {
          pcVar13 = "can\'t modify a texture";
        }
        else if (uVar14 == 8) {
          pcVar13 = "can\'t modify a sampler";
        }
        else {
          bVar3 = (uVar14 | (*(uint **)((long)param_3 + 0x20))[2]) != 0;
          if ((lVar4 == 0) && (bVar3)) {
LAB_00c1abe4:
            pcVar9 = *(char **)param_1;
            pcVar10 = *(char **)(param_1 + 2);
            pcVar11 = " l-value required";
            goto LAB_00c1abf0;
          }
          if (bVar3) goto LAB_00c1ac84;
          pcVar13 = "can\'t modify void";
        }
      }
      else {
        pcVar13 = "can\'t modify a uniform";
      }
    }
    else {
      pcVar13 = "can\'t modify an attribute";
    }
  }
  else {
    pbVar15 = *(byte **)(lVar4 + 0x50);
    pbVar16 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar16 = pbVar15 + 1;
    }
    uVar14 = *(uint *)((long)param_3 + 0x28);
    if ((uVar14 >> 1 & 1) == 0) goto LAB_00c1aa24;
LAB_00c1ab00:
    pcVar13 = "can\'t modify a const";
  }
  pcVar9 = *(char **)param_1;
  pcVar10 = *(char **)(param_1 + 2);
  pcVar11 = " l-value required";
  if (lVar4 == 0) {
    pcVar12 = "(%s)";
    goto LAB_00c1ac50;
  }
  error((GsTSourceLoc)this,pcVar9,pcVar10," l-value required",param_2,"\"%s\" (%s)",pbVar16);
LAB_00c1ac54:
  uVar8 = 1;
LAB_00c1ac58:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
  while (pplVar17 = pplVar18, pplVar18 != *(long ***)(lVar4 + 0x58)) {
LAB_00c1ab58:
    pplVar18 = pplVar17 + 1;
    plVar7 = (long *)(**(code **)(**pplVar17 + 0x18))();
    lVar5 = (**(code **)(*plVar7 + 0x28))();
    lVar5 = (long)*(int *)(*(long *)(lVar5 + 0x48) + 4) * 4;
    iVar1 = *(int *)((long)&local_a0 + lVar5);
    *(int *)((long)&local_a0 + lVar5) = iVar1 + 1;
    if (0 < iVar1) goto LAB_00c1abb0;
  }
  goto LAB_00c1ac84;
  while (pplVar17 = pplVar18, pplVar18 != *(long ***)(lVar4 + 0x58)) {
LAB_00c1aaa8:
    pplVar18 = pplVar17 + 1;
    plVar7 = (long *)(**(code **)(**pplVar17 + 0x18))();
    lVar5 = (**(code **)(*plVar7 + 0x28))();
    lVar5 = (long)*(int *)(*(long *)(lVar5 + 0x48) + 4) * 4;
    iVar1 = *(int *)((long)&local_a0 + lVar5);
    *(int *)((long)&local_a0 + lVar5) = iVar1 + 1;
    if (0 < iVar1) goto LAB_00c1abb0;
  }
LAB_00c1ac84:
  uVar8 = 0;
  goto LAB_00c1ac58;
LAB_00c1abb0:
  pcVar9 = *(char **)param_1;
  pcVar10 = *(char **)(param_1 + 2);
  pcVar11 = " l-value of swizzle cannot have duplicate components";
LAB_00c1abf0:
  pcVar12 = "";
  pcVar13 = pcVar12;
LAB_00c1ac50:
  error((GsTSourceLoc)this,pcVar9,pcVar10,pcVar11,param_2,pcVar12,pcVar13);
  goto LAB_00c1ac54;
}


