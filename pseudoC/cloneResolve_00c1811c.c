// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cloneResolve
// Entry Point: 00c1811c
// Size: 152 bytes
// Signature: undefined __thiscall cloneResolve(AST_Branch * this, SHC_PoolAllocator * param_1, GISLParserContext * param_2, IR_Type * param_3)


/* AST_Branch::cloneResolve(SHC_PoolAllocator&, GISLParserContext*, IR_Type*) */

undefined8 * __thiscall
AST_Branch::cloneResolve
          (AST_Branch *this,SHC_PoolAllocator *param_1,GISLParserContext *param_2,IR_Type *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x28);
  plVar3 = *(long **)(this + 0x20);
  uVar1 = *(undefined4 *)(this + 0x18);
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2,param_3);
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = uVar1;
  puVar2[4] = uVar4;
  *puVar2 = &PTR_traverse_00fed570;
  return puVar2;
}


