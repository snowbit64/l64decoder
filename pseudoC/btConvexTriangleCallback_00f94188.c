// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btConvexTriangleCallback
// Entry Point: 00f94188
// Size: 116 bytes
// Signature: undefined __thiscall btConvexTriangleCallback(btConvexTriangleCallback * this, btDispatcher * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, bool param_4)


/* btConvexTriangleCallback::btConvexTriangleCallback(btDispatcher*, btCollisionObjectWrapper
   const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
btConvexTriangleCallback::btConvexTriangleCallback
          (btConvexTriangleCallback *this,btDispatcher *param_1,btCollisionObjectWrapper *param_2,
          btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  undefined8 uVar2;
  long lVar3;
  
  pbVar1 = param_3;
  if (!param_4) {
    pbVar1 = param_2;
  }
  *(btDispatcher **)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(btCollisionObjectWrapper **)(this + 8) = pbVar1;
  *(undefined ***)this = &PTR__btConvexTriangleCallback_0101c128;
  if (!param_4) {
    param_2 = param_3;
  }
  lVar3 = *(long *)param_1;
  uVar2 = *(undefined8 *)(pbVar1 + 0x10);
  *(btCollisionObjectWrapper **)(this + 0x10) = param_2;
  uVar2 = (**(code **)(lVar3 + 0x18))(param_1,uVar2,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(this + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00f941f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x40) + 0x28))(*(long **)(this + 0x40),uVar2);
  return;
}


