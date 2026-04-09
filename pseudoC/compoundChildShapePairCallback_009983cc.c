// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compoundChildShapePairCallback
// Entry Point: 009983cc
// Size: 84 bytes
// Signature: undefined __cdecl compoundChildShapePairCallback(btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, int param_3)


/* Bt2PhysicsUtil::compoundChildShapePairCallback(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, int) */

bool Bt2PhysicsUtil::compoundChildShapePairCallback
               (btCollisionObjectWrapper *param_1,btCollisionObjectWrapper *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(param_2 + 0x10) + 0x108);
  if ((pcVar3 == (char *)0x0) || (-1 < *pcVar3)) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0xc0);
    uVar1 = (int)*(short *)(lVar2 + 8) | (uint)*(ushort *)(lVar2 + 10) << 0x10;
  }
  else {
    uVar1 = *(uint *)(*(long *)(pcVar3 + 0x18) + (long)param_3 * 0x10 + 8);
  }
  return (uVar1 & ((int)*(short *)(*(long *)(*(long *)(param_1 + 0x10) + 0xc0) + 8) |
                  (uint)*(ushort *)(*(long *)(*(long *)(param_1 + 0x10) + 0xc0) + 10) << 0x10)) != 0
  ;
}


