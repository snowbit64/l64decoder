// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<char*&>
// Entry Point: 00b43238
// Size: 536 bytes
// Signature: void __thiscall __emplace_back_slow_path<char*&>(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>> * this, char * * param_1)


/* void std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::__emplace_back_slow_path<char*&>(char*&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::__emplace_back_slow_path<char*&>
          (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,char **param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  void *pvVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong *puVar12;
  undefined *__dest;
  char *__s;
  ulong uVar13;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x18);
  }
  puVar12 = (ulong *)((long)pvVar4 + lVar6 * 8);
  __s = *param_1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b43438 to 00b4343f has its CatchHandler @ 00b43450 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar12 + 1);
    *(char *)puVar12 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00b43368;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b43338 to 00b4333f has its CatchHandler @ 00b43450 */
    __dest = (undefined *)operator_new(uVar8);
    *puVar12 = uVar8 | 1;
    *(size_t *)((long)pvVar4 + lVar6 * 8 + 8) = __n;
    *(undefined **)((long)pvVar4 + lVar6 * 8 + 0x10) = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_00b43368:
  __dest[__n] = 0;
  pbVar11 = *(byte **)this;
  puVar2 = puVar12 + 3;
  pbVar9 = *(byte **)(this + 8);
  pbVar10 = pbVar11;
  if (*(byte **)(this + 8) != pbVar11) {
    do {
      uVar13 = *(ulong *)(pbVar9 + -0x10);
      uVar8 = *(ulong *)(pbVar9 + -0x18);
      puVar12[-1] = *(ulong *)(pbVar9 + -8);
      pbVar10 = pbVar9 + -0x18;
      puVar12[-2] = uVar13;
      puVar12[-3] = uVar8;
      puVar12 = puVar12 + -3;
      *(undefined8 *)(pbVar9 + -0x10) = 0;
      *(undefined8 *)(pbVar9 + -8) = 0;
      *(undefined8 *)(pbVar9 + -0x18) = 0;
      pbVar9 = pbVar10;
    } while (pbVar10 != pbVar11);
    pbVar11 = *(byte **)(this + 8);
    pbVar10 = *(byte **)this;
  }
  *(ulong **)this = puVar12;
  *(ulong **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x18);
  while (pbVar9 = pbVar11, pbVar9 != pbVar10) {
    pbVar11 = pbVar9 + -0x18;
    if ((*pbVar11 & 1) != 0) {
      operator_delete(*(void **)(pbVar9 + -8));
    }
  }
  if (pbVar10 != (byte *)0x0) {
    operator_delete(pbVar10);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


