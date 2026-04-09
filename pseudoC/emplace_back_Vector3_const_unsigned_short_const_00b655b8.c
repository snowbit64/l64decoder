// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emplace_back<Vector3_const&,unsigned_short_const&>
// Entry Point: 00b655b8
// Size: 316 bytes
// Signature: void __thiscall emplace_back<Vector3_const&,unsigned_short_const&>(vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>> * this, Vector3 * param_1, ushort * param_2)


/* void std::__ndk1::vector<Brep::Vertex, std::__ndk1::allocator<Brep::Vertex>
   >::emplace_back<Vector3 const&, unsigned short const&>(Vector3 const&, unsigned short const&) */

void __thiscall
std::__ndk1::vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>>::
emplace_back<Vector3_const&,unsigned_short_const&>
          (vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>> *this,Vector3 *param_1,
          ushort *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  void *__dest;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *__src;
  size_t __n;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 < *(undefined8 **)(this + 0x10)) {
    uVar6 = *(undefined8 *)param_1;
    uVar4 = *param_2;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *puVar2 = uVar6;
    *(ushort *)((long)puVar2 + 0xc) = uVar4;
    *(undefined8 **)(this + 8) = puVar2 + 2;
  }
  else {
    __src = *(void **)this;
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)*(undefined8 **)(this + 0x10) - (long)__src;
    uVar7 = (long)uVar5 >> 3;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x7fffffffffffffef < uVar5) {
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
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar4 = *param_2;
    *puVar2 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar2 + 1) = uVar3;
    *(ushort *)((long)puVar2 + 0xc) = uVar4;
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


