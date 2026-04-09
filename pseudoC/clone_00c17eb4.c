// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00c17eb4
// Size: 220 bytes
// Signature: undefined __thiscall clone(AST_Loop * this, SHC_PoolAllocator * param_1)


/* AST_Loop::clone(SHC_PoolAllocator&) */

undefined8 * __thiscall AST_Loop::clone(AST_Loop *this,SHC_PoolAllocator *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x38);
  plVar3 = *(long **)(this + 0x20);
  uVar1 = *(undefined4 *)(this + 0x18);
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
    plVar3 = *(long **)(this + 0x28);
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_1);
    plVar3 = *(long **)(this + 0x28);
  }
  if (plVar3 == (long *)0x0) {
    uVar5 = 0;
    plVar3 = *(long **)(this + 0x30);
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_1);
    plVar3 = *(long **)(this + 0x30);
  }
  if (plVar3 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,param_1);
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = uVar1;
  puVar2[4] = uVar4;
  puVar2[5] = uVar5;
  puVar2[6] = uVar6;
  *puVar2 = &PTR_traverse_00fed4e8;
  return puVar2;
}


