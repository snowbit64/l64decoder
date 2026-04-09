// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Shape
// Entry Point: 00a65340
// Size: 124 bytes
// Signature: undefined __thiscall ~Shape(Shape * this)


/* FoliageSystemDesc::Shape::~Shape() */

void __thiscall FoliageSystemDesc::Shape::~Shape(Shape *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar2;
  pvVar1 = *(void **)(this + 0x10);
  if (*(void **)(this + 0x10) != pvVar2) {
    do {
      pvVar3 = (void *)((long)pvVar1 + -0x40);
      if ((*(byte *)((long)pvVar1 + -0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar1 + -0x28));
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
    pvVar3 = *(void **)(this + 8);
  }
  *(void **)(this + 0x10) = pvVar2;
  operator_delete(pvVar3);
  return;
}


