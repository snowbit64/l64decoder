// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_listen
// Entry Point: 00d2c290
// Size: 16 bytes
// Signature: undefined enet_socket_listen(void)


int enet_socket_listen(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x80;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  iVar1 = listen(param_1,iVar1);
  return iVar1;
}


