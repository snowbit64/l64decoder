// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTriggers
// Entry Point: 007048fc
// Size: 472 bytes
// Signature: undefined __thiscall setTriggers(AnimationTrack * this, vector * param_1)


/* AnimalAnimationSystem::AnimationTrack::setTriggers(std::__ndk1::vector<AnimalAnimationSystemSource::Trigger,
   std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger> > const&) */

void __thiscall
AnimalAnimationSystem::AnimationTrack::setTriggers(AnimationTrack *this,vector *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *__dest;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  void *__src;
  ulong __n;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  
  lVar6 = *(long *)param_1;
  lVar1 = *(long *)(param_1 + 8);
  puVar4 = *(undefined4 **)(this + 0x50);
  *(undefined4 **)(this + 0x58) = puVar4;
  if (lVar1 != lVar6) {
    uVar7 = 0;
    while( true ) {
      lVar6 = lVar6 + uVar7 * 0x28;
      uVar2 = *(undefined4 *)(lVar6 + 4);
      uVar3 = *(undefined4 *)(lVar6 + 0x20);
      uVar9 = *(undefined4 *)(lVar6 + 0x24);
      if (puVar4 == *(undefined4 **)(this + 0x60)) {
        __src = *(void **)(this + 0x50);
        __n = (long)puVar4 - (long)__src;
        uVar5 = ((long)__n >> 4) + 1;
        if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar5 <= (ulong)((long)__n >> 3)) {
          uVar5 = (long)__n >> 3;
        }
        if (0x7fffffffffffffef < __n) {
          uVar5 = 0xfffffffffffffff;
        }
        if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar5 * 0x10);
        puVar4 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
        *puVar4 = uVar2;
        puVar4[1] = uVar3;
        puVar4[2] = uVar9;
        *(undefined *)(puVar4 + 3) = 0;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)(this + 0x60) = (void *)((long)__dest + uVar5 * 0x10);
        *(void **)(this + 0x50) = __dest;
        *(undefined4 **)(this + 0x58) = puVar4 + 4;
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *puVar4 = uVar2;
        puVar4[1] = uVar3;
        puVar4[2] = uVar9;
        *(undefined *)(puVar4 + 3) = 0;
        *(undefined4 **)(this + 0x58) = puVar4 + 4;
      }
      lVar6 = *(long *)param_1;
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar5 = (*(long *)(param_1 + 8) - lVar6 >> 3) * -0x3333333333333333;
      if (uVar5 < uVar7 || uVar5 - uVar7 == 0) break;
      puVar4 = *(undefined4 **)(this + 0x58);
    }
  }
  if (*(uint *)(this + 8) != 0xffffffff) {
    *(undefined4 *)(this + 0x48) = 0;
    fVar8 = (float)CharacterSet::getTime(*(CharacterSet **)this,*(uint *)(this + 8));
    lVar6 = *(long *)(this + 0x58) - *(long *)(this + 0x50);
    if (lVar6 != 0) {
      uVar7 = 0;
      do {
        if (fVar8 / *(float *)(this + 0x30) < *(float *)(*(long *)(this + 0x50) + uVar7 * 0x10 + 8))
        {
          *(int *)(this + 0x48) = (int)uVar7;
          return;
        }
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 < (ulong)(lVar6 >> 4));
    }
  }
  return;
}


