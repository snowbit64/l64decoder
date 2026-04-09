// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeWorldExtent
// Entry Point: 007283b8
// Size: 48 bytes
// Signature: undefined computeWorldExtent(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OrientedBox::computeWorldExtent() const */

float OrientedBox::computeWorldExtent(void)

{
  long in_x0;
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(ABS(*(float *)(in_x0 + 8)),*(float *)(in_x0 + 0x14),
                            ABS(*(float *)(in_x0 + 0xc)) * *(float *)(in_x0 + 0x10));
  NEON_fmadd(ABS(*(float *)(in_x0 + 8)),*(float *)(in_x0 + 0x10),
             ABS(*(float *)(in_x0 + 0xc)) * *(float *)(in_x0 + 0x14));
  return *(float *)(in_x0 + 0x18) + fVar1;
}


