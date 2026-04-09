// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_constant
// Entry Point: 00c145cc
// Size: 260 bytes
// Signature: undefined __thiscall ir_add_constant(GISLParserUtil * this, SHC_Type * param_1, GsTSourceLoc param_2, GISLParserContext * param_3)


/* GISLParserUtil::ir_add_constant(SHC_Type const&, GsTSourceLoc, GISLParserContext&) */

undefined8 * __thiscall
GISLParserUtil::ir_add_constant
          (GISLParserUtil *this,SHC_Type *param_1,GsTSourceLoc param_2,GISLParserContext *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_3 + 0x58),0x68);
  uVar4 = *(undefined8 *)(param_3 + 0x58);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR___cxa_pure_virtual_00fed450;
  uVar8 = *(undefined8 *)(this + 0x18);
  uVar7 = *(undefined8 *)(this + 0x10);
  uVar6 = *(undefined8 *)(this + 0x20);
  uVar10 = *(undefined8 *)(this + 8);
  uVar9 = *(undefined8 *)this;
  puVar2[8] = *(undefined8 *)(this + 0x28);
  puVar2[7] = uVar6;
  puVar2[9] = 0;
  puVar2[6] = uVar8;
  puVar2[5] = uVar7;
  puVar2[4] = uVar10;
  puVar2[3] = uVar9;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  piVar5 = *(int **)(this + 8);
  puVar2[0xc] = uVar4;
  iVar1 = piVar5[2];
  *puVar2 = &PTR_traverse_00fed718;
  if (iVar1 != 0) {
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else if (iVar1 == 1) {
      uVar3 = piVar5[5];
    }
    else {
      if (iVar1 != 2) goto LAB_00c146b4;
      uVar3 = piVar5[5] * piVar5[4];
    }
    if (uVar3 != 0) {
                    /* try { // try from 00c146ac to 00c146b3 has its CatchHandler @ 00c146d0 */
      std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
      __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
               (puVar2 + 9),(ulong)uVar3);
    }
  }
LAB_00c146b4:
  puVar2[1] = param_1;
  puVar2[2] = (ulong)param_2;
  return puVar2;
}


