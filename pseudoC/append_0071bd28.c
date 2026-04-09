// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 0071bd28
// Size: 500 bytes
// Signature: undefined __thiscall __append(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>> * this, ulong param_1)


/* std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::__append(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  byte *__s;
  void *__s_00;
  size_t sVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  __s = *(byte **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)__s >> 3) * -0x5555555555555555) < param_1) {
    pbVar8 = *(byte **)this;
    lVar5 = (long)__s - (long)pbVar8 >> 3;
    uVar1 = lVar5 * -0x5555555555555555 + param_1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = *(long *)(this + 0x10) - (long)pbVar8 >> 3;
    uVar6 = lVar3 * 0x5555555555555556;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x18);
    }
    __s_00 = (void *)((long)pvVar2 + lVar5 * 8);
    pvVar2 = (void *)((long)pvVar2 + uVar1 * 0x18);
    sVar7 = ((param_1 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    memset(__s_00,0,sVar7);
    lVar5 = (long)__s_00 + sVar7;
    if (__s == pbVar8) {
      *(void **)this = __s_00;
      *(long *)(this + 8) = lVar5;
      *(void **)(this + 0x10) = pvVar2;
    }
    else {
      do {
        uVar10 = *(undefined8 *)(__s + -0x10);
        uVar9 = *(undefined8 *)(__s + -0x18);
        *(undefined8 *)((long)__s_00 + -8) = *(undefined8 *)(__s + -8);
        pbVar4 = __s + -0x18;
        *(undefined8 *)((long)__s_00 + -0x10) = uVar10;
        *(undefined8 *)((long)__s_00 + -0x18) = uVar9;
        __s_00 = (void *)((long)__s_00 + -0x18);
        *(undefined8 *)(__s + -0x10) = 0;
        *(undefined8 *)(__s + -8) = 0;
        *(undefined8 *)(__s + -0x18) = 0;
        __s = pbVar4;
      } while (pbVar4 != pbVar8);
      __s = *(byte **)this;
      pbVar8 = *(byte **)(this + 8);
      *(void **)this = __s_00;
      *(long *)(this + 8) = lVar5;
      *(void **)(this + 0x10) = pvVar2;
      while (pbVar4 = pbVar8, pbVar4 != __s) {
        pbVar8 = pbVar4 + -0x18;
        if ((*pbVar8 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
      }
    }
    if (__s != (byte *)0x0) {
      operator_delete(__s);
      return;
    }
  }
  else {
    if (param_1 != 0) {
      sVar7 = ((param_1 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      memset(__s,0,sVar7);
      __s = __s + sVar7;
    }
    *(byte **)(this + 8) = __s;
  }
  return;
}


