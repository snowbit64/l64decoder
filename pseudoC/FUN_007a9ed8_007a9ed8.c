// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9ed8
// Entry Point: 007a9ed8
// Size: 80 bytes
// Signature: undefined FUN_007a9ed8(void)


void FUN_007a9ed8(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = Geometry::getCollisionProxyMesh();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    lVar1 = Geometry::getCollisionProxyMesh();
    bVar2 = *(byte *)(lVar1 + 0x8d) & 1;
  }
  *(byte *)(param_2 + 0x100) = bVar2;
  *(undefined4 *)(param_2 + 0x108) = 3;
  return;
}


