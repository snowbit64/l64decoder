// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btSoftBodyTriangleCallback
// Entry Point: 00f9ab80
// Size: 112 bytes
// Signature: undefined __thiscall btSoftBodyTriangleCallback(btSoftBodyTriangleCallback * this, btDispatcher * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, bool param_4)


/* btSoftBodyTriangleCallback::btSoftBodyTriangleCallback(btDispatcher*, btCollisionObjectWrapper
   const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
btSoftBodyTriangleCallback::btSoftBodyTriangleCallback
          (btSoftBodyTriangleCallback *this,btDispatcher *param_1,btCollisionObjectWrapper *param_2,
          btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pbVar1 = param_2;
  if (!param_4) {
    pbVar1 = param_3;
  }
  this[0x70] = (btSoftBodyTriangleCallback)0x1;
  this[0x90] = (btSoftBodyTriangleCallback)0x1;
  uVar3 = *(undefined8 *)(pbVar1 + 0x10);
  this[0xb0] = (btSoftBodyTriangleCallback)0x1;
  this[0xd0] = (btSoftBodyTriangleCallback)0x1;
  if (!param_4) {
    param_3 = param_2;
  }
  *(btDispatcher **)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined ***)this = &PTR__btSoftBodyTriangleCallback_0101c530;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar3;
  btHashMap<btHashKey<btTriIndex>,btTriIndex>::clear();
  return;
}


