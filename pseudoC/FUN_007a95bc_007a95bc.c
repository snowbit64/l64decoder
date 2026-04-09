// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a95bc
// Entry Point: 007a95bc
// Size: 104 bytes
// Signature: undefined FUN_007a95bc(void)


void FUN_007a95bc(Camera *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  uStack_34 = param_2[4];
  local_30 = param_2[8];
  Camera::aim(param_1,(Vector3 *)&local_38,(float)param_2[0xc],(float)param_2[0x10],
              (float)param_2[0x14]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


