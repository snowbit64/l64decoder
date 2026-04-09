// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_bind
// Entry Point: 00d2c194
// Size: 128 bytes
// Signature: undefined enet_socket_bind(void)


void enet_socket_bind(int param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  sockaddr local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38.sa_data[6] = '\0';
  local_38.sa_data[7] = '\0';
  local_38.sa_data[8] = '\0';
  local_38.sa_data[9] = '\0';
  local_38.sa_data[10] = '\0';
  local_38.sa_data[11] = '\0';
  local_38.sa_data[12] = '\0';
  local_38.sa_data[13] = '\0';
  local_38.sa_family = 2;
  if (param_2 == (undefined4 *)0x0) {
    local_38.sa_data._0_2_ = 0;
    local_38.sa_data[2] = '\0';
    local_38.sa_data[3] = '\0';
    local_38.sa_data[4] = '\0';
    local_38.sa_data[5] = '\0';
  }
  else {
    local_38.sa_data._2_4_ = *param_2;
    local_38.sa_data._0_2_ =
         *(ushort *)(param_2 + 1) >> 8 | (ushort)((*(ushort *)(param_2 + 1) & 0xff00ff) << 8);
  }
  iVar2 = bind(param_1,&local_38,0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


