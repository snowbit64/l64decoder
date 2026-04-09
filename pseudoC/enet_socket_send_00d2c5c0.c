// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_send
// Entry Point: 00d2c5c0
// Size: 176 bytes
// Signature: undefined enet_socket_send(void)


void enet_socket_send(int param_1,undefined4 *param_2,iovec *param_3,size_t param_4)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined local_70 [16];
  iovec *local_60;
  size_t sStack_58;
  void *local_50;
  size_t sStack_48;
  undefined8 local_40;
  undefined2 local_38;
  ushort local_36;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70._8_4_ = 0;
  local_70._12_4_ = 0;
  local_70._0_8_ = (undefined2 *)0x0;
  sStack_48 = 0;
  local_50 = (void *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  if (param_2 != (undefined4 *)0x0) {
    local_34 = *param_2;
    local_70._0_8_ = &local_38;
    local_30 = 0;
    local_36 = *(ushort *)(param_2 + 1) >> 8 | (ushort)((*(ushort *)(param_2 + 1) & 0xff00ff) << 8);
    local_38 = 2;
    local_70._8_4_ = 0x10;
    local_70._12_4_ = 0;
  }
  local_60 = param_3;
  sStack_58 = param_4;
  uVar2 = sendmsg(param_1,(msghdr *)local_70,0x4000);
  if ((int)uVar2 == -1) {
    piVar3 = (int *)__errno();
    uVar2 = (ulong)-(uint)(*piVar3 != 0xb);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


