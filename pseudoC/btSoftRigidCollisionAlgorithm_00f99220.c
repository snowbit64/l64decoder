// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btSoftRigidCollisionAlgorithm
// Entry Point: 00f99220
// Size: 28 bytes
// Signature: undefined __thiscall btSoftRigidCollisionAlgorithm(btSoftRigidCollisionAlgorithm * this, btPersistentManifold * param_1, btCollisionAlgorithmConstructionInfo * param_2, btCollisionObjectWrapper * param_3, btCollisionObjectWrapper * param_4, bool param_5)


/* btSoftRigidCollisionAlgorithm::btSoftRigidCollisionAlgorithm(btPersistentManifold*,
   btCollisionAlgorithmConstructionInfo const&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, bool) */

void __thiscall
btSoftRigidCollisionAlgorithm::btSoftRigidCollisionAlgorithm
          (btSoftRigidCollisionAlgorithm *this,btPersistentManifold *param_1,
          btCollisionAlgorithmConstructionInfo *param_2,btCollisionObjectWrapper *param_3,
          btCollisionObjectWrapper *param_4,bool param_5)

{
  undefined8 uVar1;
  
  this[0x20] = (btSoftRigidCollisionAlgorithm)param_5;
  uVar1 = *(undefined8 *)param_2;
  *(undefined ***)this = &PTR__btSoftRigidCollisionAlgorithm_0101c4a8;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


