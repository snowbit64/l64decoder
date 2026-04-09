// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: constructBuiltIn
// Entry Point: 00c1dc4c
// Size: 540 bytes
// Signature: undefined __cdecl constructBuiltIn(SHC_Type * param_1, GsTOperator param_2, AST_Node * param_3, GsTSourceLoc param_4, bool param_5)


/* GISLParserContext::constructBuiltIn(SHC_Type const*, GsTOperator, AST_Node*, GsTSourceLoc, bool)
    */

long * GISLParserContext::constructBuiltIn
                 (SHC_Type *param_1,GsTOperator param_2,AST_Node *param_3,GsTSourceLoc param_4,
                 bool param_5)

{
  long *this;
  uint uVar1;
  long lVar2;
  long *this_00;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  char *in_x5;
  byte in_w6;
  int *piVar7;
  int *piVar8;
  AST_Node *pAVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  plVar6 = (long *)(ulong)param_4;
  plVar3 = (long *)(ulong)param_2;
  pAVar9 = (AST_Node *)((ulong)param_3 & 0xffffffff);
  lVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
  if ((lVar2 != 0) &&
     (lVar2 = (**(code **)(*plVar6 + 0x18))(plVar6), *(long *)(lVar2 + 0x20) == plVar3[1])) {
                    /* WARNING: Could not recover jumptable at 0x00c1dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6);
    return plVar3;
  }
  uVar1 = (int)param_3 - 0x58;
  if (uVar1 < 0x31) {
    this_00 = (long *)GISLParserUtil::ir_add_unary_math
                                ((GISLParserUtil *)
                                 (ulong)*(uint *)(&DAT_00529248 + (long)(int)uVar1 * 4),param_4,
                                 (AST_Node *)plVar6[1],(GsTSourceLoc)plVar6[2],
                                 (GISLParserContext *)param_1);
    if (this_00 == (long *)0x0) {
      error((GsTSourceLoc)param_1,(char *)(ulong)param_5,in_x5,"can\'t convert","constructor",
            &DAT_0050a39f);
      plVar5 = (long *)0x0;
    }
    else {
      piVar7 = (int *)this_00[4];
      this = this_00;
      if ((*piVar7 == 1) && (*(int *)plVar3[1] == 1)) {
        uVar1 = ((int *)plVar3[1])[5];
        if ((uVar1 <= (uint)piVar7[5] | in_w6 & 1) == 0) {
          this = (long *)0x0;
        }
        if ((uint)piVar7[5] < uVar1) {
          return this;
        }
      }
      plVar5 = this;
      if (((in_w6 & 1) == 0) &&
         ((this_00 == plVar6 || (plVar5 = this_00, piVar7 != (int *)plVar3[1])))) {
        if ((*piVar7 == 2) && (piVar8 = (int *)plVar3[1], *piVar8 == 2)) {
          if (((uint)piVar7[4] < (uint)piVar8[4]) || ((uint)piVar7[5] < (uint)piVar8[5])) {
            return (long *)0x0;
          }
          uVar4 = getConstructorOp((GISLParserContext *)this,(SHC_Type *)plVar3);
          pAVar9 = (AST_Node *)(uVar4 & 0xffffffff);
        }
        plVar5 = (long *)GISLParserUtil::ir_set_aggregate_op
                                   ((GISLParserUtil *)this_00,pAVar9,(uint)param_5,
                                    (GsTSourceLoc)in_x5,(GISLParserContext *)param_1);
        lVar2 = *plVar3;
        lVar11 = plVar3[3];
        lVar10 = plVar3[2];
        lVar13 = plVar3[5];
        lVar12 = plVar3[4];
        plVar5[4] = plVar3[1];
        plVar5[3] = lVar2;
        plVar5[6] = lVar11;
        plVar5[5] = lVar10;
        plVar5[8] = lVar13;
        plVar5[7] = lVar12;
      }
    }
  }
  else {
    error((GsTSourceLoc)param_1,(char *)(ulong)param_5,in_x5,"unsupported construction",
          &DAT_0050a39f,&DAT_0050a39f);
    param_1[0x18] = (SHC_Type)0x1;
    plVar5 = (long *)0x0;
  }
  return plVar5;
}


