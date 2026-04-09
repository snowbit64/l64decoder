// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preStep
// Entry Point: 009be23c
// Size: 168 bytes
// Signature: undefined __thiscall preStep(Bt2KinematicCharacterController * this, btCollisionWorld * param_1)


/* Bt2KinematicCharacterController::preStep(btCollisionWorld*) */

void __thiscall
Bt2KinematicCharacterController::preStep
          (Bt2KinematicCharacterController *this,btCollisionWorld *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  this[0xa0] = (Bt2KinematicCharacterController)0x0;
  uVar1 = recoverFromPenetration(this,param_1);
  if ((uVar1 & 1) != 0) {
    this[0xa0] = (Bt2KinematicCharacterController)0x1;
    uVar1 = recoverFromPenetration(this,param_1);
    if ((uVar1 & 1) != 0) {
      this[0xa0] = (Bt2KinematicCharacterController)0x1;
      uVar1 = recoverFromPenetration(this,param_1);
      if ((uVar1 & 1) != 0) {
        this[0xa0] = (Bt2KinematicCharacterController)0x1;
        uVar1 = recoverFromPenetration(this,param_1);
        if ((uVar1 & 1) != 0) {
          this[0xa0] = (Bt2KinematicCharacterController)0x1;
          uVar1 = recoverFromPenetration(this,param_1);
          if ((uVar1 & 1) != 0) {
            this[0xa0] = (Bt2KinematicCharacterController)0x1;
          }
        }
      }
    }
  }
  lVar2 = *(long *)(this + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(this + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(this + 0x74) = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(this + 0x6c) = uVar3;
  return;
}


