// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compoundCompoundChildShapePairCallback
// Entry Point: 00998320
// Size: 116 bytes
// Signature: undefined __cdecl compoundCompoundChildShapePairCallback(btCollisionObjectWrapper * param_1, int param_2, btCollisionObjectWrapper * param_3, int param_4)


/* Bt2PhysicsUtil::compoundCompoundChildShapePairCallback(btCollisionObjectWrapper const*, int,
   btCollisionObjectWrapper const*, int) */

bool Bt2PhysicsUtil::compoundCompoundChildShapePairCallback
               (btCollisionObjectWrapper *param_1,int param_2,btCollisionObjectWrapper *param_3,
               int param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(*(long *)(param_1 + 0x10) + 0x108);
  if ((pcVar4 == (char *)0x0) || (-1 < *pcVar4)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0xc0);
    uVar1 = (int)*(short *)(lVar2 + 8) | (uint)*(ushort *)(lVar2 + 10) << 0x10;
  }
  else {
    uVar1 = *(uint *)(*(long *)(pcVar4 + 0x18) + (long)param_2 * 0x10 + 8);
  }
  pcVar4 = *(char **)(*(long *)(param_3 + 0x10) + 0x108);
  if ((pcVar4 == (char *)0x0) || (-1 < *pcVar4)) {
    lVar2 = *(long *)(*(long *)(param_3 + 0x10) + 0xc0);
    uVar3 = (int)*(short *)(lVar2 + 8) | (uint)*(ushort *)(lVar2 + 10) << 0x10;
  }
  else {
    uVar3 = *(uint *)(*(long *)(pcVar4 + 0x18) + (long)param_4 * 0x10 + 8);
  }
  return (uVar3 & uVar1) != 0;
}


