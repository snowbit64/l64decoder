// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btConvexConcaveCollisionAlgorithm
// Entry Point: 00f933e4
// Size: 136 bytes
// Signature: undefined __thiscall btConvexConcaveCollisionAlgorithm(btConvexConcaveCollisionAlgorithm * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, bool param_4)


/* btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm(btCollisionAlgorithmConstructionInfo
   const&, btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm
          (btConvexConcaveCollisionAlgorithm *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = *(long **)param_1;
  this[0x10] = (btConvexConcaveCollisionAlgorithm)param_4;
  *(long **)(this + 0x58) = plVar2;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)this = &PTR__btConvexConcaveCollisionAlgorithm_0101c0f0;
  *(long **)(this + 8) = plVar2;
  pbVar1 = param_3;
  if (!param_4) {
    pbVar1 = param_2;
  }
  *(undefined ***)(this + 0x18) = &PTR__btConvexTriangleCallback_0101c128;
  if (!param_4) {
    param_2 = param_3;
  }
  lVar4 = *plVar2;
  *(btCollisionObjectWrapper **)(this + 0x20) = pbVar1;
  uVar3 = *(undefined8 *)(pbVar1 + 0x10);
  *(btCollisionObjectWrapper **)(this + 0x28) = param_2;
  uVar3 = (**(code **)(lVar4 + 0x18))(plVar2,uVar3,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(this + 0x70) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00f93468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x58) + 0x28))(*(long **)(this + 0x58),uVar3);
  return;
}


