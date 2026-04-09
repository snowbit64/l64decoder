// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: join
// Entry Point: 00ee26e8
// Size: 428 bytes
// Signature: undefined __cdecl join(vector * param_1, basic_string_view param_2)


/* Luau::join(std::__ndk1::vector<std::__ndk1::basic_string_view<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::allocator<std::__ndk1::basic_string_view<char,
   std::__ndk1::char_traits<char> > > > const&, std::__ndk1::basic_string_view<char,
   std::__ndk1::char_traits<char> >) */

void Luau::join(vector *param_1,basic_string_view param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  size_t in_x2;
  ulong *in_x8;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  void **ppvVar11;
  void **ppvVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar7 == lVar3) {
    *(undefined2 *)in_x8 = 0;
  }
  else {
    uVar6 = (lVar3 - lVar7) - 0x10;
    lVar5 = ((lVar3 - lVar7 >> 4) + -1) * in_x2;
    if (0x3f < uVar6) {
      lVar13 = 0;
      uVar6 = (uVar6 >> 4) + 1;
      uVar2 = 4;
      if ((uVar6 & 3) != 0) {
        uVar2 = uVar6 & 3;
      }
      lVar9 = uVar6 - uVar2;
      lVar14 = 0;
      lVar15 = 0;
      lVar1 = lVar9 * 0x10;
      plVar8 = (long *)(lVar7 + 0x28);
      do {
        lVar9 = lVar9 + -4;
        lVar14 = *plVar8 + lVar14;
        lVar15 = plVar8[2] + lVar15;
        lVar5 = plVar8[-4] + lVar5;
        lVar13 = plVar8[-2] + lVar13;
        plVar8 = plVar8 + 8;
      } while (lVar9 != 0);
      lVar5 = lVar14 + lVar5 + lVar15 + lVar13;
      lVar7 = lVar7 + lVar1;
    }
    do {
      lVar13 = lVar7 + 0x10;
      lVar5 = *(long *)(lVar7 + 8) + lVar5;
      lVar7 = lVar13;
    } while (lVar13 != lVar3);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = (void *)0x0;
                    /* try { // try from 00ee27d0 to 00ee27df has its CatchHandler @ 00ee2894 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)&local_70,(char)lVar5);
    ppvVar12 = *(void ***)param_1;
    pvVar10 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pvVar10 = local_60;
    }
    memcpy(pvVar10,*ppvVar12,(size_t)ppvVar12[1]);
    ppvVar11 = ppvVar12 + 2;
    if (ppvVar11 != *(void ***)(param_1 + 8)) {
      pvVar10 = (void *)((long)pvVar10 + (long)ppvVar12[1]);
      do {
        memcpy(pvVar10,(void *)(ulong)param_2,in_x2);
        memcpy((void *)((long)pvVar10 + in_x2),*ppvVar11,(size_t)ppvVar11[1]);
        ppvVar12 = ppvVar11 + 1;
        ppvVar11 = ppvVar11 + 2;
        pvVar10 = (void *)((long)(void *)((long)pvVar10 + in_x2) + (long)*ppvVar12);
      } while (ppvVar11 != *(void ***)(param_1 + 8));
    }
    in_x8[1] = uStack_68;
    *in_x8 = local_70;
    in_x8[2] = (ulong)local_60;
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


