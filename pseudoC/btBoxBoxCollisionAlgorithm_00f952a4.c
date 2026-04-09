// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btBoxBoxCollisionAlgorithm
// Entry Point: 00f952a4
// Size: 136 bytes
// Signature: undefined __thiscall btBoxBoxCollisionAlgorithm(btBoxBoxCollisionAlgorithm * this, btPersistentManifold * param_1, btCollisionAlgorithmConstructionInfo * param_2, btCollisionObjectWrapper * param_3, btCollisionObjectWrapper * param_4)


/* btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(btPersistentManifold*,
   btCollisionAlgorithmConstructionInfo const&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*) */

void __thiscall
btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm
          (btBoxBoxCollisionAlgorithm *this,btPersistentManifold *param_1,
          btCollisionAlgorithmConstructionInfo *param_2,btCollisionObjectWrapper *param_3,
          btCollisionObjectWrapper *param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  this[0x10] = (btBoxBoxCollisionAlgorithm)0x0;
  plVar1 = *(long **)param_2;
  *(btPersistentManifold **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__btBoxBoxCollisionAlgorithm_0101c300;
  *(long **)(this + 8) = plVar1;
  if ((param_1 == (btPersistentManifold *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x30))
                        (plVar1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10)),
     (uVar2 & 1) != 0)) {
    uVar3 = (**(code **)(**(long **)(this + 8) + 0x18))
                      (*(long **)(this + 8),*(undefined8 *)(param_3 + 0x10),
                       *(undefined8 *)(param_4 + 0x10));
    *(undefined8 *)(this + 0x18) = uVar3;
    this[0x10] = (btBoxBoxCollisionAlgorithm)0x1;
  }
  return;
}


