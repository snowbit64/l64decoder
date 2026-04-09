// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: normalizeSHB2
// Entry Point: 00b5e9d4
// Size: 24 bytes
// Signature: undefined __cdecl normalizeSHB2(SHB2 * param_1)


/* SphericalHarmonicsUtil::normalizeSHB2(SphericalHarmonicsUtil::SHB2&) */

void SphericalHarmonicsUtil::normalizeSHB2(SHB2 *param_1)

{
  *(ulong *)(param_1 + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * -0.488603,
                (float)*(undefined8 *)(param_1 + 8) * 0.488603);
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * -0.488603,
                (float)*(undefined8 *)param_1 * 0.282095);
  return;
}


