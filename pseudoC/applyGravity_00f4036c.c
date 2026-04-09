// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyGravity
// Entry Point: 00f4036c
// Size: 60 bytes
// Signature: undefined applyGravity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btRigidBody::applyGravity() */

void btRigidBody::applyGravity(void)

{
  long in_x0;
  undefined4 uVar1;
  
  if ((*(byte *)(in_x0 + 0xe0) & 3) != 0) {
    return;
  }
  uVar1 = NEON_fmadd(*(undefined4 *)(in_x0 + 0x1a8),*(undefined4 *)(in_x0 + 0x1b8),
                     *(undefined4 *)(in_x0 + 0x1e8));
  *(ulong *)(in_x0 + 0x1e0) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x1e0) >> 0x20) +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x1b0) >> 0x20) *
                (float)((ulong)*(undefined8 *)(in_x0 + 0x1a0) >> 0x20),
                (float)*(undefined8 *)(in_x0 + 0x1e0) +
                (float)*(undefined8 *)(in_x0 + 0x1b0) * (float)*(undefined8 *)(in_x0 + 0x1a0));
  *(undefined4 *)(in_x0 + 0x1e8) = uVar1;
  return;
}


