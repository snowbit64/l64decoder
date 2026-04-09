// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator*
// Entry Point: 00f6ff10
// Size: 68 bytes
// Signature: undefined __cdecl operator*(btVector3 * param_1, btMatrix3x3 * param_2)


/* TEMPNAMEPLACEHOLDERVALUE(btVector3 const&, btMatrix3x3 const&) */

undefined  [16] operator*(btVector3 *param_1,btMatrix3x3 *param_2)

{
  undefined auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 8);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x18),fVar4,*(float *)(param_2 + 8) * fVar2);
  auVar1._0_4_ = (float)*(undefined8 *)param_2 * fVar2 +
                 (float)*(undefined8 *)(param_2 + 0x10) * fVar4 +
                 (float)*(undefined8 *)(param_2 + 0x20) * fVar5;
  auVar1._4_4_ = (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar2 +
                 (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar4 +
                 (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * fVar5;
  NEON_fmadd(*(undefined4 *)(param_2 + 0x28),fVar5,uVar3);
  auVar1._8_8_ = 0;
  return auVar1;
}


