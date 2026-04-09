// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ChunkedBitSquare
// Entry Point: 00b87cf8
// Size: 104 bytes
// Signature: undefined __thiscall ~ChunkedBitSquare(ChunkedBitSquare * this)


/* ChunkedBitSquare::~ChunkedBitSquare() */

void __thiscall ChunkedBitSquare::~ChunkedBitSquare(ChunkedBitSquare *this)

{
  void *pvVar1;
  ulong uVar2;
  
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x34) * *(int *)(this + 0xc) != 0) {
    uVar2 = 0;
    do {
      operator_delete(*(void **)((long)pvVar1 + uVar2 * 8));
      uVar2 = uVar2 + 1;
      pvVar1 = *(void **)(this + 0x28);
    } while (uVar2 < (uint)(*(int *)(this + 0x34) * *(int *)(this + 0xc)));
    if (pvVar1 == (void *)0x0) goto LAB_00b87d50;
  }
  operator_delete__(pvVar1);
LAB_00b87d50:
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


