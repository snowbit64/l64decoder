// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_accept
// Entry Point: 00d2c524
// Size: 136 bytes
// Signature: undefined enet_socket_accept(void)


void enet_socket_accept(int param_1,undefined4 *param_2)

{
  sockaddr *__addr;
  socklen_t *__addr_len;
  long lVar1;
  int iVar2;
  socklen_t local_3c;
  sockaddr sStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __addr = (sockaddr *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    __addr = &sStack_38;
  }
  __addr_len = (socklen_t *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    __addr_len = &local_3c;
  }
  local_3c = 0x10;
  iVar2 = accept(param_1,__addr,__addr_len);
  if ((param_2 != (undefined4 *)0x0) && (iVar2 != -1)) {
    *param_2 = sStack_38.sa_data._2_4_;
    *(ushort *)(param_2 + 1) =
         (ushort)sStack_38.sa_data._0_2_ >> 8 |
         (ushort)(((ushort)sStack_38.sa_data._0_2_ & 0xff00ff) << 8);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


