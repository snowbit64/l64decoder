// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 009b04c0
// Size: 92 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(CreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* Bt2SoftBodyHeightfieldCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

Bt2SoftBodyHeightfieldCollisionAlgorithm * __thiscall
Bt2SoftBodyHeightfieldCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  Bt2SoftBodyHeightfieldCollisionAlgorithm *this_00;
  
  this_00 = (Bt2SoftBodyHeightfieldCollisionAlgorithm *)
            (**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0xf8);
  Bt2SoftBodyHeightfieldCollisionAlgorithm(this_00,param_1,param_2,param_3,false);
  return this_00;
}


