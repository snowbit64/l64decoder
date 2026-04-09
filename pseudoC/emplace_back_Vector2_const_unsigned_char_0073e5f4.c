// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emplace_back<Vector2_const&,unsigned_char&>
// Entry Point: 0073e5f4
// Size: 328 bytes
// Signature: void __thiscall emplace_back<Vector2_const&,unsigned_char&>(vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>> * this, Vector2 * param_1, uchar * param_2)


/* void std::__ndk1::vector<std::__ndk1::pair<Vector2, unsigned char>,
   std::__ndk1::allocator<std::__ndk1::pair<Vector2, unsigned char> > >::emplace_back<Vector2
   const&, unsigned char&>(Vector2 const&, unsigned char&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
::emplace_back<Vector2_const&,unsigned_char&>
          (vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
           *this,Vector2 *param_1,uchar *param_2)

{
  ulong uVar1;
  uchar uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  void *__src;
  size_t __n;
  
  puVar5 = *(undefined8 **)(this + 8);
  if (puVar5 < *(undefined8 **)(this + 0x10)) {
    *puVar5 = *(undefined8 *)param_1;
    uVar2 = *param_2;
    *(ulong *)(this + 8) = (long)puVar5 + 0xc;
    *(uchar *)(puVar5 + 1) = uVar2;
  }
  else {
    __src = *(void **)this;
    __n = (long)puVar5 - (long)__src;
    uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (long)*(undefined8 **)(this + 0x10) - (long)__src >> 2;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar1 = 0x1555555555555555;
    }
    if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar3 = operator_new(uVar1 * 0xc);
    uVar2 = *param_2;
    puVar5 = (undefined8 *)((long)pvVar3 + ((long)__n >> 2) * 4);
    *puVar5 = *(undefined8 *)param_1;
    *(uchar *)(puVar5 + 1) = uVar2;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar5 - __n),__src,__n);
    }
    *(void **)this = (void *)((long)puVar5 - __n);
    *(long *)(this + 8) = (long)puVar5 + 0xc;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0xc);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


