// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: split
// Entry Point: 00ee2ae8
// Size: 548 bytes
// Signature: undefined __cdecl split(basic_string_view param_1, char param_2)


/* Luau::split(std::__ndk1::basic_string_view<char, std::__ndk1::char_traits<char> >, char) */

void Luau::split(basic_string_view param_1,char param_2)

{
  ulong uVar1;
  void *__s;
  void *pvVar2;
  void *__dest;
  void *pvVar3;
  void *__n;
  uint in_w2;
  void **in_x8;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  void **ppvVar6;
  void **ppvVar7;
  size_t __n_00;
  
  __n = (void *)(ulong)(byte)param_2;
  __s = (void *)(ulong)param_1;
  *in_x8 = (void *)0x0;
  in_x8[1] = (void *)0x0;
  in_x8[2] = (void *)0x0;
  if (__n != (void *)0x0) {
    ppvVar7 = (void **)0x0;
    do {
      pvVar2 = memchr(__s,in_w2 & 0xff,(size_t)__n);
      if ((pvVar2 == (void *)0x0) ||
         (pvVar2 = (void *)((long)pvVar2 - (long)__s), pvVar2 == (void *)0xffffffffffffffff)) {
        if (ppvVar7 != (void **)in_x8[2]) {
          *ppvVar7 = __s;
          ppvVar7[1] = __n;
          in_x8[1] = ppvVar7 + 2;
          return;
        }
        pvVar2 = *in_x8;
        uVar4 = (long)ppvVar7 - (long)pvVar2;
        uVar1 = ((long)uVar4 >> 4) + 1;
        if (uVar1 >> 0x3c == 0) {
          if (uVar1 <= (ulong)((long)uVar4 >> 3)) {
            uVar1 = (long)uVar4 >> 3;
          }
          if (0x7fffffffffffffef < uVar4) {
            uVar1 = 0xfffffffffffffff;
          }
          if (uVar1 >> 0x3c == 0) {
                    /* try { // try from 00ee2c84 to 00ee2c87 has its CatchHandler @ 00ee2d0c */
            pvVar3 = operator_new(uVar1 << 4);
            ppvVar7 = (void **)((long)pvVar3 + ((long)uVar4 >> 4) * 0x10);
            *ppvVar7 = __s;
            ppvVar7[1] = __n;
            if (0 < (long)uVar4) {
              memcpy(pvVar3,pvVar2,uVar4);
            }
            *in_x8 = pvVar3;
            in_x8[1] = ppvVar7 + 2;
            in_x8[2] = (void *)((long)pvVar3 + uVar1 * 0x10);
            if (pvVar2 == (void *)0x0) {
              return;
            }
            operator_delete(pvVar2);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00ee2cf8 to 00ee2d0b has its CatchHandler @ 00ee2d0c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      pvVar3 = __n;
      if (pvVar2 <= __n) {
        pvVar3 = pvVar2;
      }
      if (ppvVar7 < in_x8[2]) {
        ppvVar6 = ppvVar7 + 2;
        *ppvVar7 = __s;
        ppvVar7[1] = pvVar3;
        in_x8[1] = ppvVar6;
      }
      else {
        __src = *in_x8;
        __n_00 = (long)ppvVar7 - (long)__src;
        uVar1 = ((long)__n_00 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar4 = (long)in_x8[2] - (long)__src;
        uVar5 = (long)uVar4 >> 3;
        if (uVar1 <= uVar5) {
          uVar1 = uVar5;
        }
        if (0x7fffffffffffffef < uVar4) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 >> 0x3c != 0) {
                    /* try { // try from 00ee2ce4 to 00ee2cf7 has its CatchHandler @ 00ee2d14 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00ee2bc0 to 00ee2bc3 has its CatchHandler @ 00ee2d10 */
        __dest = operator_new(uVar1 << 4);
        ppvVar6 = (void **)((long)__dest + ((long)__n_00 >> 4) * 0x10);
        *ppvVar6 = __s;
        ppvVar6[1] = pvVar3;
        if (0 < (long)__n_00) {
          memcpy(__dest,__src,__n_00);
        }
        ppvVar6 = ppvVar6 + 2;
        *in_x8 = __dest;
        in_x8[1] = ppvVar6;
        in_x8[2] = (void *)((long)__dest + uVar1 * 0x10);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      __s = (void *)((long)__s + (long)pvVar2 + 1);
      __n = (void *)((long)__n - ((long)pvVar2 + 1));
      ppvVar7 = ppvVar6;
    } while (__n != (void *)0x0);
  }
  return;
}


