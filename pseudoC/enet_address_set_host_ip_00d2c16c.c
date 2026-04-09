// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_address_set_host_ip
// Entry Point: 00d2c16c
// Size: 40 bytes
// Signature: undefined enet_address_set_host_ip(void)


int enet_address_set_host_ip(in_addr *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = inet_aton(param_2,param_1);
  return -(uint)(iVar1 == 0);
}


