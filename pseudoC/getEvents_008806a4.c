// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEvents
// Entry Point: 008806a4
// Size: 304 bytes
// Signature: undefined __thiscall getEvents(AnimalSteering * this, vector * param_1)


/* AnimalSteering::getEvents(std::__ndk1::vector<AnimalSteering::SteeringEvent*,
   std::__ndk1::allocator<AnimalSteering::SteeringEvent*> >&) */

void __thiscall AnimalSteering::getEvents(AnimalSteering *this,vector *param_1)

{
  ulong uVar1;
  long *plVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  
  lVar3 = *(long *)(this + 0x98);
  if (*(long *)(this + 0xa0) != lVar3) {
    uVar6 = 0;
    do {
      lVar3 = lVar3 + uVar6 * 0x10;
      if (*(char *)(lVar3 + 0xc) == '\0') {
        plVar2 = *(long **)(param_1 + 8);
        if (plVar2 < *(long **)(param_1 + 0x10)) {
          *plVar2 = lVar3;
          *(long **)(param_1 + 8) = plVar2 + 1;
        }
        else {
          __src = *(void **)param_1;
          __n = (long)plVar2 - (long)__src;
          uVar1 = ((long)__n >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar4 = (long)*(long **)(param_1 + 0x10) - (long)__src;
          uVar5 = (long)uVar4 >> 2;
          if (uVar1 <= uVar5) {
            uVar1 = uVar5;
          }
          if (0x7ffffffffffffff7 < uVar4) {
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
          plVar2 = (long *)((long)__dest + ((long)__n >> 3) * 8);
          *plVar2 = lVar3;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)param_1 = __dest;
          *(long **)(param_1 + 8) = plVar2 + 1;
          *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar1 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
      }
      lVar3 = *(long *)(this + 0x98);
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(*(long *)(this + 0xa0) - lVar3 >> 4));
  }
  return;
}


