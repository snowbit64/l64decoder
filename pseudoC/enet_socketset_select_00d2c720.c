// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socketset_select
// Entry Point: 00d2c720
// Size: 112 bytes
// Signature: undefined enet_socketset_select(void)


void enet_socketset_select(int param_1,fd_set *param_2,fd_set *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38.tv_sec = (ulong)param_4 / 1000;
  local_38.tv_usec = (__suseconds_t)((param_4 % 1000) * 1000);
  iVar2 = select(param_1 + 1,param_2,param_3,(fd_set *)0x0,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


