// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f91f9c
// Size: 80 bytes
// Signature: undefined __cdecl CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btSoftRigidCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

void btSoftRigidCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
               (btCollisionAlgorithmConstructionInfo *param_1,btCollisionObjectWrapper *param_2,
               btCollisionObjectWrapper *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)param_2 + 0x70))(*(long **)param_2,0x28);
  uVar2 = *(undefined8 *)param_2;
  *(btCollisionAlgorithmConstructionInfo *)(puVar1 + 4) = param_1[8];
  *puVar1 = &PTR__btSoftRigidCollisionAlgorithm_0101c4a8;
  puVar1[1] = uVar2;
  return;
}


