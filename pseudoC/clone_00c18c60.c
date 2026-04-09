// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00c18c60
// Size: 268 bytes
// Signature: undefined __thiscall clone(AST_SelectionNode * this, SHC_PoolAllocator * param_1)


/* AST_SelectionNode::clone(SHC_PoolAllocator&) */

undefined8 * __thiscall AST_SelectionNode::clone(AST_SelectionNode *this,SHC_PoolAllocator *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x60);
  plVar4 = *(long **)(this + 0x48);
  if (plVar4 == (long *)0x0) {
    uVar2 = 0;
    plVar4 = *(long **)(this + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_00c18d5c;
LAB_00c18cb4:
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_1);
    plVar4 = *(long **)(this + 0x58);
    if (plVar4 == (long *)0x0) goto LAB_00c18ce0;
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 8))(plVar4,param_1);
    plVar4 = *(long **)(this + 0x50);
    if (plVar4 != (long *)0x0) goto LAB_00c18cb4;
LAB_00c18d5c:
    uVar3 = 0;
    plVar4 = *(long **)(this + 0x58);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
      goto LAB_00c18ce0;
    }
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 8))(plVar4,param_1);
LAB_00c18ce0:
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR___cxa_pure_virtual_00fed450;
  uVar6 = *(undefined8 *)(this + 0x20);
  uVar5 = *(undefined8 *)(this + 0x18);
  uVar8 = *(undefined8 *)(this + 0x30);
  uVar7 = *(undefined8 *)(this + 0x28);
  uVar10 = *(undefined8 *)(this + 0x40);
  uVar9 = *(undefined8 *)(this + 0x38);
  puVar1[0xb] = plVar4;
  *puVar1 = &PTR_traverse_00fed978;
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[8] = uVar10;
  puVar1[7] = uVar9;
  puVar1[6] = uVar8;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  SHC_Type::copyType((SHC_Type *)(puVar1 + 3),(SHC_Type *)(this + 0x18),param_1);
  return puVar1;
}


