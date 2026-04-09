// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 006d60bc
// Size: 280 bytes
// Signature: undefined __thiscall reserve(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>> * this, ulong param_1)


/* std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::reserve(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pbVar5 = *(byte **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pbVar5 >> 3) * -0x5555555555555555) < param_1) {
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pbVar6 = *(byte **)(this + 8);
    pvVar2 = operator_new(param_1 * 0x18);
    lVar1 = (long)pvVar2 + ((long)pbVar6 - (long)pbVar5);
    pvVar2 = (void *)((long)pvVar2 + param_1 * 0x18);
    lVar4 = lVar1;
    if ((long)pbVar6 - (long)pbVar5 == 0) {
      *(long *)this = lVar1;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar2;
    }
    else {
      do {
        uVar8 = *(undefined8 *)(pbVar6 + -0x10);
        uVar7 = *(undefined8 *)(pbVar6 + -0x18);
        *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(pbVar6 + -8);
        pbVar3 = pbVar6 + -0x18;
        *(undefined8 *)(lVar4 + -0x10) = uVar8;
        *(undefined8 *)(lVar4 + -0x18) = uVar7;
        lVar4 = lVar4 + -0x18;
        *(undefined8 *)(pbVar6 + -0x10) = 0;
        *(undefined8 *)(pbVar6 + -8) = 0;
        *(undefined8 *)(pbVar6 + -0x18) = 0;
        pbVar6 = pbVar3;
      } while (pbVar3 != pbVar5);
      pbVar5 = *(byte **)this;
      pbVar6 = *(byte **)(this + 8);
      *(long *)this = lVar4;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar2;
      while (pbVar3 = pbVar6, pbVar3 != pbVar5) {
        pbVar6 = pbVar3 + -0x18;
        if ((*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
      }
    }
    if (pbVar5 != (byte *)0x0) {
      operator_delete(pbVar5);
      return;
    }
  }
  return;
}


