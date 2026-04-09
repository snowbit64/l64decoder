// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f11348
// Entry Point: 00f11348
// Size: 272 bytes
// Signature: undefined FUN_00f11348(void)


long FUN_00f11348(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined *local_260;
  undefined *puStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  char acStack_238 [512];
  long local_38;
  
  puStack_258 = &stack0xfffffffffffffd80;
  puStack_250 = &local_2b0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_248 = 0xffffff80ffffffd0;
  local_2b0 = param_3;
  local_2a8 = param_4;
  uStack_2a0 = param_5;
  local_298 = param_6;
  uStack_290 = param_7;
  local_288 = param_8;
  local_260 = (undefined *)register0x00000008;
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


