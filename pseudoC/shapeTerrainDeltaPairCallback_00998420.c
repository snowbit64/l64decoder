// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shapeTerrainDeltaPairCallback
// Entry Point: 00998420
// Size: 68 bytes
// Signature: undefined __cdecl shapeTerrainDeltaPairCallback(btCollisionObjectWrapper * param_1, uint param_2)


/* Bt2PhysicsUtil::shapeTerrainDeltaPairCallback(btCollisionObjectWrapper const*, unsigned int) */

bool Bt2PhysicsUtil::shapeTerrainDeltaPairCallback(btCollisionObjectWrapper *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(param_1 + 0x10) + 0x108);
  if ((pcVar3 == (char *)0x0) || (-1 < *pcVar3)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0xc0);
    uVar1 = (int)*(short *)(lVar2 + 8) | (uint)*(ushort *)(lVar2 + 10) << 0x10;
  }
  else {
    uVar1 = *(uint *)(*(long *)(pcVar3 + 0x18) + (long)*(int *)(param_1 + 0x24) * 0x10 + 8);
  }
  return (uVar1 & param_2) != 0;
}


