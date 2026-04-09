// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>
// Entry Point: 00b936e8
// Size: 344 bytes
// Signature: void __thiscall __push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>(vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>> * this, pair * param_1)


/* void std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int> >
   >::__push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>
   >(std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int>&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
::
__push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>
          (vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
           *this,pair *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  pair pVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar5 = *(long *)(this + 0x10) - *(long *)this;
  uVar7 = (long)uVar5 >> 4;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x7fffffffffffffdf < uVar5) {
    uVar1 = 0x7ffffffffffffff;
  }
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar4 = operator_new(uVar1 * 0x20);
  uVar15 = *(undefined8 *)(param_1 + 2);
  uVar14 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar6 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = 0;
  pVar3 = param_1[6];
  puVar2 = (undefined8 *)((long)pvVar4 + lVar13 * 0x20);
  pbVar12 = *(byte **)this;
  pbVar11 = *(byte **)(this + 8);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x20);
  puVar2[2] = uVar6;
  *(pair *)(puVar2 + 3) = pVar3;
  puVar2[1] = uVar15;
  *puVar2 = uVar14;
  puVar8 = puVar2;
  if (pbVar11 == pbVar12) {
    *(undefined8 **)this = puVar2;
    *(undefined8 **)(this + 8) = puVar2 + 4;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    do {
      uVar14 = *(undefined8 *)(pbVar11 + -0x18);
      uVar6 = *(undefined8 *)(pbVar11 + -0x20);
      pbVar10 = pbVar11 + -0x20;
      puVar8[-2] = *(undefined8 *)(pbVar11 + -0x10);
      puVar9 = puVar8 + -4;
      puVar8[-3] = uVar14;
      puVar8[-4] = uVar6;
      *(undefined8 *)(pbVar11 + -0x18) = 0;
      *(undefined8 *)(pbVar11 + -0x10) = 0;
      *(undefined8 *)(pbVar11 + -0x20) = 0;
      *(undefined4 *)(puVar8 + -1) = *(undefined4 *)(pbVar11 + -8);
      puVar8 = puVar9;
      pbVar11 = pbVar10;
    } while (pbVar10 != pbVar12);
    pbVar12 = *(byte **)this;
    pbVar11 = *(byte **)(this + 8);
    *(undefined8 **)this = puVar9;
    *(undefined8 **)(this + 8) = puVar2 + 4;
    *(void **)(this + 0x10) = pvVar4;
    while (pbVar10 = pbVar11, pbVar10 != pbVar12) {
      pbVar11 = pbVar10 + -0x20;
      if ((*pbVar11 & 1) != 0) {
        operator_delete(*(void **)(pbVar10 + -0x10));
      }
    }
  }
  if (pbVar12 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar12);
  return;
}


