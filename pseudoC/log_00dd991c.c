// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: log
// Entry Point: 00dd991c
// Size: 220 bytes
// Signature: undefined __cdecl log(rcLogCategory param_1, char * param_2, ...)


/* rcContext::log(rcLogCategory, char const*, ...) */

void rcContext::log(rcLogCategory param_1,char *param_2,...)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char *in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined auStack_2b0 [8];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined *local_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  char acStack_238 [511];
  undefined local_39;
  long local_38;
  
  plVar3 = (long *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_2a8 = in_x3;
  uStack_2a0 = in_x4;
  local_298 = in_x5;
  uStack_290 = in_x6;
  local_288 = in_x7;
  if (*(char *)(plVar3 + 1) != '\0') {
    puStack_258 = &stack0xfffffffffffffd80;
    puStack_250 = auStack_2b0;
    uStack_248 = 0xffffff80ffffffd8;
    local_260 = (undefined *)register0x00000008;
    iVar2 = vsnprintf(acStack_238,0x200,in_x2,&local_260);
    if (0x1ff < iVar2) {
      iVar2 = 0x1ff;
      local_39 = 0;
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,(ulong)param_2 & 0xffffffff,acStack_238,iVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


