// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btCompoundCollisionAlgorithm
// Entry Point: 00f4d530
// Size: 84 bytes
// Signature: undefined __thiscall btCompoundCollisionAlgorithm(btCompoundCollisionAlgorithm * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, bool param_4)


/* btCompoundCollisionAlgorithm::btCompoundCollisionAlgorithm(btCollisionAlgorithmConstructionInfo
   const&, btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
btCompoundCollisionAlgorithm::btCompoundCollisionAlgorithm
          (btCompoundCollisionAlgorithm *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(this + 0x20) = 0;
  uVar3 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x28] = (btCompoundCollisionAlgorithm)0x1;
  this[0x30] = (btCompoundCollisionAlgorithm)param_4;
  this[0x40] = (btCompoundCollisionAlgorithm)0x0;
  *(undefined ***)this = &PTR__btCompoundCollisionAlgorithm_010198e8;
  *(undefined8 *)(this + 8) = uVar3;
  pbVar1 = param_3;
  if (!param_4) {
    pbVar1 = param_2;
  }
  lVar2 = *(long *)(pbVar1 + 8);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(lVar2 + 0x68);
  preallocateChildAlgorithms(this,param_2,param_3);
  return;
}


