// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isBranchConstant
// Entry Point: 00c1047c
// Size: 336 bytes
// Signature: undefined __cdecl isBranchConstant(AST_Node * param_1)


/* GISLParserUtil::isBranchConstant(AST_Node*) */

uint GISLParserUtil::isBranchConstant(AST_Node *param_1)

{
  AST_Node **ppAVar1;
  AST_Node **ppAVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  AST_Node **ppAVar6;
  
  pcVar5 = *(code **)(*(long *)param_1 + 0x30);
  while (lVar3 = (*pcVar5)(param_1), lVar3 == 0) {
    lVar3 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
      if (lVar3 != 0) goto LAB_00c1057c;
      lVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
      if (lVar3 != 0) {
        uVar4 = (ulong)(((&s_operatorFlags)[*(uint *)(lVar3 + 0x48)] & 1) == 0);
        goto LAB_00c10580;
      }
      lVar3 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
      if (lVar3 == 0) {
        uVar4 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
        if (uVar4 != 0) {
          uVar4 = (ulong)(*(byte *)(uVar4 + 0x28) >> 1 & 1);
        }
        goto LAB_00c10580;
      }
      uVar4 = isBranchConstant(*(AST_Node **)(lVar3 + 0x48));
      if ((uVar4 & 1) == 0) goto LAB_00c10574;
      uVar4 = isBranchConstant(*(AST_Node **)(lVar3 + 0x50));
    }
    else {
      uVar4 = isBranchConstant(*(AST_Node **)(lVar3 + 0x50));
    }
    if ((uVar4 & 1) == 0) goto LAB_00c10574;
    param_1 = *(AST_Node **)(lVar3 + 0x58);
    pcVar5 = *(code **)(*(long *)param_1 + 0x30);
  }
  if (((&s_operatorFlags)[*(uint *)(lVar3 + 0x48)] & 1) == 0) {
    ppAVar1 = *(AST_Node ***)(lVar3 + 0x50);
    ppAVar2 = *(AST_Node ***)(lVar3 + 0x58);
    if (ppAVar1 == ppAVar2) {
LAB_00c1057c:
      uVar4 = 1;
    }
    else {
      do {
        ppAVar6 = ppAVar1 + 1;
        uVar4 = isBranchConstant(*ppAVar1);
        if ((uVar4 & 1) == 0) break;
        ppAVar1 = ppAVar6;
      } while (ppAVar6 != ppAVar2);
    }
  }
  else {
LAB_00c10574:
    uVar4 = 0;
  }
LAB_00c10580:
  return (uint)uVar4 & 1;
}


