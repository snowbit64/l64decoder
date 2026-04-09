// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: playerStep
// Entry Point: 009be2e4
// Size: 192 bytes
// Signature: undefined __thiscall playerStep(Bt2KinematicCharacterController * this, btCollisionWorld * param_1)


/* Bt2KinematicCharacterController::playerStep(btCollisionWorld*) */

void __thiscall
Bt2KinematicCharacterController::playerStep
          (Bt2KinematicCharacterController *this,btCollisionWorld *param_1)

{
  Bt2KinematicCharacterController BVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  BVar1 = this[0xb4];
  this[0xb4] = (Bt2KinematicCharacterController)0x0;
  lVar4 = *(long *)(this + 8);
  this[0xb5] = BVar1;
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  uVar5 = *(undefined8 *)(lVar4 + 8);
  uVar8 = *(undefined8 *)(lVar4 + 0x20);
  uVar7 = *(undefined8 *)(lVar4 + 0x18);
  uVar10 = *(undefined8 *)(lVar4 + 0x30);
  uVar9 = *(undefined8 *)(lVar4 + 0x28);
  stepUp(this,param_1);
  stepForwardAndStrafe(this,param_1,(btVector3 *)(this + 0x30));
  stepDown(this,param_1);
  lVar4 = *(long *)(this + 8);
  uVar12 = *(undefined8 *)(this + 0x60);
  uVar11 = *(undefined8 *)(this + 0x58);
  *(undefined8 *)(lVar4 + 0x10) = uVar6;
  *(undefined8 *)(lVar4 + 8) = uVar5;
  *(undefined8 *)(lVar4 + 0x20) = uVar8;
  *(undefined8 *)(lVar4 + 0x18) = uVar7;
  *(undefined8 *)(lVar4 + 0x30) = uVar10;
  *(undefined8 *)(lVar4 + 0x28) = uVar9;
  *(undefined8 *)(lVar4 + 0x40) = uVar12;
  *(undefined8 *)(lVar4 + 0x38) = uVar11;
  *(int *)(lVar4 + 0x148) = *(int *)(lVar4 + 0x148) + 1;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


