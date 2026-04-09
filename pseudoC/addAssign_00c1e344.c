// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAssign
// Entry Point: 00c1e344
// Size: 32 bytes
// Signature: undefined __cdecl addAssign(GsTOperator param_1, AST_TypedNode * param_2, AST_TypedNode * param_3, GsTSourceLoc param_4)


/* GISLParserContext::addAssign(GsTOperator, AST_TypedNode*, AST_TypedNode*, GsTSourceLoc) */

void GISLParserContext::addAssign
               (GsTOperator param_1,AST_TypedNode *param_2,AST_TypedNode *param_3,
               GsTSourceLoc param_4)

{
  AST_TypedNode *in_x4;
  GsTSourceLoc in_w5;
  
  GISLParserUtil::ir_add_assign
            ((GISLParserUtil *)((ulong)param_2 & 0xffffffff),(GsTOperator)param_3,
             (AST_TypedNode *)(ulong)param_4,in_x4,in_w5,(GISLParserContext *)(ulong)param_1);
  return;
}


