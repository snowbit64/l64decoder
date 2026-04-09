// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGrowthStateTime
// Entry Point: 00854e14
// Size: 28 bytes
// Signature: undefined __thiscall getGrowthStateTime(FieldCropsUpdater * this, uint param_1)


/* FieldCropsUpdater::getGrowthStateTime(unsigned int) const */

undefined4 __thiscall FieldCropsUpdater::getGrowthStateTime(FieldCropsUpdater *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x20) {
    uVar1 = *(undefined4 *)(this + (ulong)param_1 * 100 + 0x7c);
  }
  return uVar1;
}


