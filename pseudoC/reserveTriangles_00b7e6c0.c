// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserveTriangles
// Entry Point: 00b7e6c0
// Size: 160 bytes
// Signature: undefined __thiscall reserveTriangles(IndexedTriangleSetBuilder * this, uint param_1)


/* IndexedTriangleSetBuilder::reserveTriangles(unsigned int) */

void __thiscall
IndexedTriangleSetBuilder::reserveTriangles(IndexedTriangleSetBuilder *this,uint param_1)

{
  void *__dest;
  void *__src;
  size_t __n;
  ulong uVar1;
  
  __src = *(void **)(this + 0x18);
  if ((ulong)(*(long *)(this + 0x28) - (long)__src >> 4) < (ulong)param_1) {
    uVar1 = (ulong)param_1 * 0x10;
    __n = *(long *)(this + 0x20) - (long)__src;
    __dest = operator_new(uVar1);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x18) = __dest;
    *(size_t *)(this + 0x20) = (long)__dest + __n;
    *(void **)(this + 0x28) = (void *)((long)__dest + uVar1);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


