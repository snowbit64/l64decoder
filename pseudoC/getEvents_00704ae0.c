// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEvents
// Entry Point: 00704ae0
// Size: 320 bytes
// Signature: undefined __thiscall getEvents(AnimationTrack * this, vector * param_1)


/* AnimalAnimationSystem::AnimationTrack::getEvents(std::__ndk1::vector<AnimalAnimationSystem::AnimationEvent,
   std::__ndk1::allocator<AnimalAnimationSystem::AnimationEvent> >&) */

void __thiscall
AnimalAnimationSystem::AnimationTrack::getEvents(AnimationTrack *this,vector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__dest;
  long lVar6;
  void *__src;
  ulong __n;
  ulong uVar7;
  
  lVar6 = *(long *)(this + 0x50);
  if (*(long *)(this + 0x58) != lVar6) {
    uVar7 = 0;
    do {
      puVar2 = (undefined8 *)(lVar6 + uVar7 * 0x10);
      if (*(char *)((long)puVar2 + 0xc) != '\0') {
        puVar3 = *(undefined8 **)(param_1 + 8);
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        *(char *)((long)puVar2 + 0xc) = '\0';
        uVar5 = *puVar2;
        if (puVar3 == puVar4) {
          __src = *(void **)param_1;
          __n = (long)puVar3 - (long)__src;
          uVar1 = ((long)__n >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)__n >> 2)) {
            uVar1 = (long)__n >> 2;
          }
          if (0x7ffffffffffffff7 < __n) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar1 << 3);
          }
          puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
          *puVar2 = uVar5;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)param_1 = __dest;
          *(undefined8 **)(param_1 + 8) = puVar2 + 1;
          *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar1 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *puVar3 = *puVar2;
          *(undefined8 **)(param_1 + 8) = puVar3 + 1;
        }
      }
      lVar6 = *(long *)(this + 0x50);
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(*(long *)(this + 0x58) - lVar6 >> 4));
  }
  return;
}


