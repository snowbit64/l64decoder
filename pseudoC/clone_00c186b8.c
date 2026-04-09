// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00c186b8
// Size: 208 bytes
// Signature: undefined __thiscall clone(AST_BinaryNode * this, SHC_PoolAllocator * param_1)


/* AST_BinaryNode::clone(SHC_PoolAllocator&) */

undefined8 * __thiscall AST_BinaryNode::clone(AST_BinaryNode *this,SHC_PoolAllocator *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x60);
  uVar1 = *(undefined4 *)(this + 0x48);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR___cxa_pure_virtual_00fed450;
  uVar6 = *(undefined8 *)(this + 0x40);
  uVar5 = *(undefined8 *)(this + 0x38);
  uVar8 = *(undefined8 *)(this + 0x20);
  uVar7 = *(undefined8 *)(this + 0x18);
  uVar10 = *(undefined8 *)(this + 0x30);
  uVar9 = *(undefined8 *)(this + 0x28);
  *(undefined4 *)(puVar2 + 9) = uVar1;
  puVar2[8] = uVar6;
  puVar2[7] = uVar5;
  puVar2[4] = uVar8;
  puVar2[3] = uVar7;
  puVar2[6] = uVar10;
  puVar2[5] = uVar9;
  *puVar2 = &PTR_traverse_00fed7b0;
  SHC_Type::copyType((SHC_Type *)(puVar2 + 3),(SHC_Type *)(this + 0x18),param_1);
  plVar3 = *(long **)(this + 0x50);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 8))(plVar3,param_1);
  }
  plVar4 = *(long **)(this + 0x58);
  puVar2[10] = plVar3;
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 8))(plVar4,param_1);
  }
  puVar2[0xb] = plVar4;
  return puVar2;
}


