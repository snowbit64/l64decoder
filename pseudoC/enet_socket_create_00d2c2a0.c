// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_create
// Entry Point: 00d2c2a0
// Size: 24 bytes
// Signature: undefined enet_socket_create(void)


int enet_socket_create(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1 == 2) {
    iVar1 = 2;
  }
  iVar1 = socket(2,iVar1,0);
  return iVar1;
}


