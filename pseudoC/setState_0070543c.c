// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setState
// Entry Point: 0070543c
// Size: 1320 bytes
// Signature: undefined __thiscall setState(AnimalAnimationSystem * this, uint param_1, uint param_2, bool param_3, float param_4)


/* AnimalAnimationSystem::setState(unsigned int, unsigned int, bool, float) */

float __thiscall
AnimalAnimationSystem::setState
          (AnimalAnimationSystem *this,uint param_1,uint param_2,bool param_3,float param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  CharacterSet **ppCVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  fVar15 = 0.0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (this[0x2d8] != (AnimalAnimationSystem)0x0) {
    lVar14 = *(long *)this;
    iVar7 = *(int *)(this + 0x2ac);
    *(int *)(this + 0x2a8) = iVar7;
    *(undefined4 *)(this + 0x2b0) = *(undefined4 *)(this + 0x2b4);
    if (*(long *)(this + 8) - lVar14 != 0) {
      uVar11 = 0;
      uVar12 = (*(long *)(this + 8) - lVar14 >> 3) * -0x3333333333333333;
      puVar1 = (uint *)(this + 0x2b4);
      do {
        iVar8 = (int)uVar11;
        if (*(uint *)(lVar14 + uVar11 * 0x28) == param_1) {
          *(int *)(this + 0x2ac) = iVar8;
          if (iVar8 == -1) goto LAB_007054e0;
          if (param_2 == 0xffffffff) {
            uVar11 = AnimalAnimationSystemSource::findRandomAnimation
                               (*(AnimalAnimationSystemSource **)(this + 0x288),
                                *(uint *)(lVar14 + (long)iVar8 * 0x28 + 4),puVar1);
            if ((uVar11 & 1) == 0) goto LAB_007054e0;
            iVar7 = *(int *)(this + 0x2a8);
          }
          else {
            *puVar1 = param_2;
          }
          fVar18 = 0.0;
          if (iVar7 == -1) {
            param_4 = 0.0;
            fVar16 = 0.0;
            fVar15 = 0.0;
          }
          else if (param_3) {
LAB_00705664:
            fVar18 = 0.0;
            fVar16 = 0.0;
            fVar15 = param_4;
          }
          else {
            uVar9 = *(uint *)(this + 0x2b0);
            fVar15 = param_4;
            fVar16 = 0.0;
            if (uVar9 != 0xffffffff) {
              ppCVar10 = *(CharacterSet ***)(this + 0x2b8);
              if (ppCVar10 == (CharacterSet **)0x0) {
                fVar15 = 0.0;
              }
              else {
                fVar15 = (float)CharacterSet::getTime(*ppCVar10,*(uint *)(ppCVar10 + 1));
                uVar9 = *(uint *)(this + 0x2b0);
              }
              iVar7 = AnimalAnimationSystemSource::findTransition
                                (*(AnimalAnimationSystemSource **)(this + 0x288),uVar9,
                                 *(uint *)(this + 0x2b4),fVar15);
              pfVar13 = *(float **)(this + 0x288);
              if (iVar7 == -1) {
                param_4 = *pfVar13;
                goto LAB_00705664;
              }
              lVar14 = (long)iVar7;
              if (pfVar13[(long)iVar7 * 0x18 + 0x45a] == -NAN) {
                fVar18 = 0.0;
                param_4 = pfVar13[lVar14 * 0x18 + 0x45d];
                fVar15 = param_4;
              }
              else {
                CharacterSet::getClip
                          (*(CharacterSet **)(this + 0x298),
                           (uint)pfVar13[(long)iVar7 * 0x18 + 0x45a]);
                fVar15 = (float)Clip::getDuration();
                param_4 = pfVar13[lVar14 * 0x18 + 0x45d];
                if (fVar15 < pfVar13[lVar14 * 0x18 + 0x45d]) {
                  param_4 = fVar15;
                }
                fVar18 = fVar15 - param_4;
                iVar8 = getFreeAnimationTrackId(this,(uint)pfVar13[(long)iVar7 * 0x18 + 0x45a]);
                AnimationTrack::setAnimation
                          ((AnimationTrack *)(this + (long)iVar8 * 0x68 + 0x18),
                           (uint)pfVar13[(long)iVar7 * 0x18 + 0x45a],0.0,false,1.0);
                *(float *)(this + (long)iVar8 * 0x68 + 0x24) = param_4;
                *(float *)(this + (long)iVar8 * 0x68 + 0x30) = param_4;
                this[(long)iVar8 * 0x68 + 0x2c] = (AnimalAnimationSystem)0x1;
                *(undefined4 *)(this + (long)iVar8 * 0x68 + 0x28) = 0x80000000;
                this[(long)iVar8 * 0x68 + 0x38] = (AnimalAnimationSystem)0x1;
                *(float *)(this + (long)iVar8 * 0x68 + 0x34) = -fVar18;
              }
              fVar16 = 0.0;
              if (0.0 <= pfVar13[lVar14 * 0x18 + 0x45c]) {
                fVar16 = pfVar13[lVar14 * 0x18 + 0x45c] - param_4;
              }
            }
          }
          ppCVar10 = *(CharacterSet ***)(this + 0x2b8);
          lVar14 = *(long *)(this + 0x2c0);
          *(CharacterSet ***)(this + 0x2c8) = ppCVar10;
          *(long *)(this + 0x2d0) = lVar14;
          if (ppCVar10 != (CharacterSet **)0x0) {
            *(float *)(ppCVar10 + 3) = param_4;
            *(undefined *)(ppCVar10 + 4) = 1;
            *(undefined4 *)((long)ppCVar10 + 0x1c) = 0x80000000;
            ppCVar10[0xb] = ppCVar10[10];
          }
          if (lVar14 != 0) {
            *(float *)(lVar14 + 0x18) = param_4;
            *(undefined *)(lVar14 + 0x20) = 1;
            *(undefined4 *)(lVar14 + 0x1c) = 0x80000000;
          }
          *(AnimationTrack **)(this + 0x2b8) = (AnimationTrack *)0x0;
          *(undefined8 *)(this + 0x2c0) = 0;
          if (*puVar1 != 0xffffffff) {
            lVar14 = *(long *)(this + 0x288) + (ulong)*puVar1 * 0x70;
            uVar9 = *(uint *)(lVar14 + 0x34c);
            uVar2 = *(uint *)(lVar14 + 0x350);
            if (uVar9 != 0xffffffff) {
              if (((*(char *)(*(long *)this + (long)*(int *)(this + 0x2ac) * 0x28 + 0x20) != '\0')
                  && (*(int *)(this + 0x2a8) != -1)) &&
                 (*(char *)(*(long *)this + (long)*(int *)(this + 0x2a8) * 0x28 + 0x20) != '\0')) {
                fVar16 = (float)CharacterSet::getTime(*ppCVar10,*(uint *)(ppCVar10 + 1));
                fVar17 = (float)CharacterSet::getDuration((uint)**(undefined8 **)(this + 0x2c8));
                fVar16 = modff(fVar16 / fVar17,(float *)&local_90);
                CharacterSet::getClip(*(CharacterSet **)(this + 0x298),uVar9);
                fVar17 = (float)Clip::getDuration();
                fVar16 = fVar16 * fVar17;
              }
              iVar7 = getFreeAnimationTrackId(this,uVar9);
              *(AnimationTrack **)(this + 0x2b8) =
                   (AnimationTrack *)(this + (long)iVar7 * 0x68 + 0x18);
              AnimationTrack::setAnimation
                        ((AnimationTrack *)(this + (long)iVar7 * 0x68 + 0x18),uVar9,fVar16,true,1.0)
              ;
              lVar14 = *(long *)(this + 0x2b8);
              *(undefined *)(lVar14 + 0x14) = 1;
              *(float *)(lVar14 + 0xc) = param_4;
              *(float *)(lVar14 + 0x10) = -fVar18;
              if (*(char *)(*(long *)this + (long)*(int *)(this + 0x2ac) * 0x28 + 0x20) != '\0') {
                *(AnimalAnimationSystem **)(lVar14 + 0x38) = this + 0x300;
              }
              local_90 = (void *)0x0;
              local_88 = (void *)0x0;
              local_80 = 0;
                    /* try { // try from 00705810 to 00705823 has its CatchHandler @ 00705964 */
              AnimalAnimationSystemSource::findSoundTriggers
                        (*(AnimalAnimationSystemSource **)(this + 0x288),*(uint *)(this + 0x2b4),
                         (vector *)&local_90);
              AnimationTrack::setTriggers(*(AnimationTrack **)(this + 0x2b8),(vector *)&local_90);
              pvVar5 = local_90;
              pvVar6 = local_88;
              if (local_90 != (void *)0x0) {
                while (pvVar4 = pvVar6, pvVar4 != pvVar5) {
                  pvVar6 = (void *)((long)pvVar4 + -0x28);
                  if ((*(byte *)((long)pvVar4 + -0x20) & 1) != 0) {
                    operator_delete(*(void **)((long)pvVar4 + -0x10));
                  }
                }
                local_88 = pvVar5;
                operator_delete(local_90);
              }
            }
            if (uVar2 != 0xffffffff) {
              if (((*(char *)(*(long *)this + (long)*(int *)(this + 0x2ac) * 0x28 + 0x20) != '\0')
                  && (*(int *)(this + 0x2a8) != -1)) &&
                 (*(char *)(*(long *)this + (long)*(int *)(this + 0x2a8) * 0x28 + 0x20) != '\0')) {
                fVar16 = (float)CharacterSet::getTime
                                          (**(CharacterSet ***)(this + 0x2c8),
                                           *(uint *)(*(CharacterSet ***)(this + 0x2c8) + 1));
                fVar17 = (float)CharacterSet::getDuration((uint)**(undefined8 **)(this + 0x2c8));
                fVar16 = modff(fVar16 / fVar17,(float *)&local_90);
                CharacterSet::getClip(*(CharacterSet **)(this + 0x298),uVar9);
                fVar17 = (float)Clip::getDuration();
                fVar16 = fVar16 * fVar17;
              }
              iVar7 = getFreeAnimationTrackId(this,uVar2);
              *(AnimationTrack **)(this + 0x2c0) =
                   (AnimationTrack *)(this + (long)iVar7 * 0x68 + 0x18);
              AnimationTrack::setAnimation
                        ((AnimationTrack *)(this + (long)iVar7 * 0x68 + 0x18),uVar2,fVar16,true,1.0)
              ;
              lVar14 = *(long *)(this + 0x2c0);
              *(undefined *)(lVar14 + 0x14) = 1;
              *(float *)(lVar14 + 0xc) = param_4;
              *(float *)(lVar14 + 0x10) = -fVar18;
              if (*(char *)(*(long *)this + (long)*(int *)(this + 0x2ac) * 0x28 + 0x20) != '\0') {
                *(AnimalAnimationSystem **)(lVar14 + 0x38) = this + 0x304;
              }
            }
          }
          goto LAB_007054e0;
        }
        uVar11 = (ulong)(iVar8 + 1);
      } while (uVar11 <= uVar12 && uVar12 - uVar11 != 0);
    }
    *(undefined4 *)(this + 0x2ac) = 0xffffffff;
  }
LAB_007054e0:
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar15;
}


