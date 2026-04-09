// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2SoftBodyHeightfieldTriangleCallback
// Entry Point: 00bb059c
// Size: 132 bytes
// Signature: undefined __thiscall Bt2SoftBodyHeightfieldTriangleCallback(Bt2SoftBodyHeightfieldTriangleCallback * this, btDispatcher * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, bool param_4)


/* Bt2SoftBodyHeightfieldTriangleCallback::Bt2SoftBodyHeightfieldTriangleCallback(btDispatcher*,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
Bt2SoftBodyHeightfieldTriangleCallback::Bt2SoftBodyHeightfieldTriangleCallback
          (Bt2SoftBodyHeightfieldTriangleCallback *this,btDispatcher *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pbVar1 = param_2;
  if (!param_4) {
    pbVar1 = param_3;
    param_3 = param_2;
  }
  *(btDispatcher **)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x70] = (Bt2SoftBodyHeightfieldTriangleCallback)0x1;
  this[0x90] = (Bt2SoftBodyHeightfieldTriangleCallback)0x1;
  this[0xb0] = (Bt2SoftBodyHeightfieldTriangleCallback)0x1;
  this[0xd0] = (Bt2SoftBodyHeightfieldTriangleCallback)0x1;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(pbVar1 + 0x10);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined ***)this = &PTR__Bt2SoftBodyHeightfieldTriangleCallback_00feb1f0;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar3;
                    /* try { // try from 00bb0610 to 00bb0613 has its CatchHandler @ 00bb0620 */
  clearCache();
  return;
}


