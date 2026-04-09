// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btSphereSphereCollisionAlgorithm
// Entry Point: 00f94258
// Size: 92 bytes
// Signature: undefined __thiscall btSphereSphereCollisionAlgorithm(btSphereSphereCollisionAlgorithm * this, btPersistentManifold * param_1, btCollisionAlgorithmConstructionInfo * param_2, btCollisionObjectWrapper * param_3, btCollisionObjectWrapper * param_4)


/* btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(btPersistentManifold*,
   btCollisionAlgorithmConstructionInfo const&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*) */

void __thiscall
btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm
          (btSphereSphereCollisionAlgorithm *this,btPersistentManifold *param_1,
          btCollisionAlgorithmConstructionInfo *param_2,btCollisionObjectWrapper *param_3,
          btCollisionObjectWrapper *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  this[0x10] = (btSphereSphereCollisionAlgorithm)0x0;
  plVar1 = *(long **)param_2;
  *(btPersistentManifold **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__btSphereSphereCollisionAlgorithm_0101c220;
  *(long **)(this + 8) = plVar1;
  if (param_1 == (btPersistentManifold *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))
                      (plVar1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
    *(undefined8 *)(this + 0x18) = uVar2;
    this[0x10] = (btSphereSphereCollisionAlgorithm)0x1;
  }
  return;
}


