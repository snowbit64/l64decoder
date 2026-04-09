// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_timeout
// Entry Point: 00d28e98
// Size: 48 bytes
// Signature: undefined enet_peer_timeout(void)


void enet_peer_timeout(long param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x20;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  iVar2 = 8000;
  if (param_3 != 0) {
    iVar2 = param_3;
  }
  iVar3 = 35000;
  if (param_4 != 0) {
    iVar3 = param_4;
  }
  *(int *)(param_1 + 0xac) = iVar1;
  *(int *)(param_1 + 0xb0) = iVar2;
  *(int *)(param_1 + 0xb4) = iVar3;
  return;
}


