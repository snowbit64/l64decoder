// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGrowthNextState
// Entry Point: 00855204
// Size: 40 bytes
// Signature: undefined __thiscall getGrowthNextState(FieldCropsUpdater * this, uint param_1, uint param_2)


/* FieldCropsUpdater::getGrowthNextState(unsigned int, unsigned int) */

uint __thiscall
FieldCropsUpdater::getGrowthNextState(FieldCropsUpdater *this,uint param_1,uint param_2)

{
  if ((param_1 < 0x20) && (param_2 < 0x40)) {
    param_2 = (uint)(byte)this[(ulong)param_2 + (ulong)param_1 * 100 + 0x80];
  }
  return param_2;
}


