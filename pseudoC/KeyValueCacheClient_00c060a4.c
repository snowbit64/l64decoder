// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~KeyValueCacheClient
// Entry Point: 00c060a4
// Size: 264 bytes
// Signature: undefined __thiscall ~KeyValueCacheClient(KeyValueCacheClient * this)


/* KeyValueCacheClient::~KeyValueCacheClient() */

void __thiscall KeyValueCacheClient::~KeyValueCacheClient(KeyValueCacheClient *this)

{
  __tree_node_base **pp_Var1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  undefined8 *this_00;
  __tree_node_base **pp_Var4;
  
  this_00 = (undefined8 *)(this + 0x18);
  pp_Var1 = (__tree_node_base **)*this_00;
  while (pp_Var1 != (__tree_node_base **)(this + 0x20)) {
    if ((long *)pp_Var1[5] != (long *)0x0) {
      (**(code **)(*(long *)pp_Var1[5] + 8))();
    }
    pp_Var2 = (__tree_node_base **)pp_Var1[1];
    if ((__tree_node_base **)pp_Var1[1] == (__tree_node_base **)0x0) {
      pp_Var2 = pp_Var1 + 2;
      pp_Var4 = (__tree_node_base **)*pp_Var2;
      if ((__tree_node_base **)*pp_Var4 != pp_Var1) {
        do {
          p_Var3 = *pp_Var2;
          pp_Var2 = (__tree_node_base **)(p_Var3 + 0x10);
          pp_Var4 = (__tree_node_base **)*pp_Var2;
        } while (*pp_Var4 != p_Var3);
      }
    }
    else {
      do {
        pp_Var4 = pp_Var2;
        pp_Var2 = (__tree_node_base **)*pp_Var4;
      } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
    }
    if ((__tree_node_base **)*this_00 == pp_Var1) {
      *this_00 = pp_Var4;
    }
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x20),(__tree_node_base *)pp_Var1);
    operator_delete(pp_Var1);
    pp_Var1 = pp_Var4;
  }
  Mutex::~Mutex((Mutex *)(this + 0x30));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>>>
             *)this_00,*(__tree_node **)(this + 0x20));
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


