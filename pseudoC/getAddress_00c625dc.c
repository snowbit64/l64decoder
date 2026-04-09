// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAddress
// Entry Point: 00c625dc
// Size: 36 bytes
// Signature: undefined __cdecl getAddress(char * param_1, uint param_2, uint * param_3)


/* Network::getAddress(char const*, unsigned int, unsigned int&) */

bool Network::getAddress(char *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = inet_pton(2,param_1,param_3);
  return iVar1 == 1;
}


