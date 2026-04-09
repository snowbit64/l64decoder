// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00877f74
// Size: 532 bytes
// Signature: undefined __thiscall __append(vector<AnimalAnimationSystemSource,std::__ndk1::allocator<AnimalAnimationSystemSource>> * this, ulong param_1)


/* std::__ndk1::vector<AnimalAnimationSystemSource,
   std::__ndk1::allocator<AnimalAnimationSystemSource> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<AnimalAnimationSystemSource,std::__ndk1::allocator<AnimalAnimationSystemSource>>
::__append(vector<AnimalAnimationSystemSource,std::__ndk1::allocator<AnimalAnimationSystemSource>>
           *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  AnimalAnimationSystemSource *pAVar8;
  AnimalAnimationSystemSource *this_00;
  AnimalAnimationSystemSource *this_01;
  AnimalAnimationSystemSource *pAVar9;
  AnimalAnimationSystemSource *pAVar10;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pAVar8 = *(AnimalAnimationSystemSource **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pAVar8 >> 5) * 0xa7868b41708e659) < param_1) {
    lVar6 = (long)pAVar8 - *(long *)this >> 5;
    uVar1 = lVar6 * 0xa7868b41708e659 + param_1;
    if (0x43029e1a2d05c < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 5;
    uVar7 = lVar5 * 0x14f0d1682e11ccb2;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x21814f0d1682d < (ulong)(lVar5 * 0xa7868b41708e659)) {
      uVar1 = 0x43029e1a2d05c;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x43029e1a2d05c < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x3d20);
    }
    this_00 = (AnimalAnimationSystemSource *)((long)pvVar3 + lVar6 * 0x20);
    lVar6 = param_1 * 0x3d20;
    pAVar8 = this_00 + lVar6;
    pAVar9 = this_00;
    do {
                    /* try { // try from 008780c0 to 008780c7 has its CatchHandler @ 00878190 */
      AnimalAnimationSystemSource::AnimalAnimationSystemSource(pAVar9);
      pAVar9 = pAVar9 + 0x3d20;
      lVar6 = lVar6 + -0x3d20;
    } while (lVar6 != 0);
    this_01 = *(AnimalAnimationSystemSource **)this;
    pAVar9 = *(AnimalAnimationSystemSource **)(this + 8);
    pAVar10 = this_01;
    if (pAVar9 != this_01) {
      do {
        this_00 = this_00 + -0x3d20;
        pAVar9 = pAVar9 + -0x3d20;
        AnimalAnimationSystemSource::AnimalAnimationSystemSource(this_00,pAVar9);
      } while (pAVar9 != this_01);
      this_01 = *(AnimalAnimationSystemSource **)(this + 8);
      pAVar10 = *(AnimalAnimationSystemSource **)this;
    }
    *(AnimalAnimationSystemSource **)this = this_00;
    *(AnimalAnimationSystemSource **)(this + 8) = pAVar8;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x3d20);
    while (this_01 != pAVar10) {
      this_01 = this_01 + -0x3d20;
      AnimalAnimationSystemSource::~AnimalAnimationSystemSource(this_01);
    }
    if (pAVar10 != (AnimalAnimationSystemSource *)0x0) {
      operator_delete(pAVar10);
    }
  }
  else {
    pAVar9 = pAVar8;
    if (param_1 != 0) {
      pAVar9 = pAVar8 + param_1 * 0x3d20;
      lVar6 = param_1 * 0x3d20;
      do {
                    /* try { // try from 00878078 to 0087807f has its CatchHandler @ 00878188 */
        AnimalAnimationSystemSource::AnimalAnimationSystemSource(pAVar8);
        pAVar8 = pAVar8 + 0x3d20;
        lVar6 = lVar6 + -0x3d20;
      } while (lVar6 != 0);
    }
    *(AnimalAnimationSystemSource **)(this + 8) = pAVar9;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


