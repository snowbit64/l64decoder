// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNumIndices
// Entry Point: 00b795f4
// Size: 84 bytes
// Signature: undefined __thiscall setNumIndices(IndexedTriangleSet * this, uint param_1)


/* IndexedTriangleSet::setNumIndices(unsigned int) */

void __thiscall IndexedTriangleSet::setNumIndices(IndexedTriangleSet *this,uint param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  if (*(int *)(this + 0x68) == 0) {
    uVar1 = (ulong)param_1 * 2 + 6 & 0x3fffffffc;
    if (0x10000 < *(uint *)(this + 8)) {
      uVar1 = (ulong)param_1 << 2;
    }
    pvVar2 = operator_new__(uVar1);
    *(uint *)(this + 0x68) = param_1;
    *(void **)(this + 0x70) = pvVar2;
  }
  return;
}


