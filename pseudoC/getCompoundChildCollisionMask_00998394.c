// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCompoundChildCollisionMask
// Entry Point: 00998394
// Size: 56 bytes
// Signature: undefined __cdecl getCompoundChildCollisionMask(btCollisionObjectWrapper * param_1, int param_2)


/* Bt2PhysicsUtil::getCompoundChildCollisionMask(btCollisionObjectWrapper const*, int) */

uint Bt2PhysicsUtil::getCompoundChildCollisionMask(btCollisionObjectWrapper *param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(*(long *)(param_1 + 0x10) + 0x108);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 < '\0')) {
    return *(uint *)(*(long *)(pcVar2 + 0x18) + (long)param_2 * 0x10 + 8);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xc0);
  return (int)*(short *)(lVar1 + 8) | (uint)*(ushort *)(lVar1 + 10) << 0x10;
}


