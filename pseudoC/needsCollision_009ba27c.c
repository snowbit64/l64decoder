// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: needsCollision
// Entry Point: 009ba27c
// Size: 100 bytes
// Signature: undefined __thiscall needsCollision(VehicleConvexResultCallback * this, btBroadphaseProxy * param_1)


/* Bt2RaycastVehicle::VehicleConvexResultCallback::needsCollision(btBroadphaseProxy*) const */

undefined8 __thiscall
Bt2RaycastVehicle::VehicleConvexResultCallback::needsCollision
          (VehicleConvexResultCallback *this,btBroadphaseProxy *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((ushort)(*(ushort *)(this + 0xe) & *(ushort *)(param_1 + 10) |
              *(ushort *)(this + 0xc) & *(ushort *)(param_1 + 8)) != 0) {
    plVar3 = *(long **)param_1;
    plVar1 = *(long **)(this + 0x10);
    if (((plVar1 != plVar3) && ((*(byte *)(plVar3 + 0x1c) >> 2 & 1) == 0)) &&
       ((*(byte *)(plVar3 + 0x20) >> 1 & 1) != 0)) {
      if (*(int *)(plVar1 + 0x24) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009ba2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x18))();
        return uVar2;
      }
      return 1;
    }
  }
  return 0;
}


