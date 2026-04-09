// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cloneResolve
// Entry Point: 00c18668
// Size: 12 bytes
// Signature: undefined __cdecl cloneResolve(SHC_PoolAllocator * param_1, GISLParserContext * param_2, IR_Type * param_3)


/* AST_ConstantNode::cloneResolve(SHC_PoolAllocator&, GISLParserContext*, IR_Type*) */

void AST_ConstantNode::cloneResolve
               (SHC_PoolAllocator *param_1,GISLParserContext *param_2,IR_Type *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c18670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 8))();
  return;
}


