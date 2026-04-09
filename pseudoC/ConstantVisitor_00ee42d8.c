// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConstantVisitor
// Entry Point: 00ee42d8
// Size: 40 bytes
// Signature: undefined __thiscall ~ConstantVisitor(ConstantVisitor * this)


/* Luau::Compile::ConstantVisitor::~ConstantVisitor() */

void __thiscall Luau::Compile::ConstantVisitor::~ConstantVisitor(ConstantVisitor *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__ConstantVisitor_01016658;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


