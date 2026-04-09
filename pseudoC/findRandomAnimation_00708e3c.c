// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findRandomAnimation
// Entry Point: 00708e3c
// Size: 596 bytes
// Signature: undefined __thiscall findRandomAnimation(AnimalAnimationSystemSource * this, uint param_1, uint * param_2)


/* AnimalAnimationSystemSource::findRandomAnimation(unsigned int, unsigned int&) */

undefined4 __thiscall
AnimalAnimationSystemSource::findRandomAnimation
          (AnimalAnimationSystemSource *this,uint param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  void *__dest;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  void *__src;
  undefined4 uVar6;
  undefined4 *puVar7;
  ulong __n;
  ulong uVar8;
  uint *puVar9;
  float fVar10;
  float fVar11;
  undefined4 *local_88;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar3 = *(uint *)(this + 0x308);
  if (uVar3 == 0) {
    uVar6 = 0;
    goto LAB_00709030;
  }
  fVar11 = 0.0;
  local_88 = (undefined4 *)0x0;
  uVar8 = 0;
  puVar7 = (undefined4 *)0x0;
  puVar9 = (uint *)(this + 0x348);
  __src = (void *)0x0;
  do {
    __dest = __src;
    if (*puVar9 == param_1) {
      if (local_88 == puVar7) {
        __n = (long)local_88 - (long)__src;
        uVar5 = ((long)__n >> 2) + 1;
        if (uVar5 >> 0x3e != 0) {
                    /* try { // try from 00709070 to 0070908b has its CatchHandler @ 007090a8 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar5 <= (ulong)((long)__n >> 1)) {
          uVar5 = (long)__n >> 1;
        }
        if (0x7ffffffffffffffb < __n) {
          uVar5 = 0x3fffffffffffffff;
        }
        if (uVar5 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00708f20 to 00708f23 has its CatchHandler @ 00709098 */
          __dest = operator_new(uVar5 << 2);
        }
        local_88 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
        *local_88 = (int)uVar8;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        puVar7 = (undefined4 *)((long)__dest + uVar5 * 4);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *local_88 = (int)uVar8;
      }
      local_88 = local_88 + 1;
      uVar3 = *(uint *)(this + 0x308);
      fVar11 = fVar11 + (float)puVar9[6];
    }
    uVar8 = uVar8 + 1;
    puVar9 = puVar9 + 0x1c;
    __src = __dest;
  } while (uVar8 < uVar3);
  uVar8 = (long)local_88 - (long)__dest;
  if (uVar8 == 0) {
    uVar6 = 0;
joined_r0x00708ff4:
    if (__dest == (void *)0x0) goto LAB_00709030;
  }
  else {
    if (0.0 < fVar11) {
                    /* try { // try from 00708f88 to 00708f93 has its CatchHandler @ 00709094 */
      fVar10 = (float)MathUtil::getRandomMinMax(0.0,fVar11);
      uVar5 = uVar8 >> 2 & 0xffffffff;
      *param_2 = *(uint *)((long)__dest + (uVar8 - 4));
      do {
        if ((int)uVar5 < 1) {
          uVar6 = 1;
          if (__dest != (void *)0x0) goto LAB_00709028;
          goto LAB_00709030;
        }
        uVar3 = *(uint *)((long)__dest + uVar5 * 4 + -4);
        uVar5 = uVar5 - 1;
        fVar11 = fVar11 - *(float *)(this + (ulong)uVar3 * 0x70 + 0x360);
      } while (fVar10 <= fVar11);
      uVar6 = 1;
      *param_2 = uVar3;
      goto joined_r0x00708ff4;
    }
                    /* try { // try from 00709004 to 0070900b has its CatchHandler @ 00709090 */
    iVar2 = MathUtil::getRandomMinMax(0,(int)(uVar8 >> 2) + -1);
    uVar6 = 1;
    *param_2 = *(uint *)((long)__dest + (long)iVar2 * 4);
  }
LAB_00709028:
  operator_delete(__dest);
LAB_00709030:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


