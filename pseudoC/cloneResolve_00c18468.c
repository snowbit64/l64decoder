// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cloneResolve
// Entry Point: 00c18468
// Size: 208 bytes
// Signature: undefined __thiscall cloneResolve(AST_DeclarationNode * this, SHC_PoolAllocator * param_1, GISLParserContext * param_2, IR_Type * param_3)


/* AST_DeclarationNode::cloneResolve(SHC_PoolAllocator&, GISLParserContext*, IR_Type*) */

undefined8 * __thiscall
AST_DeclarationNode::cloneResolve
          (AST_DeclarationNode *this,SHC_PoolAllocator *param_1,GISLParserContext *param_2,
          IR_Type *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x50);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR___cxa_pure_virtual_00fed450;
  uVar4 = *(undefined8 *)(this + 0x40);
  uVar3 = *(undefined8 *)(this + 0x38);
  uVar6 = *(undefined8 *)(this + 0x20);
  uVar5 = *(undefined8 *)(this + 0x18);
  uVar8 = *(undefined8 *)(this + 0x30);
  uVar7 = *(undefined8 *)(this + 0x28);
  *puVar1 = &PTR_traverse_00fed680;
  puVar1[8] = uVar4;
  puVar1[7] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[6] = uVar8;
  puVar1[5] = uVar7;
  puVar1[9] = 0;
  SHC_Type::resolveType((SHC_Type *)(puVar1 + 3),(SHC_Type *)(this + 0x18),param_1,param_3);
  plVar2 = *(long **)(this + 0x48);
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2,param_3);
  }
  puVar1[9] = uVar3;
  return puVar1;
}


