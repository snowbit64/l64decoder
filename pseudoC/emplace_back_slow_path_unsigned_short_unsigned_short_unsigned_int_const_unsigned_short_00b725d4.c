// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<unsigned_short&,unsigned_short&,unsigned_int_const&,unsigned_short&>
// Entry Point: 00b725d4
// Size: 328 bytes
// Signature: void __thiscall __emplace_back_slow_path<unsigned_short&,unsigned_short&,unsigned_int_const&,unsigned_short&>(vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>> * this, ushort * param_1, ushort * param_2, uint * param_3, ushort * param_4)


/* void std::__ndk1::vector<Brep::VertexCone, std::__ndk1::allocator<Brep::VertexCone>
   >::__emplace_back_slow_path<unsigned short&, unsigned short&, unsigned int const&, unsigned
   short&>(unsigned short&, unsigned short&, unsigned int const&, unsigned short&) */

void __thiscall
std::__ndk1::vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>>::
__emplace_back_slow_path<unsigned_short&,unsigned_short&,unsigned_int_const&,unsigned_short&>
          (vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>> *this,ushort *param_1,
          ushort *param_2,uint *param_3,ushort *param_4)

{
  ulong uVar1;
  void *__src;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  ushort *puVar6;
  long lVar7;
  ulong uVar8;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - (long)__src >> 2;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar1 = 0x1555555555555555;
  }
  if (uVar1 < 0x1555555555555556) {
    pvVar5 = operator_new(uVar1 * 0xc);
    uVar3 = *param_2;
    puVar6 = (ushort *)((long)pvVar5 + ((long)__n >> 2) * 4);
    uVar2 = *param_3;
    uVar4 = *param_4;
    *puVar6 = *param_1;
    puVar6[1] = uVar3;
    *(uint *)(puVar6 + 2) = uVar2;
    puVar6[4] = uVar4;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar6 - __n),__src,__n);
    }
    *(void **)this = (void *)((long)puVar6 - __n);
    *(ushort **)(this + 8) = puVar6 + 6;
    *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0xc);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
}


