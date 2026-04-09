// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~UserBlockManager
// Entry Point: 00c6596c
// Size: 296 bytes
// Signature: undefined __thiscall ~UserBlockManager(UserBlockManager * this)


/* UserBlockManager::~UserBlockManager() */

void __thiscall UserBlockManager::~UserBlockManager(UserBlockManager *this)

{
  void *pvVar1;
  Thread *this_00;
  long lVar2;
  
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined ***)this = &PTR_onProfileFileDownloaded_00fee9d0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  if (*(long *)(this + 200) != 0) {
                    /* try { // try from 00c659c0 to 00c659cb has its CatchHandler @ 00c65a94 */
    Thread::cancel();
    Event::post();
    this_00 = *(Thread **)(this + 200);
    if (this_00 != (Thread *)0x0) {
      Thread::~Thread(this_00);
      operator_delete(this_00);
    }
  }
  lVar2 = 0x3c0;
  do {
    if (((byte)this[lVar2 + 200] & 1) != 0) {
      operator_delete(*(void **)(this + lVar2 + 0xd8));
    }
    if (((byte)this[lVar2 + 0xb0] & 1) != 0) {
      operator_delete(*(void **)(this + lVar2 + 0xc0));
    }
    if (((byte)this[lVar2 + 0x98] & 1) != 0) {
      operator_delete(*(void **)(this + lVar2 + 0xa8));
    }
    lVar2 = lVar2 + -0x60;
  } while (lVar2 != 0);
  Mutex::~Mutex((Mutex *)(this + 0xd0));
  Event::~Event((Event *)(this + 0x68));
  std::__ndk1::
  __vector_base<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>>
  ::~__vector_base((__vector_base<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>>
                    *)(this + 0x50));
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
  ::__deallocate_node((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
                       *)(this + 0x28),*(__hash_node_base **)(this + 0x38));
  pvVar1 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


