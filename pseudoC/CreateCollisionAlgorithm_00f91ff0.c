// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f91ff0
// Size: 68 bytes
// Signature: undefined __cdecl CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btSoftSoftCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

void btSoftSoftCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
               (btCollisionAlgorithmConstructionInfo *param_1,btCollisionObjectWrapper *param_2,
               btCollisionObjectWrapper *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)param_2 + 0x70))(*(long **)param_2,0x30);
  uVar2 = *(undefined8 *)param_2;
  *puVar1 = &PTR__btSoftSoftCollisionAlgorithm_0101c6c8;
  puVar1[1] = uVar2;
  return;
}


