// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CostVisitor
// Entry Point: 00eff7e4
// Size: 60 bytes
// Signature: undefined __thiscall ~CostVisitor(CostVisitor * this)


/* Luau::Compile::CostVisitor::~CostVisitor() */

void __thiscall Luau::Compile::CostVisitor::~CostVisitor(CostVisitor *this)

{
  *(undefined ***)this = &PTR__CostVisitor_01016978;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10));
  }
  operator_delete(this);
  return;
}


