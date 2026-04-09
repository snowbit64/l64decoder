// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_index
// Entry Point: 00c129a0
// Size: 192 bytes
// Signature: undefined __thiscall ir_add_index(GISLParserUtil * this, GsTOperator param_1, AST_TypedNode * param_2, AST_TypedNode * param_3, GsTSourceLoc param_4, GISLParserContext * param_5)


/* GISLParserUtil::ir_add_index(GsTOperator, AST_TypedNode*, AST_TypedNode*, GsTSourceLoc,
   GISLParserContext&) */

void __thiscall
GISLParserUtil::ir_add_index
          (GISLParserUtil *this,GsTOperator param_1,AST_TypedNode *param_2,AST_TypedNode *param_3,
          GsTSourceLoc param_4,GISLParserContext *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uStack_64;
  
  uVar3 = (ulong)param_4;
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_5 + 0x58),0x60);
  puVar2[4] = 0;
  puVar2[3] = 0;
  *(int *)(puVar2 + 9) = (int)this;
  puVar2[6] = 0;
  puVar2[5] = (ulong)uStack_64 << 0x20;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  *puVar2 = &PTR_traverse_00fed7b0;
  if (param_4 == 0) {
    param_3 = *(AST_TypedNode **)(param_2 + 8);
    uVar3 = *(ulong *)(param_2 + 0x10);
  }
  puVar2[1] = param_3;
  puVar2[2] = uVar3;
  puVar2[10] = (ulong)param_1;
  puVar2[0xb] = param_2;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


