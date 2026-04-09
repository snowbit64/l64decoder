// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSimulation
// Entry Point: 009bd004
// Size: 184 bytes
// Signature: undefined updateSimulation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsCharacterController::updateSimulation() */

void Bt2PhysicsCharacterController::updateSimulation(void)

{
  undefined4 *puVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(in_x0 + 0x40);
  uVar4 = *(long *)(in_x0 + 0x48) - lVar3;
  if ((int)(uVar4 >> 4) != 0) {
    lVar5 = 0;
    while( true ) {
      puVar1 = (undefined4 *)(lVar3 + lVar5);
      local_48 = *puVar1;
      local_44 = puVar1[1];
      local_40 = puVar1[2];
      local_3c = 0;
      Bt2KinematicCharacterController::move
                (*(Bt2KinematicCharacterController **)(in_x0 + 8),
                 *(btCollisionWorld **)(*(long *)(in_x0 + 0x20) + 0x30),(btVector3 *)&local_48,
                 puVar1[3]);
      if ((uVar4 >> 4 & 0xffffffff) * 0x10 + -0x10 == lVar5) break;
      lVar3 = *(long *)(in_x0 + 0x40);
      lVar5 = lVar5 + 0x10;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


