// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNumSubsets
// Entry Point: 00b7967c
// Size: 108 bytes
// Signature: undefined __thiscall setNumSubsets(IndexedTriangleSet * this, uint param_1)


/* IndexedTriangleSet::setNumSubsets(unsigned int) */

void __thiscall IndexedTriangleSet::setNumSubsets(IndexedTriangleSet *this,uint param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0x78) == 0) {
    puVar1 = (undefined8 *)operator_new__((ulong)param_1 << 3);
    *(undefined8 **)(this + 0x80) = puVar1;
    if ((param_1 != 0) && (*puVar1 = 0, param_1 != 1)) {
      uVar2 = 1;
      do {
        *(undefined8 *)(*(long *)(this + 0x80) + uVar2 * 8) = 0;
        uVar2 = uVar2 + 1;
      } while (param_1 != uVar2);
    }
    *(uint *)(this + 0x78) = param_1;
  }
  return;
}


