// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btSoftBodyConcaveCollisionAlgorithm
// Entry Point: 00f992b0
// Size: 136 bytes
// Signature: undefined __thiscall btSoftBodyConcaveCollisionAlgorithm(btSoftBodyConcaveCollisionAlgorithm * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, bool param_4)


/* btSoftBodyConcaveCollisionAlgorithm::btSoftBodyConcaveCollisionAlgorithm(btCollisionAlgorithmConstructionInfo
   const&, btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
btSoftBodyConcaveCollisionAlgorithm::btSoftBodyConcaveCollisionAlgorithm
          (btSoftBodyConcaveCollisionAlgorithm *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this[0x10] = (btSoftBodyConcaveCollisionAlgorithm)param_4;
  uVar2 = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR__btSoftBodyConcaveCollisionAlgorithm_0101c4f8;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x58) = uVar2;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x88] = (btSoftBodyConcaveCollisionAlgorithm)0x1;
  pbVar1 = param_2;
  if (!param_4) {
    pbVar1 = param_3;
  }
  this[0xa8] = (btSoftBodyConcaveCollisionAlgorithm)0x1;
  this[200] = (btSoftBodyConcaveCollisionAlgorithm)0x1;
  this[0xe8] = (btSoftBodyConcaveCollisionAlgorithm)0x1;
  if (!param_4) {
    param_3 = param_2;
  }
  *(undefined8 *)(this + 0x80) = 0;
  uVar3 = *(undefined8 *)(pbVar1 + 0x10);
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd4) = 0;
  *(undefined ***)(this + 0x18) = &PTR__btSoftBodyTriangleCallback_0101c530;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x28) = uVar3;
  btHashMap<btHashKey<btTriIndex>,btTriIndex>::clear();
  return;
}


