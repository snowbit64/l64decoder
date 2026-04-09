// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_branch
// Entry Point: 00c157f4
// Size: 88 bytes
// Signature: undefined __thiscall ir_add_branch(GISLParserUtil * this, GsTOperator param_1, AST_TypedNode * param_2, GsTSourceLoc param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_add_branch(GsTOperator, AST_TypedNode*, GsTSourceLoc, GISLParserContext&) */

void __thiscall
GISLParserUtil::ir_add_branch
          (GISLParserUtil *this,GsTOperator param_1,AST_TypedNode *param_2,GsTSourceLoc param_3,
          GISLParserContext *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x28);
  *(int *)(puVar1 + 3) = (int)this;
  puVar1[4] = (ulong)param_1;
  puVar1[2] = (ulong)param_3;
  *puVar1 = &PTR_traverse_00fed570;
  puVar1[1] = param_2;
  return;
}


