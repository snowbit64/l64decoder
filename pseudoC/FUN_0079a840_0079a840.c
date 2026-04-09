// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079a840
// Entry Point: 0079a840
// Size: 100 bytes
// Signature: undefined FUN_0079a840(void)


void FUN_0079a840(char **param_1)

{
  char *pcVar1;
  ulong uVar2;
  
  DAT_0107c390 = 0;
  uVar2 = Network::getHostnameByAddressString(*param_1,&DAT_0107c390,0xff);
  pcVar1 = &DAT_0107c390;
  if ((uVar2 & 1) == 0) {
    pcVar1 = "";
  }
  param_1[0x20] = pcVar1;
  *(undefined4 *)(param_1 + 0x21) = 6;
  *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) & 0xfffe;
  return;
}


