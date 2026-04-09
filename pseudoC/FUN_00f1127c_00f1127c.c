// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1127c
// Entry Point: 00f1127c
// Size: 204 bytes
// Signature: undefined FUN_00f1127c(void)


long FUN_00f1127c(long param_1,char *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  char acStack_238 [512];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_258 = param_3[1];
  local_260 = *param_3;
  uStack_248 = param_3[3];
  uStack_250 = param_3[2];
  vsnprintf(acStack_238,0x200,param_2,&local_260);
  puVar4 = *(undefined8 **)(param_1 + 8);
  uVar2 = __strlen_chk(acStack_238,0x200);
  uVar2 = FUN_00f128c0(param_1,acStack_238,uVar2);
  *puVar4 = uVar2;
  *(undefined4 *)((long)puVar4 + 0xc) = 5;
  plVar3 = *(long **)(param_1 + 8);
  if (*(long *)(param_1 + 0x28) - (long)plVar3 < 0x11) {
    FUN_00f0ab24(param_1,1);
    plVar3 = *(long **)(param_1 + 8);
  }
  *(long **)(param_1 + 8) = plVar3 + 2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return *plVar3 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


