// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IR_Function
// Entry Point: 00c28834
// Size: 316 bytes
// Signature: undefined __thiscall ~IR_Function(IR_Function * this)


/* IR_Function::~IR_Function() */

void __thiscall IR_Function::~IR_Function(IR_Function *this)

{
  IR_Function IVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  IR_Section *this_00;
  ulong uVar6;
  void *pvVar7;
  
  lVar5 = *(long *)(this + 0xb8);
  lVar3 = *(long *)(this + 0xc0);
  if (lVar3 != lVar5) {
    uVar6 = 0;
    do {
      this_00 = *(IR_Section **)(lVar5 + uVar6 * 8);
      if (this_00 != (IR_Section *)0x0) {
        IR_Section::~IR_Section(this_00);
        operator_delete(this_00);
        lVar5 = *(long *)(this + 0xb8);
        lVar3 = *(long *)(this + 0xc0);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(lVar3 - lVar5 >> 3));
  }
  std::__ndk1::
  __tree<IR_Function*,std::__ndk1::less<IR_Function*>,std::__ndk1::allocator<IR_Function*>>::destroy
            ((__tree<IR_Function*,std::__ndk1::less<IR_Function*>,std::__ndk1::allocator<IR_Function*>>
              *)(this + 0xd8),*(__tree_node **)(this + 0xe0));
  pvVar2 = *(void **)(this + 0xb8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xa0);
  if (pvVar2 != (void *)0x0) {
    pvVar7 = pvVar2;
    pvVar4 = *(void **)(this + 0xa8);
    if (*(void **)(this + 0xa8) != pvVar2) {
      do {
        pvVar7 = (void *)((long)pvVar4 + -0x28);
        if ((*(byte *)((long)pvVar4 + -0x20) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar4 + -0x10));
        }
        pvVar4 = pvVar7;
      } while (pvVar7 != pvVar2);
      pvVar7 = *(void **)(this + 0xa0);
    }
    *(void **)(this + 0xa8) = pvVar2;
    operator_delete(pvVar7);
  }
  pvVar2 = *(void **)(this + 0x80);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x68);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x40] & 1) == 0) {
    IVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    IVar1 = this[0x18];
  }
  if (((byte)IVar1 & 1) == 0) {
    IVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    IVar1 = *this;
  }
  if (((byte)IVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


