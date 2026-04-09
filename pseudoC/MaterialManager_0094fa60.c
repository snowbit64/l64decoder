// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MaterialManager
// Entry Point: 0094fa60
// Size: 84 bytes
// Signature: undefined __thiscall ~MaterialManager(MaterialManager * this)


/* MaterialManager::~MaterialManager() */

void __thiscall MaterialManager::~MaterialManager(MaterialManager *this)

{
  Mutex::~Mutex((Mutex *)(this + 0xa0));
  Mutex::~Mutex((Mutex *)(this + 0x78));
  Mutex::~Mutex((Mutex *)(this + 0x50));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>>>
             *)(this + 0x38),*(__tree_node **)(this + 0x40));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>,std::__ndk1::__map_value_compare<GsMaterial*,std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>,std::__ndk1::less<GsMaterial*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>,std::__ndk1::__map_value_compare<GsMaterial*,std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>,std::__ndk1::less<GsMaterial*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>>>
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>>
  ::destroy((__tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>>
             *)(this + 8),*(__tree_node **)(this + 0x10));
  return;
}


