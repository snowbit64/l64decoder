// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_get_option
// Entry Point: 00d2c41c
// Size: 116 bytes
// Signature: undefined enet_socket_get_option(void)


void enet_socket_get_option(int param_1,int param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  socklen_t local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == 8) {
    local_2c = 4;
    iVar2 = getsockopt(param_1,1,4,param_3,&local_2c);
    iVar2 = -(uint)(iVar2 == -1);
  }
  else {
    iVar2 = -1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


