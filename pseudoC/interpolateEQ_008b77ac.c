// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: interpolateEQ
// Entry Point: 008b77ac
// Size: 332 bytes
// Signature: undefined __thiscall interpolateEQ(LoadSoundSimulation * this, float param_1, uint param_2, uint param_3, vector * param_4)


/* LoadSoundSimulation::interpolateEQ(float, unsigned int, unsigned int,
   std::__ndk1::vector<BiquadResonantFilter::Settings,
   std::__ndk1::allocator<BiquadResonantFilter::Settings> >&) const */

void __thiscall
LoadSoundSimulation::interpolateEQ
          (LoadSoundSimulation *this,float param_1,uint param_2,uint param_3,vector *param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  lVar10 = *(long *)this;
  lVar8 = *(long *)(lVar10 + 0x48) + (ulong)param_2 * 0x40;
  lVar9 = *(long *)(lVar10 + 0x48) + (ulong)param_3 * 0x40;
  uVar5 = (int)(*(long *)(lVar8 + 0x18) - *(long *)(lVar8 + 0x10) >> 2) * -0x55555555;
  lVar8 = (*(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10) >> 2) * -0x5555555555555555;
  uVar7 = (uint)lVar8;
  lVar9 = *(long *)(param_4 + 8) - *(long *)param_4 >> 2;
  if ((int)uVar5 <= (int)uVar7) {
    uVar7 = uVar5;
  }
  if (lVar8 - (int)uVar5 != 0) {
    uVar5 = uVar7;
  }
  uVar6 = lVar9 * -0x5555555555555555;
  uVar11 = (ulong)(int)uVar5;
  if (uVar11 <= uVar6) {
    if (uVar11 <= uVar6 && uVar6 - uVar11 != 0) {
      *(ulong *)(param_4 + 8) = *(long *)param_4 + uVar11 * 0xc;
    }
  }
  else {
    std::__ndk1::
    vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>::
    __append((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
              *)param_4,uVar11 + lVar9 * 0x5555555555555555);
  }
  if (0 < (int)uVar5) {
    lVar8 = 0;
    lVar9 = (ulong)param_2 * 0x40;
    do {
      pfVar1 = (float *)(*(long *)(lVar10 + 0x48) + lVar9);
      pfVar2 = (float *)(*(long *)(lVar10 + 0x48) + (ulong)param_3 * 0x40);
      uVar12 = AudioMathUtil::lerpTwoPoints
                         (param_1,*pfVar1,*pfVar2,*(float *)(*(long *)(pfVar1 + 4) + lVar8 + 4),
                          *(float *)(*(long *)(pfVar2 + 4) + lVar8 + 4));
      puVar3 = (undefined4 *)(*(long *)param_4 + lVar8);
      puVar4 = (undefined4 *)(*(long *)(*(long *)(lVar10 + 0x48) + lVar9 + 0x10) + lVar8);
      lVar8 = lVar8 + 0xc;
      uVar13 = *puVar4;
      uVar14 = puVar4[2];
      puVar3[1] = uVar12;
      *puVar3 = uVar13;
      puVar3[2] = uVar14;
    } while (((ulong)uVar5 + (ulong)uVar5 * 2) * 4 - lVar8 != 0);
  }
  return;
}


