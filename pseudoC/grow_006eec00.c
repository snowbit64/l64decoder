// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: grow
// Entry Point: 006eec00
// Size: 120 bytes
// Signature: undefined __thiscall grow(BufferData3D * this, uint param_1)


/* FontOverlayRenderer::BufferData3D::grow(unsigned int) */

void __thiscall FontOverlayRenderer::BufferData3D::grow(BufferData3D *this,uint param_1)

{
  void *__dest;
  void *__src;
  
  __dest = operator_new__((ulong)param_1 * 0x14);
  if (*(uint *)(this + 0xc) == 0) {
    __src = *(void **)this;
  }
  else {
    __src = *(void **)this;
    memcpy(__dest,__src,(ulong)*(uint *)(this + 0xc) << 4);
  }
  if (__src != (void *)0x0) {
    operator_delete__(__src);
  }
  *(void **)this = __dest;
  *(uint *)(this + 8) = param_1;
  return;
}


