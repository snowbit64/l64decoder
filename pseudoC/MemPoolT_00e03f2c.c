// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MemPoolT
// Entry Point: 00e03f2c
// Size: 124 bytes
// Signature: undefined __thiscall ~MemPoolT(MemPoolT<112> * this)


/* tinyxml2::MemPoolT<112>::~MemPoolT() */

void __thiscall tinyxml2::MemPoolT<112>::~MemPoolT(MemPoolT<112> *this)

{
  int iVar1;
  MemPoolT<112> *pMVar2;
  void *pvVar3;
  
  iVar1 = *(int *)(this + 100);
  *(undefined ***)this = &PTR__MemPoolT_01013908;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    pvVar3 = *(void **)(*(long *)(this + 8) + (long)iVar1 * 8);
    *(int *)(this + 100) = iVar1;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
      iVar1 = *(int *)(this + 100);
    }
  }
  pMVar2 = *(MemPoolT<112> **)(this + 8);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  if ((pMVar2 != this + 0x10) && (pMVar2 != (MemPoolT<112> *)0x0)) {
    operator_delete__(pMVar2);
  }
  operator_delete(this);
  return;
}


