// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onFinish
// Entry Point: 0072d75c
// Size: 156 bytes
// Signature: undefined onFinish(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationMapGenerator::PhysicsTask::onFinish() */

void VehicleNavigationMapGenerator::PhysicsTask::onFinish(void)

{
  int iVar1;
  long in_x0;
  long *plVar2;
  
  if (7 < *(uint *)(in_x0 + 0x40)) {
    iVar1 = *(int *)(*(long *)(in_x0 + 0x18) + 0xcc);
    *(undefined *)(in_x0 + 0x39) = 1;
    *(undefined *)
     (*(long *)(*(long *)(in_x0 + 0x18) + 0xb8) +
     (ulong)(uint)(*(int *)(in_x0 + 0x30) + iVar1 * *(int *)(in_x0 + 0x34))) = 0;
    plVar2 = *(long **)(in_x0 + 0x18);
    iVar1 = FUN_00f27700(0xffffffff,plVar2 + 1);
    if (iVar1 < 2) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    iVar1 = FUN_00f27700(0xffffffff,in_x0 + 0x10);
    if (iVar1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x0072d7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(in_x0 + 8) + 0x10))();
      return;
    }
  }
  return;
}


