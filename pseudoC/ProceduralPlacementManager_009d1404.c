// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementManager
// Entry Point: 009d1404
// Size: 224 bytes
// Signature: undefined __thiscall ~ProceduralPlacementManager(ProceduralPlacementManager * this)


/* ProceduralPlacementManager::~ProceduralPlacementManager() */

void __thiscall
ProceduralPlacementManager::~ProceduralPlacementManager(ProceduralPlacementManager *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__ProceduralPlacementManager_00fe2310;
  reset();
  pvVar1 = *(void **)(this + 0x140);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x148) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>>>
             *)(this + 0x118),*(__tree_node **)(this + 0x120));
  if (((byte)this[0xf0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x100));
  }
  pvVar1 = *(void **)(this + 0xb8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>>>
             *)(this + 0x98),*(__tree_node **)(this + 0xa0));
  pvVar1 = *(void **)(this + 0x80);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


