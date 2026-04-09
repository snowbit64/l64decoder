// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextBuffer
// Entry Point: 008b5074
// Size: 552 bytes
// Signature: undefined __thiscall getNextBuffer(LoopSynthesisGenerator * this, uint param_1, float * param_2)


/* LoopSynthesisGenerator::getNextBuffer(unsigned int, float*) */

uint __thiscall
LoopSynthesisGenerator::getNextBuffer(LoopSynthesisGenerator *this,uint param_1,float *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long *this_00;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((this[0x5a] == (LoopSynthesisGenerator)0x0) && (param_1 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = param_1 - uVar5;
      if (0x3ff < uVar2) {
        uVar2 = 0x400;
      }
      uVar6 = (ulong)uVar2;
      if (this[0x58] == (LoopSynthesisGenerator)0x0) {
        if (this[0x59] == (LoopSynthesisGenerator)0x0) {
          getMotorSound(this,uVar2,param_2,*(float **)(this + 0x48));
          fVar7 = *(float *)(this + 0x6c);
          fVar8 = *(float *)(this + 0x70);
          if (fVar7 != fVar8) {
            fVar9 = (*(float *)(this + 0x74) * (float)uVar6) / 44100.0;
            fVar10 = fVar8 - fVar9;
            fVar9 = fVar8 + fVar9;
            if (fVar10 <= fVar7) {
              fVar10 = fVar7;
            }
            if (fVar7 <= fVar9) {
              fVar9 = fVar7;
            }
            if (fVar8 < fVar7) {
              fVar10 = fVar9;
            }
            *(float *)(this + 0x70) = fVar10;
          }
          fVar7 = *(float *)(this + 0x78);
          fVar8 = *(float *)(this + 0x7c);
          if (fVar8 != fVar7) {
            if (fVar8 <= fVar7) {
              fVar7 = fVar7 + -0.2;
              bVar1 = fVar8 < fVar7;
            }
            else {
              fVar7 = fVar7 + 0.2;
              bVar1 = fVar7 < fVar8;
            }
            if (!bVar1) {
              fVar7 = fVar8;
            }
            *(float *)(this + 0x78) = fVar7;
          }
        }
        else if (*(uint *)(*(StaticSoundGenerator **)(this + 0x30) + 0x10) < *(uint *)(this + 0x60))
        {
          uVar6 = generateFadedMotorStopSound(this,uVar2,param_2);
          uVar6 = uVar6 & 0xffffffff;
        }
        else {
          uVar3 = StaticSoundGenerator::getNextBuffer
                            (*(StaticSoundGenerator **)(this + 0x30),uVar2,param_2);
          uVar6 = (ulong)uVar3;
          if (uVar3 < uVar2) {
            if (*(StaticSoundGenerator **)(this + 0x28) != (StaticSoundGenerator *)0x0) {
              StaticSoundGenerator::reset(*(StaticSoundGenerator **)(this + 0x28),0);
            }
            if (*(StaticSoundGenerator **)(this + 0x30) != (StaticSoundGenerator *)0x0) {
              StaticSoundGenerator::reset(*(StaticSoundGenerator **)(this + 0x30),0);
            }
            *(undefined2 *)(this + 0x59) = 0x100;
            return uVar3 + uVar5;
          }
        }
      }
      else {
        this_00 = *(long **)(this + 0x28);
        iVar4 = *(int *)((long)this_00 + 0x14);
        *(undefined4 *)(this + 0x70) = *(undefined4 *)(this + 0x68);
        if (iVar4 == 0) {
          iVar4 = *(int *)(*this_00 + 0x30);
        }
        uVar3 = iVar4 - *(int *)(this + 0x5c);
        if ((*(int *)(this + 0x5c) == 0) || (*(uint *)(this_00 + 2) < uVar3)) {
          uVar3 = uVar3 - *(uint *)(this_00 + 2);
          if (uVar2 <= uVar3) {
            uVar3 = uVar2;
          }
          uVar2 = StaticSoundGenerator::getNextBuffer((StaticSoundGenerator *)this_00,uVar3,param_2)
          ;
        }
        else {
          uVar2 = generateFadedMotorStartSound(this,uVar2,param_2);
        }
        uVar6 = (ulong)uVar2;
        if (uVar2 == 0) {
          this[0x58] = (LoopSynthesisGenerator)0x0;
        }
      }
      param_2 = param_2 + uVar6;
      uVar5 = (int)uVar6 + uVar5;
    } while (uVar5 < param_1);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


