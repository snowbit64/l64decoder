// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ShapeVisitor
// Entry Point: 00f00a18
// Size: 100 bytes
// Signature: undefined __thiscall ~ShapeVisitor(ShapeVisitor * this)


/* Luau::Compile::ShapeVisitor::~ShapeVisitor() */

void __thiscall Luau::Compile::ShapeVisitor::~ShapeVisitor(ShapeVisitor *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x68);
  *(undefined ***)this = &PTR__ShapeVisitor_01016b70;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    *(void **)(this + 0x68) = (void *)0x0;
    *(undefined8 *)(this + 0x70) = 0;
  }
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    *(void **)(this + 0x38) = (void *)0x0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    *(void **)(this + 0x10) = (void *)0x0;
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}


