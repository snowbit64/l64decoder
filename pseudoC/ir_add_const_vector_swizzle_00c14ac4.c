// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_const_vector_swizzle
// Entry Point: 00c14ac4
// Size: 464 bytes
// Signature: undefined __thiscall ir_add_const_vector_swizzle(GISLParserUtil * this, VectorFields * param_1, AST_TypedNode * param_2, GsTSourceLoc param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_add_const_vector_swizzle(GISLParserUtil::VectorFields const&, AST_TypedNode*,
   GsTSourceLoc, GISLParserContext&) */

undefined8 * __thiscall
GISLParserUtil::ir_add_const_vector_swizzle
          (GISLParserUtil *this,VectorFields *param_1,AST_TypedNode *param_2,GsTSourceLoc param_3,
          GISLParserContext *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *this_00;
  IR_TypeSet *this_01;
  uint local_84;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  lVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
  if (lVar3 == 0) {
    puVar5 = (undefined8 *)0x0;
    goto LAB_00c14c5c;
  }
  if (*(uint *)(this + 0x10) == 1) {
    this_01 = **(IR_TypeSet ***)(param_4 + 0x58);
    piVar4 = (int *)IR_TypeSet::getScalarType
                              (this_01,*(GsTBasicType *)(*(long *)(param_1 + 0x20) + 8));
  }
  else {
    this_01 = **(IR_TypeSet ***)(param_4 + 0x58);
    piVar4 = (int *)IR_TypeSet::getVectorType
                              (this_01,*(GsTBasicType *)(*(long *)(param_1 + 0x20) + 8),
                               *(uint *)(this + 0x10));
  }
  puVar5 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x68);
  uVar8 = *(undefined8 *)(param_4 + 0x58);
  puVar5[2] = 0;
  puVar5[3] = this_01;
  *(undefined4 *)(puVar5 + 5) = 2;
  puVar5[4] = piVar4;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  this_00 = puVar5 + 9;
  *this_00 = 0;
  *puVar5 = &PTR_traverse_00fed718;
  puVar5[1] = 0;
  *(undefined8 *)((long)puVar5 + 0x34) = 0;
  *(ulong *)((long)puVar5 + 0x2c) = (ulong)local_84;
  puVar5[0xc] = uVar8;
  if (piVar4[2] != 0) {
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    else if (iVar1 == 1) {
      uVar6 = piVar4[5];
    }
    else {
      if (iVar1 != 2) goto LAB_00c14c28;
      uVar6 = piVar4[5] * piVar4[4];
    }
    if (uVar6 != 0) {
                    /* try { // try from 00c14c20 to 00c14c27 has its CatchHandler @ 00c14c94 */
      std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
      __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
               this_00,(ulong)uVar6);
    }
  }
LAB_00c14c28:
  puVar5[1] = param_2;
  puVar5[2] = (ulong)param_3;
  if (*(int *)(this + 0x10) != 0) {
    uVar9 = 0;
    do {
      *(undefined8 *)(*this_00 + uVar9 * 8) =
           *(undefined8 *)(*(long *)(lVar3 + 0x48) + (ulong)*(uint *)(this + uVar9 * 4) * 8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(this + 0x10));
  }
LAB_00c14c5c:
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


