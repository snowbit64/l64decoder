// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addObjectFoliage
// Entry Point: 009d39bc
// Size: 336 bytes
// Signature: undefined __thiscall addObjectFoliage(ProceduralPlacementManager * this, basic_string * param_1, basic_string * param_2, uint param_3, basic_string * param_4)


/* ProceduralPlacementManager::addObjectFoliage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementManager::addObjectFoliage
          (ProceduralPlacementManager *this,basic_string *param_1,basic_string *param_2,uint param_3
          ,basic_string *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *this_00;
  void *__dest;
  void *__src;
  ulong __n;
  
  this_00 = (undefined8 *)operator_new(0x50);
  this_00[1] = 0;
  *this_00 = 0;
  this_00[3] = 0;
  this_00[2] = 0;
  this_00[5] = 0;
  this_00[4] = 0;
  this_00[7] = 0;
  this_00[6] = 0;
  this_00[9] = 0;
  this_00[8] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            this_00,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 3),param_2);
  *(uint *)(this_00 + 6) = param_3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 7),param_4);
  puVar2 = *(undefined8 **)(this + 0x28);
  if (puVar2 == *(undefined8 **)(this + 0x30)) {
    __src = *(void **)(this + 0x20);
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = this_00;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x20) = __dest;
    *(undefined8 **)(this + 0x28) = puVar2 + 1;
    *(void **)(this + 0x30) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *puVar2 = this_00;
    *(undefined8 **)(this + 0x28) = puVar2 + 1;
  }
  return;
}


