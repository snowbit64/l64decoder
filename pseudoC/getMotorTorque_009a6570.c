// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMotorTorque
// Entry Point: 009a6570
// Size: 196 bytes
// Signature: undefined __thiscall getMotorTorque(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, float * param_2, float * param_3, float * param_4)


/* Bt2ScenegraphPhysicsContext::getMotorTorque(TransformGroup*, float&, float&, float&) */

void __thiscall
Bt2ScenegraphPhysicsContext::getMotorTorque
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,float *param_2,float *param_3,
          float *param_4)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  ulong uVar3;
  Bt2ScenegraphPhysicsContext *pBVar4;
  
  *param_2 = 0.0;
  *param_3 = 0.0;
  *param_4 = 0.0;
  lVar1 = RawTransformGroup::getPhysicsObject();
  if (((*(uint *)(lVar1 + 8) ^ 0xffffffff) & 0x88) == 0) {
    lVar1 = RawTransformGroup::getPhysicsObject();
    pBVar4 = *(Bt2ScenegraphPhysicsContext **)(this + 400);
    if (pBVar4 != (Bt2ScenegraphPhysicsContext *)0x0) {
      uVar3 = *(ulong *)(lVar1 + 0x30);
      pBVar2 = this + 400;
      do {
        if (*(ulong *)(pBVar4 + 0x20) >= uVar3) {
          pBVar2 = pBVar4;
        }
        pBVar4 = *(Bt2ScenegraphPhysicsContext **)
                  (pBVar4 + (ulong)(*(ulong *)(pBVar4 + 0x20) < uVar3) * 8);
      } while (pBVar4 != (Bt2ScenegraphPhysicsContext *)0x0);
      if ((pBVar2 != this + 400) && (*(ulong *)(pBVar2 + 0x20) <= uVar3)) {
        lVar1 = *(long *)(pBVar2 + 0x28);
        *param_2 = *(float *)(lVar1 + 0xec);
        *param_3 = *(float *)(lVar1 + 0xf0);
        *param_4 = *(float *)(lVar1 + 0xf4);
      }
    }
  }
  return;
}


