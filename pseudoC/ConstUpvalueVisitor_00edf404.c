// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConstUpvalueVisitor
// Entry Point: 00edf404
// Size: 64 bytes
// Signature: undefined __thiscall ~ConstUpvalueVisitor(ConstUpvalueVisitor * this)


/* Luau::Compiler::ConstUpvalueVisitor::~ConstUpvalueVisitor() */

void __thiscall Luau::Compiler::ConstUpvalueVisitor::~ConstUpvalueVisitor(ConstUpvalueVisitor *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x10);
  *(undefined ***)this = &PTR__ConstUpvalueVisitor_01015178;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


