// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_set_option
// Entry Point: 00d2c2b8
// Size: 356 bytes
// Signature: undefined enet_socket_set_option(void)


void enet_socket_set_option(int param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int __optname;
  long *__optval;
  socklen_t __optlen;
  long local_40;
  long lStack_38;
  int local_2c;
  long local_28;
  
  __optval = &local_40;
  lVar1 = tpidr_el0;
  iVar2 = -1;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_3;
  switch(param_2) {
  case 1:
    iVar2 = ioctl(param_1,0x5421,&local_2c);
    goto switchD_00d2c2fc_caseD_8;
  case 2:
    iVar2 = 1;
    __optname = 6;
    break;
  case 3:
    iVar2 = 1;
    __optname = 8;
    break;
  case 4:
    iVar2 = 1;
    __optname = 7;
    break;
  case 5:
    iVar2 = 1;
    __optname = 2;
    break;
  case 6:
    iVar2 = 1;
    __optlen = 0x10;
    local_40 = (long)(param_3 / 1000);
    __optname = 0x14;
    lStack_38 = (long)((param_3 % 1000) * 1000);
    goto LAB_00d2c3e8;
  case 7:
    iVar2 = 1;
    __optlen = 0x10;
    local_40 = (long)(param_3 / 1000);
    __optname = 0x15;
    lStack_38 = (long)((param_3 % 1000) * 1000);
    __optval = &local_40;
    goto LAB_00d2c3e8;
  default:
    goto switchD_00d2c2fc_caseD_8;
  case 9:
    iVar2 = 6;
    __optname = 1;
  }
  __optlen = 4;
  __optval = (long *)&local_2c;
LAB_00d2c3e8:
  iVar2 = setsockopt(param_1,iVar2,__optname,__optval,__optlen);
switchD_00d2c2fc_caseD_8:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(-(uint)(iVar2 == -1));
}


