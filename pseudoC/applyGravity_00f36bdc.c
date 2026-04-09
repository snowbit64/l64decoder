// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyGravity
// Entry Point: 00f36bdc
// Size: 116 bytes
// Signature: undefined applyGravity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btDiscreteDynamicsWorld::applyGravity() */

void btDiscreteDynamicsWorld::applyGravity(void)

{
  int iVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(in_x0 + 0x144);
  if (0 < iVar1) {
    lVar2 = 0;
    lVar3 = *(long *)(in_x0 + 0x150);
    do {
      lVar4 = *(long *)(lVar3 + lVar2 * 8);
      if ((*(int *)(lVar4 + 0xec) != 2 && *(int *)(lVar4 + 0xec) != 5) &&
         ((*(byte *)(lVar4 + 0xe0) & 3) == 0)) {
        uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + 0x1a8),*(undefined4 *)(lVar4 + 0x1b8),
                           *(undefined4 *)(lVar4 + 0x1e8));
        *(ulong *)(lVar4 + 0x1e0) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x1e0) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar4 + 0x1b0) >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar4 + 0x1a0) >> 0x20),
                      (float)*(undefined8 *)(lVar4 + 0x1e0) +
                      (float)*(undefined8 *)(lVar4 + 0x1b0) * (float)*(undefined8 *)(lVar4 + 0x1a0))
        ;
        *(undefined4 *)(lVar4 + 0x1e8) = uVar5;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}


