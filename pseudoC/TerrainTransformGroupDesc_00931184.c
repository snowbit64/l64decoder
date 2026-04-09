// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainTransformGroupDesc
// Entry Point: 00931184
// Size: 564 bytes
// Signature: undefined __thiscall ~TerrainTransformGroupDesc(TerrainTransformGroupDesc * this)


/* TerrainTransformGroupDesc::~TerrainTransformGroupDesc() */

void __thiscall
TerrainTransformGroupDesc::~TerrainTransformGroupDesc(TerrainTransformGroupDesc *this)

{
  TerrainTransformGroupDesc TVar1;
  byte *pbVar2;
  void *pvVar3;
  byte *pbVar4;
  void *pvVar5;
  byte *pbVar6;
  void *pvVar7;
  
  if (((byte)this[0xf8] & 1) == 0) {
    TVar1 = this[0xe0];
  }
  else {
    operator_delete(*(void **)(this + 0x108));
    TVar1 = this[0xe0];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[200];
  }
  else {
    operator_delete(*(void **)(this + 0xf0));
    TVar1 = this[200];
  }
  if (((byte)TVar1 & 1) == 0) {
    pvVar3 = *(void **)(this + 0x98);
  }
  else {
    operator_delete(*(void **)(this + 0xd8));
    pvVar3 = *(void **)(this + 0x98);
  }
  if (pvVar3 == (void *)0x0) {
    pvVar3 = *(void **)(this + 0x80);
  }
  else {
    pvVar7 = pvVar3;
    pvVar5 = *(void **)(this + 0xa0);
    if (*(void **)(this + 0xa0) != pvVar3) {
      do {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
        ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                   *)((long)pvVar5 + -0x18),*(__tree_node **)((long)pvVar5 + -0x10));
        if ((*(byte *)((long)pvVar5 + -0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x28));
        }
        pvVar7 = (void *)((long)pvVar5 + -0x50);
        if ((*(byte *)((long)pvVar5 + -0x50) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x40));
        }
        pvVar5 = pvVar7;
      } while (pvVar7 != pvVar3);
      pvVar7 = *(void **)(this + 0x98);
    }
    *(void **)(this + 0xa0) = pvVar3;
    operator_delete(pvVar7);
    pvVar3 = *(void **)(this + 0x80);
  }
  if (pvVar3 == (void *)0x0) {
    pbVar4 = *(byte **)(this + 0x68);
  }
  else {
    pvVar5 = *(void **)(this + 0x88);
    pvVar7 = pvVar3;
    if (pvVar5 != pvVar3) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x50);
        FUN_0093d76c(this + 0x90,pvVar5);
      } while (pvVar5 != pvVar3);
      pvVar7 = *(void **)(this + 0x80);
    }
    *(void **)(this + 0x88) = pvVar3;
    operator_delete(pvVar7);
    pbVar4 = *(byte **)(this + 0x68);
  }
  if (pbVar4 == (byte *)0x0) {
    pvVar3 = *(void **)(this + 0x50);
  }
  else {
    pbVar2 = *(byte **)(this + 0x70);
    pbVar6 = pbVar4;
    if (pbVar2 != pbVar4) {
      do {
        pbVar6 = pbVar2 + -0x30;
        if ((*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x20));
        }
        pbVar2 = pbVar6;
      } while (pbVar6 != pbVar4);
      pbVar6 = *(byte **)(this + 0x68);
    }
    *(byte **)(this + 0x70) = pbVar4;
    operator_delete(pbVar6);
    pvVar3 = *(void **)(this + 0x50);
  }
  if (pvVar3 == (void *)0x0) {
    pvVar3 = *(void **)(this + 0x38);
  }
  else {
    pvVar5 = *(void **)(this + 0x58);
    pvVar7 = pvVar3;
    if (pvVar5 != pvVar3) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x90);
        FUN_0093d828(this + 0x60,pvVar5);
      } while (pvVar5 != pvVar3);
      pvVar7 = *(void **)(this + 0x50);
    }
    *(void **)(this + 0x58) = pvVar3;
    operator_delete(pvVar7);
    pvVar3 = *(void **)(this + 0x38);
  }
  if (pvVar3 == (void *)0x0) {
    TVar1 = *this;
  }
  else {
    pvVar5 = *(void **)(this + 0x40);
    pvVar7 = pvVar3;
    if (pvVar5 != pvVar3) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0xa8);
        FUN_0093d8bc(this + 0x48,pvVar5);
      } while (pvVar5 != pvVar3);
      pvVar7 = *(void **)(this + 0x38);
    }
    *(void **)(this + 0x40) = pvVar3;
    operator_delete(pvVar7);
    TVar1 = *this;
  }
  if (((byte)TVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


