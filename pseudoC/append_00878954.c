// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00878954
// Size: 528 bytes
// Signature: undefined __thiscall __append(vector<AnimalSoundSystem,std::__ndk1::allocator<AnimalSoundSystem>> * this, ulong param_1)


/* std::__ndk1::vector<AnimalSoundSystem, std::__ndk1::allocator<AnimalSoundSystem>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<AnimalSoundSystem,std::__ndk1::allocator<AnimalSoundSystem>>::__append
          (vector<AnimalSoundSystem,std::__ndk1::allocator<AnimalSoundSystem>> *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  AnimalSoundSystem *pAVar8;
  AnimalSoundSystem *pAVar9;
  AnimalSoundSystem *pAVar10;
  AnimalSoundSystem *this_00;
  AnimalSoundSystem *pAVar11;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pAVar8 = *(AnimalSoundSystem **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pAVar8 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_1) {
    lVar6 = (long)pAVar8 - *(long *)this >> 3;
    uVar1 = lVar6 * 0x2e8ba2e8ba2e8ba3 + param_1;
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar7 = lVar5 * 0x5d1745d1745d1746;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x1745d1745d1745c < (ulong)(lVar5 * 0x2e8ba2e8ba2e8ba3)) {
      uVar1 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x58);
    }
    pAVar10 = (AnimalSoundSystem *)((long)pvVar3 + lVar6 * 8);
    lVar6 = param_1 * 0x58;
    pAVar9 = pAVar10 + lVar6;
    pAVar8 = pAVar10;
    do {
                    /* try { // try from 00878a98 to 00878a9f has its CatchHandler @ 00878b74 */
      AnimalSoundSystem::AnimalSoundSystem(pAVar8);
      pAVar8 = pAVar8 + 0x58;
      lVar6 = lVar6 + -0x58;
    } while (lVar6 != 0);
    pAVar8 = *(AnimalSoundSystem **)this;
    pAVar11 = *(AnimalSoundSystem **)(this + 8);
    this_00 = pAVar8;
    if (pAVar11 != pAVar8) {
      do {
        pAVar10 = pAVar10 + -0x58;
        pAVar11 = pAVar11 + -0x58;
                    /* try { // try from 00878ac4 to 00878ad3 has its CatchHandler @ 00878b64 */
        allocator<AnimalSoundSystem>::construct<AnimalSoundSystem,AnimalSoundSystem_const&>
                  ((allocator<AnimalSoundSystem> *)(this + 0x10),pAVar10,pAVar11);
      } while (pAVar11 != pAVar8);
      pAVar8 = *(AnimalSoundSystem **)this;
      this_00 = *(AnimalSoundSystem **)(this + 8);
    }
    *(AnimalSoundSystem **)this = pAVar10;
    *(AnimalSoundSystem **)(this + 8) = pAVar9;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x58);
    while (this_00 != pAVar8) {
      this_00 = this_00 + -0x58;
      AnimalSoundSystem::~AnimalSoundSystem(this_00);
    }
    if (pAVar8 != (AnimalSoundSystem *)0x0) {
      operator_delete(pAVar8);
    }
  }
  else {
    pAVar9 = pAVar8;
    if (param_1 != 0) {
      pAVar9 = pAVar8 + param_1 * 0x58;
      lVar6 = param_1 * 0x58;
      do {
                    /* try { // try from 00878a54 to 00878a5b has its CatchHandler @ 00878b6c */
        AnimalSoundSystem::AnimalSoundSystem(pAVar8);
        pAVar8 = pAVar8 + 0x58;
        lVar6 = lVar6 + -0x58;
      } while (lVar6 != 0);
    }
    *(AnimalSoundSystem **)(this + 8) = pAVar9;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


