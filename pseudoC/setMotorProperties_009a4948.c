// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMotorProperties
// Entry Point: 009a4948
// Size: 232 bytes
// Signature: undefined __thiscall setMotorProperties(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, SetMotorProperties * param_2, bool param_3)


/* Bt2ScenegraphPhysicsContext::setMotorProperties(TransformGroup*,
   Bt2ScenegraphPhysicsContext::SetMotorProperties const&, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::setMotorProperties
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,SetMotorProperties *param_2,
          bool param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  Bt2RaycastVehicle *this_00;
  ulong uVar5;
  Bt2ScenegraphPhysicsContext *pBVar6;
  Bt2ScenegraphPhysicsContext *pBVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  lVar4 = RawTransformGroup::getPhysicsObject();
  uVar5 = *(ulong *)(lVar4 + 0x30);
  if (((uVar5 != 0) && ((*(byte *)(uVar5 + 0xe0) & 3) == 0)) &&
     (pBVar7 = *(Bt2ScenegraphPhysicsContext **)(this + 400),
     pBVar7 != (Bt2ScenegraphPhysicsContext *)0x0)) {
    pBVar6 = this + 400;
    do {
      if (*(ulong *)(pBVar7 + 0x20) >= uVar5) {
        pBVar6 = pBVar7;
      }
      pBVar7 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar7 + (ulong)(*(ulong *)(pBVar7 + 0x20) < uVar5) * 8);
    } while (pBVar7 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar6 != this + 400) && (*(ulong *)(pBVar6 + 0x20) <= uVar5)) {
      this_00 = *(Bt2RaycastVehicle **)(pBVar6 + 0x28);
      pfVar1 = *(float **)(param_2 + 0x20);
      pfVar2 = *(float **)(param_2 + 0x28);
      *(undefined8 *)(this_00 + 0x9c) = *(undefined8 *)param_2;
      uVar3 = *(uint *)(param_2 + 0x18);
      uVar9 = *(undefined4 *)(param_2 + 0x14);
      *(float *)(this_00 + 0x98) = 1.0 / *(float *)(param_2 + 8);
      uVar8 = *(undefined8 *)(param_2 + 0xc);
      *(undefined4 *)(this_00 + 0xb0) = uVar9;
      *(undefined8 *)(this_00 + 0xa8) = uVar8;
      Bt2RaycastVehicle::setMotorTorqueCurve(this_00,uVar3,pfVar1,pfVar2);
    }
  }
  if (param_3) {
    if (*(void **)(param_2 + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)(param_2 + 0x20));
    }
    if (*(void **)(param_2 + 0x28) != (void *)0x0) {
      operator_delete__(*(void **)(param_2 + 0x28));
      return;
    }
  }
  return;
}


