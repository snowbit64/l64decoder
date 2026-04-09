// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00b3348c
// Size: 112 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long long,
   Lockable<FileManager::AccessHistory> >, std::__ndk1::__map_value_compare<unsigned long long,
   std::__ndk1::__value_type<unsigned long long, Lockable<FileManager::AccessHistory> >,
   std::__ndk1::less<unsigned long long>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long long,
   Lockable<FileManager::AccessHistory> > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long long,
   Lockable<FileManager::AccessHistory> >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>>>
          *this,__tree_node *param_1)

{
  long lVar1;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    lVar1 = 0xc80;
    do {
      if (((byte)param_1[lVar1 + 0x30] & 1) != 0) {
        operator_delete(*(void **)(param_1 + lVar1 + 0x40));
      }
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
    Mutex::~Mutex((Mutex *)(param_1 + 0x28));
    operator_delete(param_1);
    return;
  }
  return;
}


