// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CostVisitor
// Entry Point: 00eff458
// Size: 60 bytes
// Signature: undefined __thiscall ~CostVisitor(CostVisitor * this)


/* Luau::Compile::CostVisitor::~CostVisitor() */

void __thiscall Luau::Compile::CostVisitor::~CostVisitor(CostVisitor *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__CostVisitor_01016978;
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    *(void **)(this + 0x10) = (void *)0x0;
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}


