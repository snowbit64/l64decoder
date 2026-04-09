// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: duplicateRule
// Entry Point: 009d4250
// Size: 700 bytes
// Signature: undefined __thiscall duplicateRule(ProceduralPlacementManager * this, int param_1)


/* ProceduralPlacementManager::duplicateRule(int) */

void __thiscall
ProceduralPlacementManager::duplicateRule(ProceduralPlacementManager *this,int param_1)

{
  ProceduralPlacementRule **ppPVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ProceduralPlacementRule *this_00;
  size_t sVar5;
  size_t sVar6;
  void *__dest;
  int iVar7;
  ProceduralPlacementRule *pPVar8;
  void *pvVar9;
  ulong __n;
  ulong uVar10;
  undefined8 local_180;
  size_t local_178;
  void *local_170;
  char acStack_168 [256];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pPVar8 = *(ProceduralPlacementRule **)((long)*(void **)(this + 0xb8) + (long)param_1 * 8);
  this_00 = (ProceduralPlacementRule *)operator_new(0xc0);
                    /* try { // try from 009d4298 to 009d429f has its CatchHandler @ 009d4520 */
  ProceduralPlacementRule::ProceduralPlacementRule(this_00,pPVar8);
  iVar7 = 0;
  while( true ) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_180);
    FUN_009d4538(acStack_168);
    if ((local_180 & 1) != 0) {
      operator_delete(local_170);
    }
    if (*(long *)(this + 0xc0) == *(long *)(this + 0xb8)) break;
    uVar10 = 0;
    while( true ) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_180);
      sVar5 = strlen(acStack_168);
      sVar6 = local_180 >> 1 & 0x7f;
      if ((local_180 & 1) != 0) {
        sVar6 = local_178;
      }
      if (sVar5 == sVar6) {
                    /* try { // try from 009d4330 to 009d4343 has its CatchHandler @ 009d4534 */
        iVar4 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)&local_180,0,(char *)0xffffffffffffffff,(ulong)acStack_168);
        bVar3 = iVar4 == 0;
      }
      else {
        bVar3 = false;
      }
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
      }
      if (bVar3) break;
      uVar10 = (ulong)((int)uVar10 + 1);
      if ((ulong)(*(long *)(this + 0xc0) - *(long *)(this + 0xb8) >> 3) <= uVar10)
      goto LAB_009d4394;
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 100) break;
  }
LAB_009d4394:
  sVar6 = strlen(acStack_168);
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar6 < 0x17) {
    pvVar9 = (void *)((ulong)&local_180 | 1);
    local_180 = CONCAT71(local_180._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 == 0) goto LAB_009d43f8;
  }
  else {
    uVar10 = sVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = operator_new(uVar10);
    local_180 = uVar10 | 1;
    local_178 = sVar6;
    local_170 = pvVar9;
  }
  memcpy(pvVar9,acStack_168,sVar6);
LAB_009d43f8:
  *(undefined *)((long)pvVar9 + sVar6) = 0;
                    /* try { // try from 009d4400 to 009d4407 has its CatchHandler @ 009d450c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x28),(basic_string *)&local_180);
  if ((local_180 & 1) != 0) {
    operator_delete(local_170);
  }
  ppPVar1 = *(ProceduralPlacementRule ***)(this + 0xc0);
  if (ppPVar1 == *(ProceduralPlacementRule ***)(this + 200)) {
    pvVar9 = *(void **)(this + 0xb8);
    __n = (long)ppPVar1 - (long)pvVar9;
    uVar10 = ((long)__n >> 3) + 1;
    if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar10 <= (ulong)((long)__n >> 2)) {
      uVar10 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar10 << 3);
    }
    ppPVar1 = (ProceduralPlacementRule **)((long)__dest + ((long)__n >> 3) * 8);
    *ppPVar1 = this_00;
    if (0 < (long)__n) {
      memcpy(__dest,pvVar9,__n);
    }
    *(void **)(this + 0xb8) = __dest;
    *(ProceduralPlacementRule ***)(this + 0xc0) = ppPVar1 + 1;
    *(void **)(this + 200) = (void *)((long)__dest + uVar10 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *ppPVar1 = this_00;
    *(ProceduralPlacementRule ***)(this + 0xc0) = ppPVar1 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


