// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00c18544
// Size: 276 bytes
// Signature: undefined __thiscall clone(AST_ConstantNode * this, SHC_PoolAllocator * param_1)


/* AST_ConstantNode::clone(SHC_PoolAllocator&) */

undefined8 * __thiscall AST_ConstantNode::clone(AST_ConstantNode *this,SHC_PoolAllocator *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined8 *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x68);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR___cxa_pure_virtual_00fed450;
  uVar6 = *(undefined8 *)(this + 0x30);
  uVar5 = *(undefined8 *)(this + 0x28);
  uVar8 = *(undefined8 *)(this + 0x40);
  uVar7 = *(undefined8 *)(this + 0x38);
  uVar10 = *(undefined8 *)(this + 0x20);
  uVar9 = *(undefined8 *)(this + 0x18);
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  this_00 = puVar2 + 9;
  *this_00 = 0;
  puVar2[8] = uVar8;
  puVar2[7] = uVar7;
  puVar2[4] = uVar10;
  puVar2[3] = uVar9;
  puVar2[6] = uVar6;
  puVar2[5] = uVar5;
  piVar4 = *(int **)(this + 0x20);
  puVar2[0xc] = param_1;
  *puVar2 = &PTR_traverse_00fed718;
  if (piVar4[2] != 0) {
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else if (iVar1 == 1) {
      uVar3 = piVar4[5];
    }
    else {
      if (iVar1 != 2) goto LAB_00c18620;
      uVar3 = piVar4[5] * piVar4[4];
    }
    if (uVar3 != 0) {
                    /* try { // try from 00c18618 to 00c1861f has its CatchHandler @ 00c18658 */
      std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
      __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
               this_00,(ulong)uVar3);
    }
  }
LAB_00c18620:
  SHC_Type::copyType((SHC_Type *)(puVar2 + 3),(SHC_Type *)(this + 0x18),param_1);
  if (puVar2 != (undefined8 *)this) {
    std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
    assign<AST_ConstantNode::Value*>
              ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
               this_00,*(Value **)(this + 0x48),*(Value **)(this + 0x50));
  }
  return puVar2;
}


