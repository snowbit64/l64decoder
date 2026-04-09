// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_branch
// Entry Point: 00c157a0
// Size: 84 bytes
// Signature: undefined __thiscall ir_add_branch(GISLParserUtil * this, GsTOperator param_1, GsTSourceLoc param_2, GISLParserContext * param_3)


/* GISLParserUtil::ir_add_branch(GsTOperator, GsTSourceLoc, GISLParserContext&) */

void __thiscall
GISLParserUtil::ir_add_branch
          (GISLParserUtil *this,GsTOperator param_1,GsTSourceLoc param_2,GISLParserContext *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_3 + 0x58),0x28);
  puVar1[2] = (ulong)param_2;
  *(int *)(puVar1 + 3) = (int)this;
  puVar1[4] = 0;
  *puVar1 = &PTR_traverse_00fed570;
  puVar1[1] = (ulong)param_1;
  return;
}


