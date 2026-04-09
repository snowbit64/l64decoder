// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomMinMax
// Entry Point: 00b57698
// Size: 116 bytes
// Signature: undefined __cdecl getRandomMinMax(float param_1, float param_2)


/* MathUtil::getRandomMinMax(float, float) */

undefined4 MathUtil::getRandomMinMax(float param_1,float param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  pbVar1 = (byte *)__emutls_get_address(&DAT_01045218);
  if ((*pbVar1 & 1) == 0) {
    __emutls_get_address(&DAT_010451f8);
    PCGRand::seedFromWatch();
    puVar2 = (undefined *)__emutls_get_address(&DAT_01045218);
    *puVar2 = 1;
  }
  __emutls_get_address(&DAT_010451f8);
  uVar3 = PCGRand::getRandomFloatExclusive();
  uVar3 = NEON_fmadd(param_2 - param_1,uVar3,param_1);
  return uVar3;
}


