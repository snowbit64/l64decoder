// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_make_aggregate
// Entry Point: 00c13d18
// Size: 476 bytes
// Signature: undefined __thiscall ir_make_aggregate(GISLParserUtil * this, AST_Node * param_1, GsTSourceLoc param_2, GISLParserContext * param_3)


/* GISLParserUtil::ir_make_aggregate(AST_Node*, GsTSourceLoc, GISLParserContext&) */

undefined8 * __thiscall
GISLParserUtil::ir_make_aggregate
          (GISLParserUtil *this,AST_Node *param_1,GsTSourceLoc param_2,GISLParserContext *param_3)

{
  ulong uVar1;
  GISLParserUtil **ppGVar2;
  GISLParserUtil **ppGVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  GISLParserUtil **ppGVar10;
  GISLParserUtil **ppGVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uStack_74;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (this == (GISLParserUtil *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_3 + 0x58),0x88)
    ;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5[6] = 0;
    puVar5[5] = (ulong)uStack_74 << 0x20;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    *(undefined4 *)(puVar5 + 9) = 0;
    *puVar5 = &PTR_traverse_00fed8e8;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = uVar8;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    lVar6 = (**(code **)(*(long *)this + 0x18))(this);
    if (lVar6 != 0) {
      lVar6 = (**(code **)(*(long *)this + 0x18))(this);
      uVar8 = *(undefined8 *)(lVar6 + 0x18);
      uVar13 = *(undefined8 *)(lVar6 + 0x30);
      uVar12 = *(undefined8 *)(lVar6 + 0x28);
      uVar15 = *(undefined8 *)(lVar6 + 0x40);
      uVar14 = *(undefined8 *)(lVar6 + 0x38);
      puVar5[4] = *(undefined8 *)(lVar6 + 0x20);
      puVar5[3] = uVar8;
      puVar5[6] = uVar13;
      puVar5[5] = uVar12;
      puVar5[8] = uVar15;
      puVar5[7] = uVar14;
    }
    ppGVar2 = (GISLParserUtil **)puVar5[0xb];
    if (ppGVar2 == (GISLParserUtil **)puVar5[0xc]) {
      uVar9 = (long)ppGVar2 - puVar5[10];
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
        lVar6 = 0;
      }
      else {
        lVar6 = SHC_PoolAllocator::allocate((SHC_PoolAllocator *)puVar5[0xd],uVar1 << 3);
      }
      ppGVar2 = (GISLParserUtil **)(lVar6 + ((long)uVar9 >> 3) * 8);
      *ppGVar2 = this;
      ppGVar3 = (GISLParserUtil **)puVar5[10];
      ppGVar11 = (GISLParserUtil **)puVar5[0xb];
      ppGVar10 = ppGVar2;
      while (ppGVar11 != ppGVar3) {
        ppGVar11 = ppGVar11 + -1;
        ppGVar10 = ppGVar10 + -1;
        *ppGVar10 = *ppGVar11;
      }
      puVar5[10] = ppGVar10;
      puVar5[0xb] = ppGVar2 + 1;
      puVar5[0xc] = lVar6 + uVar1 * 8;
    }
    else {
      *ppGVar2 = this;
      puVar5[0xb] = ppGVar2 + 1;
    }
    if (param_2 == 0) {
      uVar8 = *(undefined8 *)(this + 8);
      puVar5[2] = *(undefined8 *)(this + 0x10);
      puVar5[1] = uVar8;
    }
    else {
      puVar5[1] = param_1;
      puVar5[2] = (ulong)param_2;
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}


