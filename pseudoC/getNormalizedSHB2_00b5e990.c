// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNormalizedSHB2
// Entry Point: 00b5e990
// Size: 60 bytes
// Signature: undefined __cdecl getNormalizedSHB2(Vector3 * param_1, SHB2 * param_2)


/* SphericalHarmonicsUtil::getNormalizedSHB2(Vector3 const&, SphericalHarmonicsUtil::SHB2&) */

void SphericalHarmonicsUtil::getNormalizedSHB2(Vector3 *param_1,SHB2 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 4);
  fVar2 = *(float *)param_1;
  *(undefined4 *)param_2 = 0x3e906eba;
  *(ulong *)(param_2 + 4) =
       CONCAT44((float)((ulong)uVar1 >> 0x20) * 0.4886025,(float)uVar1 * -0.4886025);
  *(float *)(param_2 + 0xc) = fVar2 * -0.4886025;
  return;
}


