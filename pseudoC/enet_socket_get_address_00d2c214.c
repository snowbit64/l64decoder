// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_get_address
// Entry Point: 00d2c214
// Size: 124 bytes
// Signature: undefined enet_socket_get_address(void)


void enet_socket_get_address(int param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  socklen_t local_3c;
  sockaddr sStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_3c = 0x10;
  iVar2 = getsockname(param_1,&sStack_38,&local_3c);
  if (iVar2 != -1) {
    iVar2 = 0;
    *param_2 = sStack_38.sa_data._2_4_;
    *(ushort *)(param_2 + 1) =
         (ushort)sStack_38.sa_data._0_2_ >> 8 |
         (ushort)(((ushort)sStack_38.sa_data._0_2_ & 0xff00ff) << 8);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


