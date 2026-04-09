// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IR_Struct
// Entry Point: 00c514f8
// Size: 332 bytes
// Signature: undefined __thiscall ~IR_Struct(IR_Struct * this)


/* IR_Struct::~IR_Struct() */

void __thiscall IR_Struct::~IR_Struct(IR_Struct *this)

{
  bool bVar1;
  void *pvVar2;
  long lVar3;
  IR_Struct **ppIVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  IR_Struct *pIVar8;
  IR_Struct **ppIVar9;
  
  lVar5 = *(long *)(this + 0x30);
  lVar3 = *(long *)(this + 0x38);
  if (lVar3 != lVar5) {
    uVar7 = 0;
    do {
      pvVar2 = *(void **)(lVar5 + uVar7 * 0x38 + 0x28);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        lVar5 = *(long *)(this + 0x30);
        lVar3 = *(long *)(this + 0x38);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar6 = (lVar3 - lVar5 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar7 <= uVar6 && uVar6 - uVar7 != 0);
  }
  ppIVar9 = *(IR_Struct ***)(this + 0x58);
  while (ppIVar9 != (IR_Struct **)(this + 0x60)) {
    pIVar8 = ppIVar9[5];
    if (pIVar8 != (IR_Struct *)0x0) {
      ~IR_Struct(pIVar8);
      operator_delete(pIVar8);
    }
    ppIVar4 = (IR_Struct **)ppIVar9[1];
    if ((IR_Struct **)ppIVar9[1] == (IR_Struct **)0x0) {
      ppIVar4 = ppIVar9 + 2;
      bVar1 = *(IR_Struct ***)*ppIVar4 != ppIVar9;
      ppIVar9 = (IR_Struct **)*ppIVar4;
      if (bVar1) {
        do {
          pIVar8 = *ppIVar4;
          ppIVar4 = (IR_Struct **)(pIVar8 + 0x10);
          ppIVar9 = (IR_Struct **)*ppIVar4;
        } while (*ppIVar9 != pIVar8);
      }
    }
    else {
      do {
        ppIVar9 = ppIVar4;
        ppIVar4 = (IR_Struct **)*ppIVar9;
      } while ((IR_Struct **)*ppIVar9 != (IR_Struct **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<IR_Type*,IR_Struct*>,std::__ndk1::__map_value_compare<IR_Type*,std::__ndk1::__value_type<IR_Type*,IR_Struct*>,std::__ndk1::less<IR_Type*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IR_Type*,IR_Struct*>>>
  ::destroy((__tree<std::__ndk1::__value_type<IR_Type*,IR_Struct*>,std::__ndk1::__map_value_compare<IR_Type*,std::__ndk1::__value_type<IR_Type*,IR_Struct*>,std::__ndk1::less<IR_Type*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IR_Type*,IR_Struct*>>>
             *)(this + 0x58),*(__tree_node **)(this + 0x60));
  pvVar2 = *(void **)(this + 0x30);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


