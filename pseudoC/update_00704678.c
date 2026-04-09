// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00704678
// Size: 592 bytes
// Signature: undefined __thiscall update(AnimationTrack * this, float param_1)


/* AnimalAnimationSystem::AnimationTrack::update(float) */

void __thiscall AnimalAnimationSystem::AnimationTrack::update(AnimationTrack *this,float param_1)

{
  long lVar1;
  uint uVar2;
  AnimationTrack AVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  AVar3 = this[0x14];
  if (AVar3 != (AnimationTrack)0x0) {
    fVar8 = *(float *)(this + 0xc);
    fVar9 = *(float *)(this + 0x10) + param_1;
    *(float *)(this + 0x10) = fVar9;
    if (0.0 < fVar9 && fVar9 < fVar8) {
      *(float *)(this + 0x24) = fVar9 / fVar8;
    }
    AVar3 = (AnimationTrack)(fVar9 <= fVar8);
    if (!(bool)AVar3) {
      this[0x14] = (AnimationTrack)0x0;
      *(undefined4 *)(this + 0x24) = 0x3f800000;
    }
    this[0x42] = (AnimationTrack)0x1;
  }
  if (this[0x20] != (AnimationTrack)0x0) {
    fVar8 = *(float *)(this + 0x18);
    fVar9 = *(float *)(this + 0x1c) + param_1;
    *(float *)(this + 0x1c) = fVar9;
    if (0.0 < fVar9 && fVar9 < fVar8) {
      fVar10 = 1.0 - fVar9 / fVar8;
      if (*(float *)(this + 0x24) <= fVar10 && AVar3 != (AnimationTrack)0x0) {
        fVar10 = *(float *)(this + 0x24);
      }
      *(float *)(this + 0x24) = fVar10;
    }
    if (fVar8 < fVar9) {
      *(undefined4 *)(this + 0x24) = 0;
      this[0x20] = (AnimationTrack)0x0;
      if (*(uint *)(this + 8) != 0xffffffff) {
        this[0x41] = (AnimationTrack)0x0;
        CharacterSet::clearClip(*(CharacterSet **)this,*(uint *)(this + 8));
        CharacterSet::disable(*(CharacterSet **)this,*(uint *)(this + 8));
      }
    }
    this[0x42] = (AnimationTrack)0x1;
  }
  if (*(long *)(this + 0x50) == *(long *)(this + 0x58)) goto LAB_00704830;
  fVar8 = (float)CharacterSet::getTime(*(CharacterSet **)this,*(uint *)(this + 8));
  fVar8 = modff(fVar8 / *(float *)(this + 0x30),&fStack_3c);
  fVar9 = *(float *)(this + 0x44);
  if (fVar9 <= fVar8) {
    lVar5 = *(long *)(this + 0x50);
    uVar7 = (ulong)*(uint *)(this + 0x48);
    uVar6 = *(long *)(this + 0x58) - lVar5 >> 4;
    if (uVar7 < uVar6) goto LAB_00704808;
  }
  else {
    lVar5 = *(long *)(this + 0x50);
    uVar2 = *(uint *)(this + 0x48);
    uVar6 = *(long *)(this + 0x58) - lVar5 >> 4;
    while ((uVar2 < uVar6 && (lVar1 = lVar5 + (ulong)uVar2 * 0x10, *(float *)(lVar1 + 8) < fVar9)))
    {
      uVar2 = uVar2 + 1;
      *(undefined *)(lVar1 + 0xc) = 1;
    }
    uVar7 = 0;
    *(undefined4 *)(this + 0x48) = 0;
    if (uVar6 != 0) {
LAB_00704808:
      do {
        lVar1 = lVar5 + uVar7 * 0x10;
        if (fVar8 <= *(float *)(lVar1 + 8)) break;
        uVar2 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar2;
        *(undefined *)(lVar1 + 0xc) = 1;
        *(uint *)(this + 0x48) = uVar2;
      } while (uVar7 < uVar6);
    }
  }
  *(float *)(this + 0x44) = fVar8;
LAB_00704830:
  fVar8 = *(float *)(this + 0x28) + param_1;
  *(float *)(this + 0x28) = fVar8;
  if (*(float *)(this + 0x30) < fVar8) {
    if (this[0x40] == (AnimationTrack)0x0) {
      if (*(uint *)(this + 8) != 0xffffffff) {
        this[0x41] = (AnimationTrack)0x0;
        CharacterSet::clearClip(*(CharacterSet **)this,*(uint *)(this + 8));
        CharacterSet::disable(*(CharacterSet **)this,*(uint *)(this + 8));
      }
    }
    else {
      *(float *)(this + 0x28) = fVar8 - *(float *)(this + 0x30);
    }
  }
  fVar8 = *(float *)(this + 0x24);
  if (*(float **)(this + 0x38) != (float *)0x0) {
    fVar8 = fVar8 * **(float **)(this + 0x38);
  }
  CharacterSet::setBlendWeight(*(CharacterSet **)this,*(uint *)(this + 8),fVar8);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


