// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: warp
// Entry Point: 009be3a8
// Size: 108 bytes
// Signature: undefined __thiscall warp(Bt2KinematicCharacterController * this, btVector3 * param_1)


/* Bt2KinematicCharacterController::warp(btVector3 const&) */

void __thiscall
Bt2KinematicCharacterController::warp(Bt2KinematicCharacterController *this,btVector3 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 8);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  *(undefined4 *)(lVar3 + 8) = 0x3f800000;
  *(undefined8 *)(lVar3 + 0xc) = 0;
  *(undefined8 *)(lVar3 + 0x14) = 0;
  *(undefined4 *)(lVar3 + 0x1c) = 0x3f800000;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0x3f800000;
  *(undefined8 *)(lVar3 + 0x40) = uVar5;
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(int *)(lVar3 + 0x148) = *(int *)(lVar3 + 0x148) + 1;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


