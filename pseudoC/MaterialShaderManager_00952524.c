// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MaterialShaderManager
// Entry Point: 00952524
// Size: 356 bytes
// Signature: undefined __thiscall ~MaterialShaderManager(MaterialShaderManager * this)


/* MaterialShaderManager::~MaterialShaderManager() */

void __thiscall MaterialShaderManager::~MaterialShaderManager(MaterialShaderManager *this)

{
  MaterialShaderManager MVar1;
  bool bVar2;
  MaterialShaderManager **ppMVar3;
  MaterialShaderManager *pMVar4;
  undefined8 *this_00;
  CustomShaderInfo *this_01;
  MaterialShaderManager **ppMVar5;
  
  this_00 = (undefined8 *)(this + 0xd8);
  ppMVar5 = (MaterialShaderManager **)*this_00;
  while (ppMVar5 != (MaterialShaderManager **)(this + 0xe0)) {
    this_01 = (CustomShaderInfo *)ppMVar5[5];
    if (this_01 != (CustomShaderInfo *)0x0) {
      CustomShaderInfo::~CustomShaderInfo(this_01);
      operator_delete(this_01);
    }
    ppMVar3 = (MaterialShaderManager **)ppMVar5[1];
    if ((MaterialShaderManager **)ppMVar5[1] == (MaterialShaderManager **)0x0) {
      ppMVar3 = ppMVar5 + 2;
      bVar2 = *(MaterialShaderManager ***)*ppMVar3 != ppMVar5;
      ppMVar5 = (MaterialShaderManager **)*ppMVar3;
      if (bVar2) {
        do {
          pMVar4 = *ppMVar3;
          ppMVar3 = (MaterialShaderManager **)(pMVar4 + 0x10);
          ppMVar5 = (MaterialShaderManager **)*ppMVar3;
        } while (*ppMVar5 != pMVar4);
      }
    }
    else {
      do {
        ppMVar5 = ppMVar3;
        ppMVar3 = (MaterialShaderManager **)*ppMVar5;
      } while ((MaterialShaderManager **)*ppMVar5 != (MaterialShaderManager **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>>>
             *)this_00,*(__tree_node **)(this + 0xe0));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(MaterialShaderManager **)(this + 0xd8) = this + 0xe0;
  Mutex::~Mutex((Mutex *)(this + 0xf0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>>>
             *)this_00,*(__tree_node **)(this + 0xe0));
  Mutex::~Mutex((Mutex *)(this + 0xa8));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
  ::destroy((__tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
             *)(this + 0x90),*(__tree_node **)(this + 0x98));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
  ::destroy((__tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
             *)(this + 0x78),*(__tree_node **)(this + 0x80));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
             *)(this + 0x60),*(__tree_node **)(this + 0x68));
  if (((byte)this[0x48] & 1) == 0) {
    MVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    MVar1 = this[0x30];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    MVar1 = this[0x18];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    MVar1 = *this;
  }
  if (((byte)MVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


