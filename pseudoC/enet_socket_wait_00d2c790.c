// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_wait
// Entry Point: 00d2c790
// Size: 340 bytes
// Signature: undefined enet_socket_wait(void)


void enet_socket_wait(int param_1,uint *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  timeval local_150;
  fd_set local_140;
  fd_set local_c0;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_150.tv_sec = (ulong)param_3 / 1000;
  local_c0.fds_bits[1] = 0;
  local_c0.fds_bits[0] = 0;
  local_c0.fds_bits[3] = 0;
  local_c0.fds_bits[2] = 0;
  local_c0.fds_bits[5] = 0;
  local_c0.fds_bits[4] = 0;
  local_c0.fds_bits[7] = 0;
  local_c0.fds_bits[6] = 0;
  local_c0.fds_bits[9] = 0;
  local_c0.fds_bits[8] = 0;
  local_c0.fds_bits[11] = 0;
  local_c0.fds_bits[10] = 0;
  local_c0.fds_bits[13] = 0;
  local_c0.fds_bits[12] = 0;
  local_c0.fds_bits[15] = 0;
  local_c0.fds_bits[14] = 0;
  local_150.tv_usec = (__suseconds_t)((param_3 % 1000) * 1000);
  local_140.fds_bits[1] = 0;
  local_140.fds_bits[0] = 0;
  local_140.fds_bits[3] = 0;
  local_140.fds_bits[2] = 0;
  local_140.fds_bits[5] = 0;
  local_140.fds_bits[4] = 0;
  local_140.fds_bits[7] = 0;
  local_140.fds_bits[6] = 0;
  local_140.fds_bits[9] = 0;
  local_140.fds_bits[8] = 0;
  local_140.fds_bits[11] = 0;
  local_140.fds_bits[10] = 0;
  local_140.fds_bits[13] = 0;
  local_140.fds_bits[12] = 0;
  local_140.fds_bits[15] = 0;
  local_140.fds_bits[14] = 0;
  uVar2 = *param_2;
  if ((uVar2 & 1) != 0) {
    __FD_SET_chk(param_1,&local_140,0x80);
    uVar2 = *param_2;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    __FD_SET_chk(param_1,&local_c0,0x80);
  }
  uVar2 = select(param_1 + 1,&local_c0,&local_140,(fd_set *)0x0,&local_150);
  uVar4 = (ulong)uVar2;
  if ((int)uVar2 < 0) {
    piVar5 = (int *)__errno();
    if ((*piVar5 != 4) || ((*(byte *)param_2 >> 2 & 1) == 0)) {
      uVar4 = 0xffffffff;
      goto LAB_00d2c8bc;
    }
    uVar2 = 4;
  }
  else {
    *param_2 = 0;
    if (uVar2 == 0) goto LAB_00d2c8bc;
    iVar3 = __FD_ISSET_chk(param_1,&local_140,0x80);
    if (iVar3 != 0) {
      *param_2 = *param_2 | 1;
    }
    uVar4 = __FD_ISSET_chk(param_1,&local_c0,0x80);
    if ((int)uVar4 == 0) goto LAB_00d2c8bc;
    uVar2 = *param_2 | 2;
  }
  uVar4 = 0;
  *param_2 = uVar2;
LAB_00d2c8bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


