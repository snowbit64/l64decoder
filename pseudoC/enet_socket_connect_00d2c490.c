// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_connect
// Entry Point: 00d2c490
// Size: 148 bytes
// Signature: undefined enet_socket_connect(void)


int enet_socket_connect(int param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
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
  local_38.sa_data._2_4_ = *param_2;
  local_38.sa_family = 2;
  local_38.sa_data._0_2_ =
       *(ushort *)(param_2 + 1) >> 8 | (ushort)((*(ushort *)(param_2 + 1) & 0xff00ff) << 8);
  iVar2 = connect(param_1,&local_38,0x10);
  if ((iVar2 == -1) && (piVar3 = (int *)__errno(), *piVar3 == 0x73)) {
    iVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


