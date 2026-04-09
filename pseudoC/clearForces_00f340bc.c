// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearForces
// Entry Point: 00f340bc
// Size: 52 bytes
// Signature: undefined clearForces(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btDiscreteDynamicsWorld::clearForces() */

void btDiscreteDynamicsWorld::clearForces(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(in_x0 + 0x144)) {
    lVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(in_x0 + 0x150) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *(undefined8 *)(lVar2 + 0x1e8) = 0;
      *(undefined8 *)(lVar2 + 0x1e0) = 0;
      *(undefined8 *)(lVar2 + 0x1f8) = 0;
      *(undefined8 *)(lVar2 + 0x1f0) = 0;
    } while (lVar1 < *(int *)(in_x0 + 0x144));
  }
  return;
}


