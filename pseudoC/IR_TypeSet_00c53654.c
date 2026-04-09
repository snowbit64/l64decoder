// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IR_TypeSet
// Entry Point: 00c53654
// Size: 1480 bytes
// Signature: undefined __thiscall ~IR_TypeSet(IR_TypeSet * this)


/* IR_TypeSet::~IR_TypeSet() */

void __thiscall IR_TypeSet::~IR_TypeSet(IR_TypeSet *this)

{
  bool bVar1;
  void *pvVar2;
  IR_TypeSet **ppIVar3;
  IR_TypeSet *pIVar4;
  int *piVar5;
  IR_Struct *pIVar6;
  IR_Function *this_00;
  long lVar7;
  ulong uVar8;
  long lVar9;
  IR_TypeSet **ppIVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar7 = 0;
  lVar9 = 0;
  lVar11 = 0;
  do {
    if ((this[lVar11 * 0x10 + 8] != (IR_TypeSet)0x0) &&
       (piVar5 = *(int **)(this + lVar11 * 0x10), piVar5 != (int *)0x0)) {
      if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
        IR_Struct::~IR_Struct(pIVar6);
        operator_delete(pIVar6);
      }
      operator_delete(piVar5);
    }
    lVar13 = 4;
    lVar12 = lVar7;
    lVar14 = lVar9;
    do {
      if ((this[lVar14 + 0xa8] != (IR_TypeSet)0x0) &&
         (piVar5 = *(int **)(this + lVar14 + 0xa0), piVar5 != (int *)0x0)) {
        if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
          IR_Struct::~IR_Struct(pIVar6);
          operator_delete(pIVar6);
        }
        operator_delete(piVar5);
      }
      if ((this[lVar12 + 0x328] != (IR_TypeSet)0x0) &&
         (piVar5 = *(int **)(this + lVar12 + 800), piVar5 != (int *)0x0)) {
        if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
          IR_Struct::~IR_Struct(pIVar6);
          operator_delete(pIVar6);
        }
        operator_delete(piVar5);
      }
      if ((this[lVar12 + 0x338] != (IR_TypeSet)0x0) &&
         (piVar5 = *(int **)(this + lVar12 + 0x330), piVar5 != (int *)0x0)) {
        if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
          IR_Struct::~IR_Struct(pIVar6);
          operator_delete(pIVar6);
        }
        operator_delete(piVar5);
      }
      if ((this[lVar12 + 0x348] != (IR_TypeSet)0x0) &&
         (piVar5 = *(int **)(this + lVar12 + 0x340), piVar5 != (int *)0x0)) {
        if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
          IR_Struct::~IR_Struct(pIVar6);
          operator_delete(pIVar6);
        }
        operator_delete(piVar5);
      }
      if ((this[lVar12 + 0x358] != (IR_TypeSet)0x0) &&
         (piVar5 = *(int **)(this + lVar12 + 0x350), piVar5 != (int *)0x0)) {
        if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
          IR_Struct::~IR_Struct(pIVar6);
          operator_delete(pIVar6);
        }
        operator_delete(piVar5);
      }
      lVar14 = lVar14 + 0x10;
      lVar13 = lVar13 + -1;
      lVar12 = lVar12 + 0x40;
    } while (lVar13 != 0);
    lVar11 = lVar11 + 1;
    lVar9 = lVar9 + 0x40;
    lVar7 = lVar7 + 0x100;
  } while (lVar11 != 10);
  if ((this[0xd28] != (IR_TypeSet)0x0) && (piVar5 = *(int **)(this + 0xd20), piVar5 != (int *)0x0))
  {
    if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
      IR_Struct::~IR_Struct(pIVar6);
      operator_delete(pIVar6);
    }
    operator_delete(piVar5);
  }
  if ((this[0xd38] != (IR_TypeSet)0x0) && (piVar5 = *(int **)(this + 0xd30), piVar5 != (int *)0x0))
  {
    if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
      IR_Struct::~IR_Struct(pIVar6);
      operator_delete(pIVar6);
    }
    operator_delete(piVar5);
  }
  lVar11 = *(long *)(this + 0xd48);
  lVar9 = *(long *)(this + 0xd40);
  if (lVar11 != lVar9) {
    uVar8 = 0;
    do {
      if ((*(char *)(lVar9 + uVar8 * 0x10 + 8) != '\0') &&
         (piVar5 = *(int **)(lVar9 + uVar8 * 0x10), piVar5 != (int *)0x0)) {
        if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
          IR_Struct::~IR_Struct(pIVar6);
          operator_delete(pIVar6);
        }
        operator_delete(piVar5);
        lVar11 = *(long *)(this + 0xd48);
        lVar9 = *(long *)(this + 0xd40);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar11 - lVar9 >> 4));
  }
  lVar11 = *(long *)(this + 0xd60);
  lVar9 = *(long *)(this + 0xd58);
  if (lVar11 != lVar9) {
    uVar8 = 0;
    do {
      if ((*(char *)(lVar9 + uVar8 * 0x10 + 8) != '\0') &&
         (piVar5 = *(int **)(lVar9 + uVar8 * 0x10), piVar5 != (int *)0x0)) {
        if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
          IR_Struct::~IR_Struct(pIVar6);
          operator_delete(pIVar6);
        }
        operator_delete(piVar5);
        lVar11 = *(long *)(this + 0xd60);
        lVar9 = *(long *)(this + 0xd58);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar11 - lVar9 >> 4));
  }
  lVar11 = *(long *)(this + 0xd78);
  lVar9 = *(long *)(this + 0xd70);
  if (lVar11 != lVar9) {
    uVar8 = 0;
    do {
      if ((*(char *)(lVar9 + uVar8 * 0x10 + 8) != '\0') &&
         (piVar5 = *(int **)(lVar9 + uVar8 * 0x10), piVar5 != (int *)0x0)) {
        if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
          IR_Struct::~IR_Struct(pIVar6);
          operator_delete(pIVar6);
        }
        operator_delete(piVar5);
        lVar11 = *(long *)(this + 0xd78);
        lVar9 = *(long *)(this + 0xd70);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar11 - lVar9 >> 4));
  }
  lVar11 = *(long *)(this + 0xd90);
  lVar9 = *(long *)(this + 0xd88);
  if (lVar11 != lVar9) {
    uVar8 = 0;
    do {
      if ((*(char *)(lVar9 + uVar8 * 0x10 + 8) != '\0') &&
         (piVar5 = *(int **)(lVar9 + uVar8 * 0x10), piVar5 != (int *)0x0)) {
        if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
          IR_Struct::~IR_Struct(pIVar6);
          operator_delete(pIVar6);
        }
        operator_delete(piVar5);
        lVar11 = *(long *)(this + 0xd90);
        lVar9 = *(long *)(this + 0xd88);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar11 - lVar9 >> 4));
  }
  lVar11 = *(long *)(this + 0xda8);
  lVar9 = *(long *)(this + 0xda0);
  if (lVar11 != lVar9) {
    uVar8 = 0;
    do {
      if ((*(char *)(lVar9 + uVar8 * 0x10 + 8) != '\0') &&
         (piVar5 = *(int **)(lVar9 + uVar8 * 0x10), piVar5 != (int *)0x0)) {
        if ((*piVar5 == 3) && (pIVar6 = *(IR_Struct **)(piVar5 + 2), pIVar6 != (IR_Struct *)0x0)) {
          IR_Struct::~IR_Struct(pIVar6);
          operator_delete(pIVar6);
        }
        operator_delete(piVar5);
        lVar11 = *(long *)(this + 0xda8);
        lVar9 = *(long *)(this + 0xda0);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar11 - lVar9 >> 4));
  }
  ppIVar10 = *(IR_TypeSet ***)(this + 0xdb8);
  while (ppIVar10 != (IR_TypeSet **)(this + 0xdc0)) {
    this_00 = (IR_Function *)ppIVar10[7];
    if (this_00 != (IR_Function *)0x0) {
      IR_Function::~IR_Function(this_00);
      operator_delete(this_00);
    }
    ppIVar3 = (IR_TypeSet **)ppIVar10[1];
    if ((IR_TypeSet **)ppIVar10[1] == (IR_TypeSet **)0x0) {
      ppIVar3 = ppIVar10 + 2;
      bVar1 = *(IR_TypeSet ***)*ppIVar3 != ppIVar10;
      ppIVar10 = (IR_TypeSet **)*ppIVar3;
      if (bVar1) {
        do {
          pIVar4 = *ppIVar3;
          ppIVar3 = (IR_TypeSet **)(pIVar4 + 0x10);
          ppIVar10 = (IR_TypeSet **)*ppIVar3;
        } while (*ppIVar10 != pIVar4);
      }
    }
    else {
      do {
        ppIVar10 = ppIVar3;
        ppIVar3 = (IR_TypeSet **)*ppIVar10;
      } while ((IR_TypeSet **)*ppIVar10 != (IR_TypeSet **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>>>
             *)(this + 0xdb8),*(__tree_node **)(this + 0xdc0));
  pvVar2 = *(void **)(this + 0xda0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xda8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xd88);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xd90) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xd70);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xd78) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xd58);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xd60) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xd40);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0xd48) = pvVar2;
  operator_delete(pvVar2);
  return;
}


