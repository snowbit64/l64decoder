// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emplace_back<std::__ndk1::pair<float,unsigned_int>const&,unsigned_short*&>
// Entry Point: 00b6b7ec
// Size: 296 bytes
// Signature: void __thiscall emplace_back<std::__ndk1::pair<float,unsigned_int>const&,unsigned_short*&>(vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>> * this, pair * param_1, ushort * * param_2)


/* void std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned
   short*>, std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>,
   unsigned short*> > >::emplace_back<std::__ndk1::pair<float, unsigned int> const&, unsigned
   short*&>(std::__ndk1::pair<float, unsigned int> const&, unsigned short*&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>
::emplace_back<std::__ndk1::pair<float,unsigned_int>const&,unsigned_short*&>
          (vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>
           *this,pair *param_1,ushort **param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  ushort *puVar3;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 < *(undefined8 **)(this + 0x10)) {
    *puVar2 = *(undefined8 *)param_1;
    puVar3 = *param_2;
    *(undefined8 **)(this + 8) = puVar2 + 2;
    puVar2[1] = puVar3;
  }
  else {
    __src = *(void **)this;
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = (long)*(undefined8 **)(this + 0x10) - (long)__src;
    uVar5 = (long)uVar4 >> 3;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 4);
    }
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
    puVar3 = *param_2;
    *puVar2 = *(undefined8 *)param_1;
    puVar2[1] = puVar3;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(undefined8 **)(this + 8) = puVar2 + 2;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


