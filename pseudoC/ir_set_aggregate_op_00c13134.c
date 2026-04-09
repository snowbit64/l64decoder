// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_set_aggregate_op
// Entry Point: 00c13134
// Size: 424 bytes
// Signature: undefined __thiscall ir_set_aggregate_op(GISLParserUtil * this, AST_Node * param_1, GsTOperator param_2, GsTSourceLoc param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_set_aggregate_op(AST_Node*, GsTOperator, GsTSourceLoc, GISLParserContext&) */

undefined8 * __thiscall
GISLParserUtil::ir_set_aggregate_op
          (GISLParserUtil *this,AST_Node *param_1,GsTOperator param_2,GsTSourceLoc param_3,
          GISLParserContext *param_4)

{
  GISLParserUtil **ppGVar1;
  long lVar2;
  undefined8 *puVar3;
  SHC_PoolAllocator *this_00;
  GISLParserUtil **ppGVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  GISLParserUtil **ppGVar9;
  GISLParserUtil **ppGVar10;
  uint uStack_74;
  
  uVar6 = (ulong)param_3;
  uVar5 = (ulong)param_2;
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  if (this == (GISLParserUtil *)0x0) {
    puVar3 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x88)
    ;
    uVar8 = *(undefined8 *)(param_4 + 0x58);
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[6] = 0;
    puVar3[5] = (ulong)uStack_74 << 0x20;
    puVar3[8] = 0;
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 9) = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = uVar8;
    *puVar3 = &PTR_traverse_00fed8e8;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0xe] = 0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*(long *)this + 0x30))();
    if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 9) != 0)) {
      puVar3 = (undefined8 *)
               SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x88);
      this_00 = *(SHC_PoolAllocator **)(param_4 + 0x58);
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[6] = 0;
      puVar3[5] = (ulong)uStack_74 << 0x20;
      puVar3[8] = 0;
      puVar3[7] = 0;
      *(undefined4 *)(puVar3 + 9) = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = this_00;
      *puVar3 = &PTR_traverse_00fed8e8;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0xe] = 0;
      ppGVar4 = (GISLParserUtil **)SHC_PoolAllocator::allocate(this_00,8);
      *ppGVar4 = this;
      ppGVar1 = (GISLParserUtil **)puVar3[10];
      ppGVar9 = (GISLParserUtil **)puVar3[0xb];
      ppGVar10 = ppGVar4;
      while (ppGVar9 != ppGVar1) {
        ppGVar9 = ppGVar9 + -1;
        ppGVar10 = ppGVar10 + -1;
        *ppGVar10 = *ppGVar9;
      }
      puVar3[10] = ppGVar10;
      puVar3[0xb] = ppGVar4 + 1;
      puVar3[0xc] = ppGVar4 + 1;
      if (param_3 == 0) {
        uVar5 = *(ulong *)(this + 8);
        uVar6 = *(ulong *)(this + 0x10);
      }
    }
  }
  *(int *)(puVar3 + 9) = (int)param_1;
  if ((int)uVar6 != 0) {
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
  }
  if (*(long *)(lVar2 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}


