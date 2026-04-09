// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addServerModStart
// Entry Point: 00b3d40c
// Size: 92 bytes
// Signature: undefined addServerModStart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::addServerModStart() */

void MasterServerManager::addServerModStart(void)

{
  byte *pbVar1;
  byte *pbVar2;
  long in_x0;
  byte *pbVar3;
  
  pbVar1 = *(byte **)(in_x0 + 0x80);
  pbVar3 = *(byte **)(in_x0 + 0x88);
  while (pbVar2 = pbVar3, pbVar2 != pbVar1) {
    pbVar3 = pbVar2 + -0x28;
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + -0x18));
    }
  }
  *(byte **)(in_x0 + 0x88) = pbVar1;
  return;
}


