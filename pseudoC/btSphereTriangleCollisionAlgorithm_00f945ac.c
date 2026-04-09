// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btSphereTriangleCollisionAlgorithm
// Entry Point: 00f945ac
// Size: 96 bytes
// Signature: undefined __thiscall btSphereTriangleCollisionAlgorithm(btSphereTriangleCollisionAlgorithm * this, btPersistentManifold * param_1, btCollisionAlgorithmConstructionInfo * param_2, btCollisionObjectWrapper * param_3, btCollisionObjectWrapper * param_4, bool param_5)


/* btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(btPersistentManifold*,
   btCollisionAlgorithmConstructionInfo const&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, bool) */

void __thiscall
btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm
          (btSphereTriangleCollisionAlgorithm *this,btPersistentManifold *param_1,
          btCollisionAlgorithmConstructionInfo *param_2,btCollisionObjectWrapper *param_3,
          btCollisionObjectWrapper *param_4,bool param_5)

{
  long *plVar1;
  undefined8 uVar2;
  
  this[0x10] = (btSphereTriangleCollisionAlgorithm)0x0;
  plVar1 = *(long **)param_2;
  *(btPersistentManifold **)(this + 0x18) = param_1;
  this[0x20] = (btSphereTriangleCollisionAlgorithm)param_5;
  *(undefined ***)this = &PTR__btSphereTriangleCollisionAlgorithm_0101c270;
  *(long **)(this + 8) = plVar1;
  if (param_1 == (btPersistentManifold *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))
                      (plVar1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
    *(undefined8 *)(this + 0x18) = uVar2;
    this[0x10] = (btSphereTriangleCollisionAlgorithm)0x1;
  }
  return;
}


