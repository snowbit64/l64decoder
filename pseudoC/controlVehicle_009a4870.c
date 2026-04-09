// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: controlVehicle
// Entry Point: 009a4870
// Size: 216 bytes
// Signature: undefined __thiscall controlVehicle(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, ControlVehicle * param_2)


/* Bt2ScenegraphPhysicsContext::controlVehicle(TransformGroup*,
   Bt2ScenegraphPhysicsContext::ControlVehicle const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::controlVehicle
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,ControlVehicle *param_2)

{
  long lVar1;
  ulong uVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  Bt2ScenegraphPhysicsContext *pBVar4;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  uVar2 = *(ulong *)(lVar1 + 0x30);
  if (((uVar2 != 0) && ((*(byte *)(uVar2 + 0xe0) & 3) == 0)) &&
     (pBVar4 = *(Bt2ScenegraphPhysicsContext **)(this + 400),
     pBVar4 != (Bt2ScenegraphPhysicsContext *)0x0)) {
    pBVar3 = this + 400;
    do {
      if (*(ulong *)(pBVar4 + 0x20) >= uVar2) {
        pBVar3 = pBVar4;
      }
      pBVar4 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar4 + (ulong)(*(ulong *)(pBVar4 + 0x20) < uVar2) * 8);
    } while (pBVar4 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar3 != this + 400) && (*(ulong *)(pBVar3 + 0x20) <= uVar2)) {
      lVar1 = *(long *)(pBVar3 + 0x28);
      if (0.0001 <= ABS(*(float *)param_2)) {
        *(float *)(lVar1 + 0xb4) = *(float *)param_2;
        Bt2RaycastVehicle::activateAllBodies();
      }
      else {
        *(undefined4 *)(lVar1 + 0xb4) = 0;
      }
      *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(lVar1 + 0xf8) = *(undefined8 *)(param_2 + 0xc);
      *(undefined4 *)(lVar1 + 0xa4) = *(undefined4 *)(param_2 + 0x14);
      *(undefined8 *)(lVar1 + 0x11c) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(param_2 + 0x20);
    }
  }
  return;
}


