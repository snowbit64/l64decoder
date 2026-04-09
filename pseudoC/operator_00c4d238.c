// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00c4d238
// Size: 180 bytes
// Signature: undefined __thiscall operator=(vector<bool,std::__ndk1::allocator<bool>> * this, vector * param_1)


/* std::__ndk1::vector<bool, std::__ndk1::allocator<bool>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::vector<bool, std::__ndk1::allocator<bool> > const&) */

vector<bool,std::__ndk1::allocator<bool>> * __thiscall
std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::operator=
          (vector<bool,std::__ndk1::allocator<bool>> *this,vector *param_1)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  
  if (this != (vector<bool,std::__ndk1::allocator<bool>> *)param_1) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 != 0) {
      if ((ulong)(*(long *)(this + 0x10) * 0x40) < uVar2) {
        if (*(void **)this != (void *)0x0) {
          operator_delete(*(void **)this);
          *(undefined8 *)this = 0;
          *(undefined8 *)(this + 8) = 0;
          *(undefined8 *)(this + 0x10) = 0;
          uVar2 = *(ulong *)(param_1 + 8);
        }
        if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        lVar1 = (uVar2 - 1 >> 6) + 1;
        __dest = operator_new(lVar1 * 8);
        *(undefined8 *)(this + 8) = 0;
        *(long *)(this + 0x10) = lVar1;
        uVar2 = *(ulong *)(param_1 + 8);
        *(void **)this = __dest;
      }
      else {
        __dest = *(void **)this;
      }
      memmove(__dest,*(void **)param_1,(uVar2 - 1 >> 3 & 0x1ffffffffffffff8) + 8);
      uVar2 = *(ulong *)(param_1 + 8);
    }
    *(ulong *)(this + 8) = uVar2;
  }
  return this;
}


