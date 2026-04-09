// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f92d10
// Size: 148 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(CreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btCompoundCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

undefined8 * __thiscall
btCompoundCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  undefined4 uVar1;
  undefined8 *this_00;
  long lVar2;
  undefined8 uVar3;
  
  this_00 = (undefined8 *)(**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x48);
  *(undefined *)(this_00 + 5) = 1;
  uVar3 = *(undefined8 *)param_1;
  *(undefined4 *)((long)this_00 + 0x14) = 0;
  *(undefined4 *)(this_00 + 3) = 0;
  this_00[4] = 0;
  lVar2 = *(long *)(param_2 + 8);
  *(undefined *)(this_00 + 6) = 0;
  *(undefined *)(this_00 + 8) = 0;
  *this_00 = &PTR__btCompoundCollisionAlgorithm_010198e8;
  this_00[1] = uVar3;
  uVar1 = *(undefined4 *)(lVar2 + 0x68);
  this_00[7] = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)((long)this_00 + 0x44) = uVar1;
  preallocateChildAlgorithms((btCompoundCollisionAlgorithm *)this_00,param_2,param_3);
  return this_00;
}


