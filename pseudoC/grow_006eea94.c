// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: grow
// Entry Point: 006eea94
// Size: 116 bytes
// Signature: undefined __thiscall grow(BufferData2D * this, uint param_1)


/* FontOverlayRenderer::BufferData2D::grow(unsigned int) */

void __thiscall FontOverlayRenderer::BufferData2D::grow(BufferData2D *this,uint param_1)

{
  void *__dest;
  void *__src;
  
  __dest = operator_new__((ulong)param_1 << 4);
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


