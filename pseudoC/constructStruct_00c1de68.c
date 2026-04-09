// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: constructStruct
// Entry Point: 00c1de68
// Size: 448 bytes
// Signature: undefined __cdecl constructStruct(AST_Node * param_1, SHC_Type * param_2, int param_3, GsTSourceLoc param_4, bool param_5)


/* GISLParserContext::constructStruct(AST_Node*, SHC_Type const&, int, GsTSourceLoc, bool) */

GISLParserUtil *
GISLParserContext::constructStruct
          (AST_Node *param_1,SHC_Type *param_2,int param_3,GsTSourceLoc param_4,bool param_5)

{
  GsTBasicType GVar1;
  uint uVar2;
  long lVar3;
  AST_ConstantNode *pAVar4;
  GISLParserUtil *this;
  AST_TypedNode *pAVar5;
  SHC_Type *pSVar6;
  char *in_x5;
  ulong in_x6;
  char *pcVar7;
  char *pcVar8;
  
  pSVar6 = (SHC_Type *)(ulong)(uint)param_3;
  lVar3 = (**(code **)(*(long *)param_2 + 0x18))(param_2,param_2,pSVar6,(ulong)param_4);
  if (*(long *)(pSVar6 + 8) == *(long *)(lVar3 + 0x20)) {
    this = (GISLParserUtil *)(**(code **)(*(long *)param_2 + 0x18))(param_2);
    if ((in_x6 & 1) == 0) {
      this = (GISLParserUtil *)
             GISLParserUtil::ir_set_aggregate_op
                       (this,(AST_Node *)0x86,(uint)param_5,(GsTSourceLoc)in_x5,
                        (GISLParserContext *)param_1);
    }
  }
  else {
    lVar3 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
      if (lVar3 == 0) goto LAB_00c1df70;
      pAVar5 = (AST_TypedNode *)(**(code **)(*(long *)param_2 + 0x18))(param_2);
      this = (GISLParserUtil *)
             GISLParserUtil::ir_add_conversion(0x89,pSVar6,pAVar5,(GISLParserContext *)param_1);
    }
    else {
      GVar1 = *(GsTBasicType *)(*(long *)(pSVar6 + 8) + 8);
      pAVar4 = (AST_ConstantNode *)(**(code **)(*(long *)param_2 + 0x28))(param_2);
      this = (GISLParserUtil *)
             GISLParserUtil::ir_promote_constant(GVar1,pAVar4,(GISLParserContext *)param_1);
    }
  }
  if (this != (GISLParserUtil *)0x0) {
    return this;
  }
LAB_00c1df70:
  lVar3 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
  uVar2 = *(uint *)(*(long *)(lVar3 + 0x20) + 8);
  if (uVar2 < 10) {
    pcVar7 = (&PTR_DAT_00fed9f0)[(int)uVar2];
  }
  else {
    pcVar7 = "unknown type";
  }
  if (*(uint *)(*(long *)(pSVar6 + 8) + 8) < 10) {
    pcVar8 = (&PTR_DAT_00fed9f0)[(int)*(uint *)(*(long *)(pSVar6 + 8) + 8)];
  }
  else {
    pcVar8 = "unknown type";
  }
  error((GsTSourceLoc)param_1,(char *)(ulong)param_5,in_x5,"","constructor",
        "cannot convert parameter %d from \'%s\' to \'%s\'",(ulong)param_4,pcVar7,pcVar8);
  param_1[0x18] = (AST_Node)0x1;
  return (GISLParserUtil *)0x0;
}


