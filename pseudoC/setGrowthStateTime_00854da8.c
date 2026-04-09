// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGrowthStateTime
// Entry Point: 00854da8
// Size: 108 bytes
// Signature: undefined __thiscall setGrowthStateTime(FieldCropsUpdater * this, uint param_1, float param_2)


/* FieldCropsUpdater::setGrowthStateTime(unsigned int, float) */

void __thiscall
FieldCropsUpdater::setGrowthStateTime(FieldCropsUpdater *this,uint param_1,float param_2)

{
  ulong uVar1;
  float fVar2;
  
  if ((param_1 < 0x20) && (*(int *)(this + (ulong)param_1 * 100 + 0x60) != 0)) {
    uVar1 = (ulong)param_1;
    if (0.0 < param_2) {
      if (param_2 <= 0.0001) {
        param_2 = 0.0001;
      }
      fVar2 = *(float *)(this + uVar1 * 100 + 0x7c);
      *(float *)(this + uVar1 * 100 + 0x7c) = param_2;
      *(float *)(this + uVar1 * 100 + 0x74) =
           *(float *)(this + uVar1 * 100 + 0x74) * (param_2 / fVar2);
      return;
    }
    *(undefined4 *)(this + uVar1 * 100 + 0x74) = 0;
    *(undefined4 *)(this + uVar1 * 100 + 0x7c) = 0;
  }
  return;
}


