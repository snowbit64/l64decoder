// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_grow_aggregate
// Entry Point: 00c13ef4
// Size: 512 bytes
// Signature: undefined __thiscall ir_grow_aggregate(GISLParserUtil * this, AST_Node * param_1, AST_Node * param_2, GsTSourceLoc param_3, GsTOperator param_4, GISLParserContext * param_5)


/* GISLParserUtil::ir_grow_aggregate(AST_Node*, AST_Node*, GsTSourceLoc, GsTOperator,
   GISLParserContext&) */

undefined8 * __thiscall
GISLParserUtil::ir_grow_aggregate
          (GISLParserUtil *this,AST_Node *param_1,AST_Node *param_2,GsTSourceLoc param_3,
          GsTOperator param_4,GISLParserContext *param_5)

{
  ulong uVar1;
  GISLParserUtil **ppGVar2;
  AST_Node **ppAVar3;
  AST_Node **ppAVar4;
  long lVar5;
  SHC_PoolAllocator *this_00;
  GISLParserUtil **ppGVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  GISLParserUtil **ppGVar10;
  GISLParserUtil **ppGVar11;
  AST_Node **ppAVar12;
  AST_Node **ppAVar13;
  undefined8 *puVar14;
  uint uStack_74;
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  if (((ulong)this | (ulong)param_1) == 0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    if (((this == (GISLParserUtil *)0x0) ||
        (puVar14 = (undefined8 *)(**(code **)(*(long *)this + 0x30))(this),
        puVar14 == (undefined8 *)0x0)) || (*(GsTOperator *)(puVar14 + 9) != param_4)) {
      puVar14 = (undefined8 *)
                SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_5 + 0x58),0x88);
      this_00 = *(SHC_PoolAllocator **)(param_5 + 0x58);
      puVar14[4] = 0;
      puVar14[3] = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[6] = 0;
      puVar14[5] = (ulong)uStack_74 << 0x20;
      puVar14[8] = 0;
      puVar14[7] = 0;
      *(undefined4 *)(puVar14 + 9) = 0;
      puVar14[10] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[0xd] = this_00;
      *puVar14 = &PTR_traverse_00fed8e8;
      puVar14[0xf] = 0;
      puVar14[0x10] = 0;
      puVar14[0xe] = 0;
      if (this != (GISLParserUtil *)0x0) {
        ppGVar6 = (GISLParserUtil **)SHC_PoolAllocator::allocate(this_00,8);
        *ppGVar6 = this;
        ppGVar2 = (GISLParserUtil **)puVar14[10];
        ppGVar10 = (GISLParserUtil **)puVar14[0xb];
        ppGVar11 = ppGVar6;
        while (ppGVar10 != ppGVar2) {
          ppGVar10 = ppGVar10 + -1;
          ppGVar11 = ppGVar11 + -1;
          *ppGVar11 = *ppGVar10;
        }
        puVar14[10] = ppGVar11;
        puVar14[0xb] = ppGVar6 + 1;
        puVar14[0xc] = ppGVar6 + 1;
      }
    }
    if (param_1 != (AST_Node *)0x0) {
      ppAVar3 = (AST_Node **)puVar14[0xb];
      if (ppAVar3 == (AST_Node **)puVar14[0xc]) {
        uVar9 = (long)ppAVar3 - puVar14[10];
        uVar1 = ((long)uVar9 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)uVar9 >> 2)) {
          uVar1 = (long)uVar9 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = SHC_PoolAllocator::allocate((SHC_PoolAllocator *)puVar14[0xd],uVar1 << 3);
        }
        ppAVar3 = (AST_Node **)(lVar7 + ((long)uVar9 >> 3) * 8);
        *ppAVar3 = param_1;
        ppAVar4 = (AST_Node **)puVar14[10];
        ppAVar13 = (AST_Node **)puVar14[0xb];
        ppAVar12 = ppAVar3;
        while (ppAVar13 != ppAVar4) {
          ppAVar13 = ppAVar13 + -1;
          ppAVar12 = ppAVar12 + -1;
          *ppAVar12 = *ppAVar13;
        }
        puVar14[10] = ppAVar12;
        puVar14[0xb] = ppAVar3 + 1;
        puVar14[0xc] = lVar7 + uVar1 * 8;
      }
      else {
        *ppAVar3 = param_1;
        puVar14[0xb] = ppAVar3 + 1;
      }
    }
    if (param_3 != 0) {
      puVar14[1] = param_2;
      puVar14[2] = (ulong)param_3;
    }
  }
  if (*(long *)(lVar5 + 0x28) == lVar8) {
    return puVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


