// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f92c18
// Size: 148 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(SwappedCreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btCompoundCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

undefined8 * __thiscall
btCompoundCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm
          (SwappedCreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  undefined4 uVar1;
  undefined8 *this_00;
  undefined8 uVar2;
  
  this_00 = (undefined8 *)(**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x48);
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)((long)this_00 + 0x14) = 0;
  *(undefined4 *)(this_00 + 3) = 0;
  *(undefined *)(this_00 + 5) = 1;
  *(undefined *)(this_00 + 6) = 1;
  this_00[4] = 0;
  *(undefined *)(this_00 + 8) = 0;
  *this_00 = &PTR__btCompoundCollisionAlgorithm_010198e8;
  this_00[1] = uVar2;
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 8) + 0x68);
  this_00[7] = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)((long)this_00 + 0x44) = uVar1;
  preallocateChildAlgorithms((btCompoundCollisionAlgorithm *)this_00,param_2,param_3);
  return this_00;
}


