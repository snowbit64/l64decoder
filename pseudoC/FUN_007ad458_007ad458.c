// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ad458
// Entry Point: 007ad458
// Size: 64 bytes
// Signature: undefined FUN_007ad458(void)


void FUN_007ad458(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = GsMaterial::getAlbedoMap();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)(*(ushort *)(lVar1 + 0x48) >> 2) & 1;
  }
  *(byte *)(param_2 + 0x100) = bVar2;
  *(undefined4 *)(param_2 + 0x108) = 3;
  return;
}


