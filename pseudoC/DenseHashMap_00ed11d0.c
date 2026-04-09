// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DenseHashMap
// Entry Point: 00ed11d0
// Size: 104 bytes
// Signature: undefined __thiscall ~DenseHashMap(DenseHashMap<Luau::AstExprFunction*,Luau::Compiler::Function,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprFunction*>> * this)


/* Luau::DenseHashMap<Luau::AstExprFunction*, Luau::Compiler::Function, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstExprFunction*> >::~DenseHashMap() */

void __thiscall
Luau::
DenseHashMap<Luau::AstExprFunction*,Luau::Compiler::Function,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprFunction*>>
::~DenseHashMap(DenseHashMap<Luau::AstExprFunction*,Luau::Compiler::Function,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprFunction*>>
                *this)

{
  void *pvVar1;
  long lVar2;
  void **ppvVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    lVar2 = *(long *)(this + 8);
    if (lVar2 != 0) {
      ppvVar3 = (void **)((long)pvVar1 + 0x18);
      do {
        pvVar1 = ppvVar3[-1];
        if (pvVar1 != (void *)0x0) {
          *ppvVar3 = pvVar1;
          operator_delete(pvVar1);
        }
        lVar2 = lVar2 + -1;
        ppvVar3 = ppvVar3 + 7;
      } while (lVar2 != 0);
      pvVar1 = *(void **)this;
    }
    operator_delete(pvVar1);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


