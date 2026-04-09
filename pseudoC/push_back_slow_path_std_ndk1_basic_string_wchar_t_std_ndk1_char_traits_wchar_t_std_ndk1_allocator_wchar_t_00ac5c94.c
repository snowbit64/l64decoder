// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>>
// Entry Point: 00ac5c94
// Size: 376 bytes
// Signature: void __thiscall __push_back_slow_path<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>>(vector<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>,std::__ndk1::allocator<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>>> * this, basic_string * param_1)


/* void std::__ndk1::vector<std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >, std::__ndk1::allocator<std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > >
   >::__push_back_slow_path<std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > >(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>,std::__ndk1::allocator<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>>>
::
__push_back_slow_path<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>>
          (vector<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>,std::__ndk1::allocator<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>>>
           *this,basic_string *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar3 = operator_new(uVar1 * 0x18);
  }
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar13 = *(undefined8 *)(param_1 + 2);
  uVar12 = *(undefined8 *)param_1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)param_1 = 0;
  puVar5 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  pbVar11 = *(byte **)this;
  pbVar10 = *(byte **)(this + 8);
  pvVar3 = (void *)((long)pvVar3 + uVar1 * 0x18);
  puVar2 = puVar5 + 3;
  puVar5[1] = uVar13;
  *puVar5 = uVar12;
  puVar5[2] = uVar8;
  if (pbVar10 == pbVar11) {
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = pvVar3;
  }
  else {
    do {
      uVar12 = *(undefined8 *)(pbVar10 + -0x10);
      uVar8 = *(undefined8 *)(pbVar10 + -0x18);
      puVar5[-1] = *(undefined8 *)(pbVar10 + -8);
      pbVar9 = pbVar10 + -0x18;
      puVar5[-2] = uVar12;
      puVar5[-3] = uVar8;
      puVar5 = puVar5 + -3;
      *(undefined8 *)(pbVar10 + -0x10) = 0;
      *(undefined8 *)(pbVar10 + -8) = 0;
      *(undefined8 *)(pbVar10 + -0x18) = 0;
      pbVar10 = pbVar9;
    } while (pbVar9 != pbVar11);
    pbVar11 = *(byte **)this;
    pbVar10 = *(byte **)(this + 8);
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = pvVar3;
    while (pbVar9 = pbVar10, pbVar9 != pbVar11) {
      pbVar10 = pbVar9 + -0x18;
      if ((*pbVar10 & 1) != 0) {
        operator_delete(*(void **)(pbVar9 + -8));
      }
    }
  }
  if (pbVar11 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar11);
  return;
}


