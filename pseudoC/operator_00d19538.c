// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00d19538
// Size: 484 bytes
// Signature: undefined __thiscall operator()(NewPrimeTable * this)


/* CryptoPP::NewPrimeTable::TEMPNAMEPLACEHOLDERVALUE() const */

void ** __thiscall CryptoPP::NewPrimeTable::operator()(NewPrimeTable *this)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  void **ppvVar6;
  undefined2 *puVar7;
  void *__dest;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  void *__src;
  size_t __n;
  long lVar12;
  undefined2 *puVar13;
  uint uVar14;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  ppvVar6 = (void **)operator_new(0x18);
  ppvVar6[1] = (void *)0x0;
  ppvVar6[2] = (void *)0x0;
  *ppvVar6 = (void *)0x0;
                    /* try { // try from 00d19580 to 00d19587 has its CatchHandler @ 00d1971c */
  puVar7 = (undefined2 *)operator_new(0x1b6e);
  uVar10 = 1;
  *ppvVar6 = puVar7;
  *puVar7 = 2;
  ppvVar6[1] = puVar7 + 1;
  ppvVar6[2] = puVar7 + 0xdb7;
  uVar14 = 3;
  do {
    if (uVar10 < 2) {
      uVar11 = 1;
LAB_00d1961c:
      if ((uint)uVar11 == uVar10) goto LAB_00d19624;
    }
    else {
      uVar11 = 1;
      do {
        uVar1 = *(ushort *)((long)*ppvVar6 + uVar11 * 2);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar14 / uVar1;
        }
        if (uVar14 == uVar3 * uVar1) goto LAB_00d1961c;
        uVar11 = uVar11 + 1;
      } while (uVar10 != uVar11);
LAB_00d19624:
      puVar7 = (undefined2 *)ppvVar6[1];
      uVar2 = (undefined2)uVar14;
      if (puVar7 < ppvVar6[2]) {
        puVar13 = puVar7 + 1;
        *puVar7 = uVar2;
        ppvVar6[1] = puVar13;
      }
      else {
        __src = *ppvVar6;
        __n = (long)puVar7 - (long)__src;
        if (__n == 0xfffffffffffffffd || (long)(__n + 3) < 0 != SCARRY8(__n,3)) {
                    /* try { // try from 00d19704 to 00d19717 has its CatchHandler @ 00d19724 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        lVar12 = (long)__n >> 1;
        uVar9 = (long)ppvVar6[2] - (long)__src;
        uVar11 = lVar12 + 1U;
        if (lVar12 + 1U <= uVar9) {
          uVar11 = uVar9;
        }
        if (0x7ffffffffffffffd < uVar9) {
          uVar11 = 0x7fffffffffffffff;
        }
        if (uVar11 == 0) {
          __dest = (void *)0x0;
          puVar13 = (undefined2 *)(lVar12 * 2);
          *puVar13 = uVar2;
        }
        else {
          if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00d1966c to 00d1966f has its CatchHandler @ 00d19720 */
          __dest = operator_new(uVar11 << 1);
          puVar13 = (undefined2 *)((long)__dest + lVar12 * 2);
          *puVar13 = uVar2;
        }
        puVar13 = puVar13 + 1;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *ppvVar6 = __dest;
        ppvVar6[1] = puVar13;
        ppvVar6[2] = (void *)((long)__dest + uVar11 * 2);
        if (__src != (void *)0x0) {
          operator_delete(__src);
          puVar13 = (undefined2 *)ppvVar6[1];
        }
      }
      uVar10 = (uint)((ulong)((long)puVar13 - (long)*ppvVar6) >> 1);
      if (0x6b < (ulong)((long)puVar13 - (long)*ppvVar6)) {
        uVar10 = 0x36;
      }
    }
    bVar5 = 0x7fcd < uVar14;
    uVar14 = uVar14 + 2;
    if (bVar5) {
      if (*(long *)(lVar4 + 0x28) == lVar8) {
        return ppvVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


