// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CreateIR
// Entry Point: 00c08cdc
// Size: 116 bytes
// Signature: undefined __thiscall ~CreateIR(CreateIR * this)


/* CreateIR::~CreateIR() */

void __thiscall CreateIR::~CreateIR(CreateIR *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR_preVisitNode_00fed290;
  SHC_PoolAllocator::~SHC_PoolAllocator((SHC_PoolAllocator *)(this + 0x150));
  std::__ndk1::
  __tree<GsTFunction*,std::__ndk1::less<GsTFunction*>,std::__ndk1::allocator<GsTFunction*>>::destroy
            ((__tree<GsTFunction*,std::__ndk1::less<GsTFunction*>,std::__ndk1::allocator<GsTFunction*>>
              *)(this + 0x138),*(__tree_node **)(this + 0x140));
  pvVar1 = *(void **)(this + 0x118);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x100);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xe8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar1;
    operator_delete(pvVar1);
  }
  CodeTraverser::~CodeTraverser((CodeTraverser *)this);
  return;
}


