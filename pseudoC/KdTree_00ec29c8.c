// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~KdTree
// Entry Point: 00ec29c8
// Size: 136 bytes
// Signature: undefined __thiscall ~KdTree(KdTree * this)


/* FLOAT_MATH::VERTEX_INDEX::KdTree::~KdTree() */

void __thiscall FLOAT_MATH::VERTEX_INDEX::KdTree::~KdTree(KdTree *this)

{
  void *pvVar1;
  void **ppvVar2;
  
  *(undefined8 *)(this + 0x10) = 0;
  pvVar1 = *(void **)(this + 0x40);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  *(void **)(this + 0x48) = pvVar1;
  *(undefined ***)this = &PTR_getPositionDouble_01014618;
  ppvVar2 = (void **)*(void **)(this + 0x18);
  if (*(void **)(this + 0x18) != (void *)0x0) {
    do {
      pvVar1 = *ppvVar2;
      operator_delete(ppvVar2);
      ppvVar2 = (void **)pvVar1;
    } while (pvVar1 != (void *)0x0);
    pvVar1 = *(void **)(this + 0x40);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


