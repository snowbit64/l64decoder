// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator*
// Entry Point: 00ba9d7c
// Size: 80 bytes
// Signature: undefined __cdecl operator*(btMatrix3x3 * param_1, btVector3 * param_2)


/* TEMPNAMEPLACEHOLDERVALUE(btMatrix3x3 const&, btVector3 const&) */

undefined4 operator*(btMatrix3x3 *param_1,btVector3 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined4 *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  uVar1 = NEON_fmadd(*(undefined4 *)param_1,uVar4,*(float *)(param_1 + 4) * fVar2);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_1 + 0x10),uVar4,fVar2 * *(float *)(param_1 + 0x14));
  uVar4 = NEON_fmadd(*(undefined4 *)(param_1 + 0x20),uVar4,fVar2 * *(float *)(param_1 + 0x24));
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_1 + 8),uVar5,uVar1);
  NEON_fmadd(*(undefined4 *)(param_1 + 0x18),uVar5,uVar3);
  NEON_fmadd(*(undefined4 *)(param_1 + 0x28),uVar5,uVar4);
  return uVar1;
}


