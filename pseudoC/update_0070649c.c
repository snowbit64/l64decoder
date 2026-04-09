// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0070649c
// Size: 880 bytes
// Signature: undefined __thiscall update(AnimalAnimationSystem * this, float param_1, bool param_2)


/* AnimalAnimationSystem::update(float, bool) */

void __thiscall
AnimalAnimationSystem::update(AnimalAnimationSystem *this,float param_1,bool param_2)

{
  int iVar1;
  CharacterSet **ppCVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((this[0x2d8] != (AnimalAnimationSystem)0x0) && (iVar1 = *(int *)(this + 0x2ac), iVar1 != -1))
  {
    if (this[0x2d9] == (AnimalAnimationSystem)0x0) {
      lVar3 = *(long *)this;
      if ((*(char *)(lVar3 + (long)iVar1 * 0x28 + 0x20) != '\0') ||
         ((*(int *)(this + 0x2a8) != -1 &&
          (*(char *)(lVar3 + (long)*(int *)(this + 0x2a8) * 0x28 + 0x20) != '\0')))) {
        fVar4 = *(float *)(*(long *)(this + 0x288) + (ulong)*(uint *)(this + 0x2b4) * 0x70 + 0x354);
        if ((0.0 < fVar4) && (0.01 < *(float *)(this + 0x2f4))) {
          fVar4 = (*(float *)(this + 0x2f4) *
                  *(float *)(*(long *)(this + 0x288) + (ulong)*(uint *)(this + 0x2b4) * 0x70 + 0x358
                            )) / fVar4;
          fVar6 = 0.5;
          if (0.0001 <= fVar4) {
            fVar5 = *(float *)(this + 0x2f8);
            fVar6 = fVar4;
            if (fVar5 <= fVar4) {
              fVar6 = fVar5;
            }
            fVar7 = -fVar4;
            if (-fVar4 <= fVar5) {
              fVar7 = fVar6;
            }
            *(float *)(this + 0x2f8) = fVar7;
            fVar6 = (float)NEON_fmadd(fVar7 / fVar4,0x3f000000,0x3f000000);
          }
          *(float *)(this + 0x2fc) = fVar6;
          fVar4 = (float)NEON_fmadd(fVar6 - *(float *)(this + 0x300),0x3dcccccd,
                                    *(float *)(this + 0x300));
          *(undefined8 *)(this + 0x32c) = *(undefined8 *)(this + 0x328);
          *(undefined8 *)(this + 0x324) = *(undefined8 *)(this + 800);
          *(float *)(this + 800) = fVar4;
          fVar4 = (fVar4 + 0.0 + *(float *)(this + 0x324) + *(float *)(this + 0x328) +
                   *(float *)(this + 0x32c) + *(float *)(this + 0x330)) / 5.0;
          *(float *)(this + 0x300) = fVar4;
          *(float *)(this + 0x304) = 1.0 - fVar4;
        }
      }
    }
    else {
      lVar3 = *(long *)this;
    }
    if (*(char *)(lVar3 + (long)iVar1 * 0x28 + 0x21) != '\0') {
      CharacterSet::getClip
                (*(CharacterSet **)(this + 0x298),
                 *(uint *)(*(long *)(this + 0x288) + (ulong)*(uint *)(this + 0x2b4) * 0x70 + 0x34c))
      ;
      fVar4 = (float)Clip::getDuration();
      fVar6 = *(float *)(*(long *)(this + 0x288) + (ulong)*(uint *)(this + 0x2b4) * 0x70 + 0x358);
      if (0.0 < fVar6) {
        ppCVar2 = *(CharacterSet ***)(this + 0x2b8);
        fVar6 = (*(float *)(this + 0x2f8) / param_1) /
                (fVar6 / (fVar4 * *(float *)(*(long *)(this + 0x288) +
                                             (ulong)*(uint *)(this + 0x2b4) * 0x70 + 0x35c)));
        fVar4 = -fVar6;
        if (0.0 <= *(float *)(this + 0x2f8)) {
          fVar4 = fVar6;
        }
        *(float *)((long)ppCVar2 + 0x2c) = fVar4;
        CharacterSet::setSpeedScale(*ppCVar2,*(uint *)(ppCVar2 + 1),fVar4);
      }
    }
    if (*(char *)(*(long *)this + (long)*(int *)(this + 0x2ac) * 0x28 + 0x20) != '\0') {
      CharacterSet::getClip
                (*(CharacterSet **)(this + 0x298),
                 *(uint *)(*(long *)(this + 0x288) + (ulong)*(uint *)(this + 0x2b4) * 0x70 + 0x34c))
      ;
      fVar4 = (float)Clip::getDuration();
      fVar6 = *(float *)(*(long *)(this + 0x288) + (ulong)*(uint *)(this + 0x2b4) * 0x70 + 0x354);
      if (0.0 < fVar6) {
        ppCVar2 = *(CharacterSet ***)(this + 0x2b8);
        fVar4 = (*(float *)(this + 0x2f4) / param_1) / (fVar6 / fVar4);
        *(float *)((long)ppCVar2 + 0x2c) = fVar4;
        CharacterSet::setSpeedScale(*ppCVar2,*(uint *)(ppCVar2 + 1),fVar4);
        ppCVar2 = *(CharacterSet ***)(this + 0x2c0);
        *(float *)((long)ppCVar2 + 0x2c) = fVar4;
        CharacterSet::setSpeedScale(*ppCVar2,*(uint *)(ppCVar2 + 1),fVar4);
      }
    }
    if ((*(int *)(this + 0x2a8) != -1) &&
       (*(char *)(*(long *)this + (long)*(int *)(this + 0x2a8) * 0x28 + 0x20) != '\0')) {
      CharacterSet::getClip
                (*(CharacterSet **)(this + 0x298),
                 *(uint *)(*(long *)(this + 0x288) + (ulong)*(uint *)(this + 0x2b0) * 0x70 + 0x34c))
      ;
      fVar4 = (float)Clip::getDuration();
      fVar6 = *(float *)(*(long *)(this + 0x288) + (ulong)*(uint *)(this + 0x2b0) * 0x70 + 0x354);
      if (0.0 < fVar6) {
        ppCVar2 = *(CharacterSet ***)(this + 0x2c8);
        fVar4 = (*(float *)(this + 0x2f4) / param_1) / (fVar6 / fVar4);
        *(float *)((long)ppCVar2 + 0x2c) = fVar4;
        CharacterSet::setSpeedScale(*ppCVar2,*(uint *)(ppCVar2 + 1),fVar4);
        ppCVar2 = *(CharacterSet ***)(this + 0x2d0);
        if (ppCVar2 != (CharacterSet **)0x0) {
          *(float *)((long)ppCVar2 + 0x2c) = fVar4;
          CharacterSet::setSpeedScale(*ppCVar2,*(uint *)(ppCVar2 + 1),fVar4);
        }
      }
    }
    updateClient(this,param_1,param_2);
    return;
  }
  return;
}


