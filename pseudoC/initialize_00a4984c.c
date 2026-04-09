// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00a4984c
// Size: 212 bytes
// Signature: undefined initialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ValarShadingRateController::initialize() */

void ValarShadingRateController::initialize(void)

{
  long lVar1;
  long **in_x0;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(**in_x0 + 0x28))();
  if (*(char *)(lVar2 + 0xd1) != '\0') {
    if (in_x0[1] == (long *)0x0) {
      plVar5 = *in_x0;
      local_48 = 0;
      local_50[0] = 0x20;
      local_40 = 8;
      uVar3 = (**(code **)(*plVar5 + 0x138))(plVar5);
      plVar5 = (long *)(**(code **)(*plVar5 + 0x118))(plVar5,uVar3,local_50);
      in_x0[1] = plVar5;
      if (plVar5 == (long *)0x0) goto LAB_00a498f8;
    }
    if ((in_x0[3] != (long *)0x0) || (uVar4 = compileShaderVariants(), (uVar4 & 1) != 0)) {
      plVar5 = (long *)0x1;
      goto LAB_00a498f8;
    }
  }
  plVar5 = (long *)0x0;
LAB_00a498f8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5);
}


