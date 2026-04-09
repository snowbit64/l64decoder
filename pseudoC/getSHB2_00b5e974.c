// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSHB2
// Entry Point: 00b5e974
// Size: 28 bytes
// Signature: undefined __cdecl getSHB2(Vector3 * param_1, SHB2 * param_2)


/* SphericalHarmonicsUtil::getSHB2(Vector3 const&, SphericalHarmonicsUtil::SHB2&) */

void SphericalHarmonicsUtil::getSHB2(Vector3 *param_1,SHB2 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 4);
  uVar2 = *(undefined4 *)param_1;
  *(undefined4 *)param_2 = 0x3f800000;
  *(undefined8 *)(param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  return;
}


