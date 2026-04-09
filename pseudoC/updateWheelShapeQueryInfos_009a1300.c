// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateWheelShapeQueryInfos
// Entry Point: 009a1300
// Size: 68 bytes
// Signature: undefined __thiscall updateWheelShapeQueryInfos(Bt2ScenegraphPhysicsContext * this, float param_1)


/* Bt2ScenegraphPhysicsContext::updateWheelShapeQueryInfos(float) */

void __thiscall
Bt2ScenegraphPhysicsContext::updateWheelShapeQueryInfos
          (Bt2ScenegraphPhysicsContext *this,float param_1)

{
  Bt2RaycastVehicle **ppBVar1;
  Bt2RaycastVehicle **ppBVar2;
  
  ppBVar1 = *(Bt2RaycastVehicle ***)(this + 0x1a8);
  for (ppBVar2 = *(Bt2RaycastVehicle ***)(this + 0x1a0); ppBVar2 != ppBVar1; ppBVar2 = ppBVar2 + 1)
  {
    Bt2RaycastVehicle::updateQueryInfo(*ppBVar2,param_1);
  }
  return;
}


