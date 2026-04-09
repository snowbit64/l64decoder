// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008783fc
// Size: 512 bytes
// Signature: undefined __thiscall __append(vector<AnimalAnimationSystem,std::__ndk1::allocator<AnimalAnimationSystem>> * this, ulong param_1)


/* std::__ndk1::vector<AnimalAnimationSystem, std::__ndk1::allocator<AnimalAnimationSystem>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<AnimalAnimationSystem,std::__ndk1::allocator<AnimalAnimationSystem>>::__append
          (vector<AnimalAnimationSystem,std::__ndk1::allocator<AnimalAnimationSystem>> *this,
          ulong param_1)

{
  allocator *paVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  AnimalAnimationSystem *pAVar8;
  AnimalAnimationSystem *pAVar9;
  AnimalAnimationSystem *local_78;
  AnimalAnimationSystem *pAStack_70;
  void *local_68;
  allocator *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pAVar9 = *(AnimalAnimationSystem **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pAVar9 >> 3) * -0x254813e22cbce4a9) < param_1) {
    lVar5 = (long)pAVar9 - *(long *)this >> 3;
    uVar2 = lVar5 * -0x254813e22cbce4a9 + param_1;
    if (0x4f88b2f392a409 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(long *)(this + 0x10) - *(long *)this >> 3;
    paVar1 = (allocator *)(this + 0x10);
    uVar7 = lVar4 * -0x4a9027c45979c952;
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (0x27c45979c95203 < (ulong)(lVar4 * -0x254813e22cbce4a9)) {
      uVar2 = 0x4f88b2f392a409;
    }
    local_60 = paVar1;
    if (uVar2 == 0) {
      local_68 = (void *)0x0;
    }
    else {
      if (0x4f88b2f392a409 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_68 = operator_new(uVar2 * 0x338);
    }
    pAVar9 = (AnimalAnimationSystem *)((long)local_68 + lVar5 * 8);
    lVar5 = param_1 * 0x338;
    local_68 = (void *)((long)local_68 + uVar2 * 0x338);
    pAVar8 = pAVar9 + lVar5;
    local_78 = pAVar9;
    pAStack_70 = pAVar9;
    do {
                    /* try { // try from 00878540 to 00878547 has its CatchHandler @ 0087860c */
      AnimalAnimationSystem::AnimalAnimationSystem(pAVar9);
      pAVar9 = pAVar9 + 0x338;
      lVar5 = lVar5 + -0x338;
    } while (lVar5 != 0);
    pAStack_70 = pAVar8;
                    /* try { // try from 0087855c to 00878567 has its CatchHandler @ 008785fc */
    allocator_traits<std::__ndk1::allocator<AnimalAnimationSystem>>::
    __construct_backward_with_exception_guarantees<AnimalAnimationSystem*>
              (paVar1,*(AnimalAnimationSystem **)this,*(AnimalAnimationSystem **)(this + 8),
               &local_78);
    pAVar9 = *(AnimalAnimationSystem **)this;
    pAVar8 = *(AnimalAnimationSystem **)(this + 8);
    uVar6 = *(undefined8 *)(this + 0x10);
    *(AnimalAnimationSystem **)(this + 8) = pAStack_70;
    *(AnimalAnimationSystem **)this = local_78;
    *(void **)(this + 0x10) = local_68;
    local_78 = pAVar9;
    pAStack_70 = pAVar8;
    local_68 = (void *)uVar6;
    while (pAStack_70 != pAVar9) {
      pAStack_70 = pAStack_70 + -0x338;
      AnimalAnimationSystem::~AnimalAnimationSystem(pAStack_70);
    }
    if (pAVar9 != (AnimalAnimationSystem *)0x0) {
      operator_delete(pAVar9);
    }
  }
  else {
    pAVar8 = pAVar9;
    if (param_1 != 0) {
      pAVar8 = pAVar9 + param_1 * 0x338;
      lVar5 = param_1 * 0x338;
      do {
                    /* try { // try from 008784f8 to 008784ff has its CatchHandler @ 00878604 */
        AnimalAnimationSystem::AnimalAnimationSystem(pAVar9);
        pAVar9 = pAVar9 + 0x338;
        lVar5 = lVar5 + -0x338;
      } while (lVar5 != 0);
    }
    *(AnimalAnimationSystem **)(this + 8) = pAVar8;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


