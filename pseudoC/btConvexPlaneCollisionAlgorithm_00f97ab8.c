// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btConvexPlaneCollisionAlgorithm
// Entry Point: 00f97ab8
// Size: 148 bytes
// Signature: undefined __thiscall btConvexPlaneCollisionAlgorithm(btConvexPlaneCollisionAlgorithm * this, btPersistentManifold * param_1, btCollisionAlgorithmConstructionInfo * param_2, btCollisionObjectWrapper * param_3, btCollisionObjectWrapper * param_4, bool param_5, int param_6, int param_7)


/* btConvexPlaneCollisionAlgorithm::btConvexPlaneCollisionAlgorithm(btPersistentManifold*,
   btCollisionAlgorithmConstructionInfo const&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, bool, int, int) */

void __thiscall
btConvexPlaneCollisionAlgorithm::btConvexPlaneCollisionAlgorithm
          (btConvexPlaneCollisionAlgorithm *this,btPersistentManifold *param_1,
          btCollisionAlgorithmConstructionInfo *param_2,btCollisionObjectWrapper *param_3,
          btCollisionObjectWrapper *param_4,bool param_5,int param_6,int param_7)

{
  btCollisionObjectWrapper *pbVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  this[0x10] = (btConvexPlaneCollisionAlgorithm)0x0;
  plVar2 = *(long **)param_2;
  *(btPersistentManifold **)(this + 0x18) = param_1;
  this[0x20] = (btConvexPlaneCollisionAlgorithm)param_5;
  *(int *)(this + 0x24) = param_6;
  *(int *)(this + 0x28) = param_7;
  *(undefined ***)this = &PTR__btConvexPlaneCollisionAlgorithm_0101c3b8;
  *(long **)(this + 8) = plVar2;
  if (param_1 == (btPersistentManifold *)0x0) {
    pbVar1 = param_3;
    if (!param_5) {
      pbVar1 = param_4;
      param_4 = param_3;
    }
    uVar3 = (**(code **)(*plVar2 + 0x30))
                      (plVar2,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(pbVar1 + 0x10));
    if ((uVar3 & 1) != 0) {
      uVar4 = (**(code **)(**(long **)(this + 8) + 0x18))
                        (*(long **)(this + 8),*(undefined8 *)(param_4 + 0x10),
                         *(undefined8 *)(pbVar1 + 0x10));
      *(undefined8 *)(this + 0x18) = uVar4;
      this[0x10] = (btConvexPlaneCollisionAlgorithm)0x1;
    }
  }
  return;
}


