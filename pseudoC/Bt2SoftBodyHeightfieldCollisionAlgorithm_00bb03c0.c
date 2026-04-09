// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2SoftBodyHeightfieldCollisionAlgorithm
// Entry Point: 00bb03c0
// Size: 200 bytes
// Signature: undefined __thiscall Bt2SoftBodyHeightfieldCollisionAlgorithm(Bt2SoftBodyHeightfieldCollisionAlgorithm * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, bool param_4)


/* Bt2SoftBodyHeightfieldCollisionAlgorithm::Bt2SoftBodyHeightfieldCollisionAlgorithm(btCollisionAlgorithmConstructionInfo
   const&, btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
Bt2SoftBodyHeightfieldCollisionAlgorithm::Bt2SoftBodyHeightfieldCollisionAlgorithm
          (Bt2SoftBodyHeightfieldCollisionAlgorithm *this,
          btCollisionAlgorithmConstructionInfo *param_1,btCollisionObjectWrapper *param_2,
          btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  btCollisionAlgorithm::btCollisionAlgorithm((btCollisionAlgorithm *)this,param_1);
  pbVar1 = param_2;
  if (!param_4) {
    pbVar1 = param_3;
  }
  this[0x10] = (Bt2SoftBodyHeightfieldCollisionAlgorithm)param_4;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)(this + 0x18) = &PTR__Bt2SoftBodyHeightfieldTriangleCallback_00feb1f0;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined ***)this = &PTR__Bt2SoftBodyHeightfieldCollisionAlgorithm_00feb1b8;
  *(undefined8 *)(this + 0x58) = uVar2;
  *(undefined8 *)(this + 0x60) = 0;
  if (!param_4) {
    param_3 = param_2;
  }
  *(undefined8 *)(this + 0xb4) = 0;
  this[0x88] = (Bt2SoftBodyHeightfieldCollisionAlgorithm)0x1;
  this[0xa8] = (Bt2SoftBodyHeightfieldCollisionAlgorithm)0x1;
  this[200] = (Bt2SoftBodyHeightfieldCollisionAlgorithm)0x1;
  this[0xe8] = (Bt2SoftBodyHeightfieldCollisionAlgorithm)0x1;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(pbVar1 + 0x10);
  *(undefined8 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x28) = uVar3;
                    /* try { // try from 00bb046c to 00bb0473 has its CatchHandler @ 00bb0488 */
  Bt2SoftBodyHeightfieldTriangleCallback::clearCache();
  return;
}


