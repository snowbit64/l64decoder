// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00b012d0
// Size: 484 bytes
// Signature: undefined __thiscall __append(vector<ProfiledSection,std::__ndk1::allocator<ProfiledSection>> * this, ulong param_1)


/* std::__ndk1::vector<ProfiledSection, std::__ndk1::allocator<ProfiledSection> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::vector<ProfiledSection,std::__ndk1::allocator<ProfiledSection>>::__append
          (vector<ProfiledSection,std::__ndk1::allocator<ProfiledSection>> *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ProfiledSection *__dest;
  ProfiledSection *pPVar8;
  ProfiledSection *pPVar9;
  ProfiledSection *__src;
  ProfiledSection *pPVar10;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pPVar8 = *(ProfiledSection **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pPVar8 >> 6) * -0x3333333333333333) < param_1) {
    lVar6 = (long)pPVar8 - *(long *)this >> 6;
    uVar1 = lVar6 * -0x3333333333333333 + param_1;
    if (0xcccccccccccccc < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 6;
    uVar7 = lVar5 * -0x6666666666666666;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x66666666666665 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar1 = 0xcccccccccccccc;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0xcccccccccccccc < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x140);
    }
    __dest = (ProfiledSection *)((long)pvVar3 + lVar6 * 0x40);
    lVar6 = param_1 * 0x140;
    pPVar9 = __dest + lVar6;
    pPVar8 = __dest;
    do {
                    /* try { // try from 00b013f4 to 00b013fb has its CatchHandler @ 00b014bc */
      ProfiledSection::ProfiledSection(pPVar8);
      pPVar8 = pPVar8 + 0x140;
      lVar6 = lVar6 + -0x140;
    } while (lVar6 != 0);
    pPVar8 = *(ProfiledSection **)this;
    __src = *(ProfiledSection **)(this + 8);
    pPVar10 = pPVar8;
    if (__src != pPVar8) {
      do {
        __dest = __dest + -0x140;
        __src = __src + -0x140;
        memcpy(__dest,__src,0x140);
      } while (__src != pPVar8);
      pPVar8 = *(ProfiledSection **)(this + 8);
      pPVar10 = *(ProfiledSection **)this;
    }
    *(ProfiledSection **)this = __dest;
    *(ProfiledSection **)(this + 8) = pPVar9;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x140);
    while (pPVar8 != pPVar10) {
      pPVar8 = pPVar8 + -0x140;
      ProfiledSection::~ProfiledSection(pPVar8);
    }
    if (pPVar10 != (ProfiledSection *)0x0) {
      operator_delete(pPVar10);
    }
  }
  else {
    pPVar9 = pPVar8;
    if (param_1 != 0) {
      pPVar9 = pPVar8 + param_1 * 0x140;
      lVar6 = param_1 * 0x140;
      do {
                    /* try { // try from 00b013ac to 00b013b3 has its CatchHandler @ 00b014b4 */
        ProfiledSection::ProfiledSection(pPVar8);
        pPVar8 = pPVar8 + 0x140;
        lVar6 = lVar6 + -0x140;
      } while (lVar6 != 0);
    }
    *(ProfiledSection **)(this + 8) = pPVar9;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


