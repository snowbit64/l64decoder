// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btSoftSoftCollisionAlgorithm
// Entry Point: 00f9ae00
// Size: 24 bytes
// Signature: undefined __thiscall btSoftSoftCollisionAlgorithm(btSoftSoftCollisionAlgorithm * this, btPersistentManifold * param_1, btCollisionAlgorithmConstructionInfo * param_2, btCollisionObjectWrapper * param_3, btCollisionObjectWrapper * param_4)


/* btSoftSoftCollisionAlgorithm::btSoftSoftCollisionAlgorithm(btPersistentManifold*,
   btCollisionAlgorithmConstructionInfo const&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*) */

void __thiscall
btSoftSoftCollisionAlgorithm::btSoftSoftCollisionAlgorithm
          (btSoftSoftCollisionAlgorithm *this,btPersistentManifold *param_1,
          btCollisionAlgorithmConstructionInfo *param_2,btCollisionObjectWrapper *param_3,
          btCollisionObjectWrapper *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2;
  *(undefined ***)this = &PTR__btSoftSoftCollisionAlgorithm_0101c6c8;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


