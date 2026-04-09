// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<unsigned_short&>
// Entry Point: 008d3a04
// Size: 276 bytes
// Signature: void __thiscall __emplace_back_slow_path<unsigned_short&>(vector<FillPlaneGeometry::VertexFormat,std::__ndk1::allocator<FillPlaneGeometry::VertexFormat>> * this, ushort * param_1)


/* void std::__ndk1::vector<FillPlaneGeometry::VertexFormat,
   std::__ndk1::allocator<FillPlaneGeometry::VertexFormat> >::__emplace_back_slow_path<unsigned
   short&>(unsigned short&) */

void __thiscall
std::__ndk1::
vector<FillPlaneGeometry::VertexFormat,std::__ndk1::allocator<FillPlaneGeometry::VertexFormat>>::
__emplace_back_slow_path<unsigned_short&>
          (vector<FillPlaneGeometry::VertexFormat,std::__ndk1::allocator<FillPlaneGeometry::VertexFormat>>
           *this,ushort *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__src;
  ushort uVar3;
  void *__dest;
  ulong uVar4;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar4 = *(long *)(this + 0x10) - (long)__src >> 4;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0x7fffffffffffffdf < (ulong)(*(long *)(this + 0x10) - (long)__src)) {
    uVar1 = 0x7ffffffffffffff;
  }
  if (uVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 << 5);
  }
  puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 5) * 0x20);
  uVar3 = *param_1;
  *puVar2 = 0;
  *(ushort *)((long)puVar2 + 0x14) = uVar3;
  *(undefined4 *)(puVar2 + 1) = 0x3f800000;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *(undefined8 *)((long)puVar2 + 0x16) = 0xffffffffffffffff;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar2 + 4;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x20);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


