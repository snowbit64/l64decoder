// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeStringTable
// Entry Point: 00efb190
// Size: 668 bytes
// Signature: undefined __thiscall writeStringTable(BytecodeBuilder * this, basic_string * param_1)


/* Luau::BytecodeBuilder::writeStringTable(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) const */

void __thiscall Luau::BytecodeBuilder::writeStringTable(BytecodeBuilder *this,basic_string *param_1)

{
  bool bVar1;
  long *plVar2;
  void *__s2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong *__s;
  ulong uVar6;
  ulong *puVar7;
  long *plVar8;
  uint uVar9;
  size_t *psVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  byte local_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar6 = *(ulong *)(this + 0x1f0);
  if (uVar6 == 0) {
    __s = (ulong *)0x0;
    puVar11 = (ulong *)0x0;
    plVar2 = *(long **)(this + 0x1e0);
    uVar6 = *(ulong *)(this + 0x1e8);
    __s2 = *(void **)(this + 0x1f8);
    __n = *(size_t *)(this + 0x200);
  }
  else {
    if (uVar6 >> 0x3c != 0) {
                    /* try { // try from 00efb420 to 00efb427 has its CatchHandler @ 00efb42c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00efb1e0 to 00efb1e7 has its CatchHandler @ 00efb42c */
    __s = (ulong *)operator_new(uVar6 * 0x10);
    puVar11 = __s + uVar6 * 2;
    memset(__s,0,uVar6 * 0x10);
    plVar2 = *(long **)(this + 0x1e0);
    uVar6 = *(ulong *)(this + 0x1e8);
    __s2 = *(void **)(this + 0x1f8);
    __n = *(size_t *)(this + 0x200);
  }
  uVar12 = 0;
  if (uVar6 == 0) {
joined_r0x00efb298:
    while (uVar4 = uVar12, uVar4 != uVar6) {
      puVar7 = (ulong *)(plVar2 + uVar4 * 3);
      uVar12 = uVar4 + 1;
      iVar5 = *(int *)(puVar7 + 2);
      uVar13 = *puVar7;
      (__s + (ulong)(iVar5 - 1) * 2)[1] = puVar7[1];
      __s[(ulong)(iVar5 - 1) * 2] = uVar13;
      if (uVar12 < uVar6) {
        if (__s2 == (void *)0x0) {
          plVar8 = plVar2 + uVar4 * 3 + 3;
          while (*plVar8 == 0) {
            uVar12 = uVar12 + 1;
            plVar8 = plVar8 + 3;
            if (uVar6 == uVar12) goto LAB_00efb348;
          }
        }
        else {
          psVar10 = (size_t *)(plVar2 + uVar4 * 3 + 4);
          while ((((void *)psVar10[-1] != (void *)0x0 && (*psVar10 == __n)) &&
                 (iVar5 = memcmp((void *)psVar10[-1],__s2,__n), iVar5 == 0))) {
            uVar12 = uVar12 + 1;
            psVar10 = psVar10 + 3;
            if (uVar6 == uVar12) goto LAB_00efb348;
          }
        }
      }
    }
  }
  else {
    uVar12 = 0;
    plVar8 = plVar2;
    if (__s2 == (void *)0x0) {
      do {
        if (*plVar8 != 0) goto joined_r0x00efb298;
        uVar12 = uVar12 + 1;
        plVar8 = plVar8 + 3;
      } while (uVar6 != uVar12);
    }
    else {
      psVar10 = (size_t *)(plVar2 + 1);
      do {
        if ((((void *)psVar10[-1] == (void *)0x0) || (*psVar10 != __n)) ||
           (iVar5 = memcmp((void *)psVar10[-1],__s2,__n), iVar5 != 0)) goto joined_r0x00efb298;
        uVar12 = uVar12 + 1;
        psVar10 = psVar10 + 3;
      } while (uVar6 != uVar12);
    }
  }
LAB_00efb348:
  uVar6 = (ulong)((long)puVar11 - (long)__s) >> 4;
  do {
    uVar9 = (uint)uVar6;
    local_6c[0] = (byte)uVar6 & 0x7f | (0x7f < uVar9) << 7;
                    /* try { // try from 00efb364 to 00efb373 has its CatchHandler @ 00efb448 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)local_6c);
    uVar6 = (ulong)(uVar9 >> 7);
    puVar7 = __s;
  } while (0x7f < uVar9);
  for (; puVar7 != puVar11; puVar7 = puVar7 + 2) {
    uVar9 = *(uint *)(puVar7 + 1);
    do {
      local_6c[0] = (byte)uVar9 & 0x7f | (0x7f < uVar9) << 7;
                    /* try { // try from 00efb3a8 to 00efb3b7 has its CatchHandler @ 00efb44c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)local_6c);
      bVar1 = 0x7f < uVar9;
      uVar9 = uVar9 >> 7;
    } while (bVar1);
                    /* try { // try from 00efb3cc to 00efb3d3 has its CatchHandler @ 00efb444 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,*puVar7);
  }
  if (__s != (ulong *)0x0) {
    operator_delete(__s);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


