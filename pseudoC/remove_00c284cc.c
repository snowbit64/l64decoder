// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remove
// Entry Point: 00c284cc
// Size: 208 bytes
// Signature: undefined __thiscall remove(GsTSymbolTable * this, SHC_String * param_1)


/* GsTSymbolTable::remove(SHC_String const&) */

void __thiscall GsTSymbolTable::remove(GsTSymbolTable *this,SHC_String *param_1)

{
  __tree_iterator _Var1;
  __tree_node_base **pp_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  undefined8 *this_00;
  undefined8 *puVar2;
  
  this_00 = *(undefined8 **)
             (*(long *)this +
             ((*(long *)(this + 8) - *(long *)this) * 0x20000000 + -0x100000000 >> 0x20) * 8);
  _Var1 = std::__ndk1::
          __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
          ::find<SHC_String>((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                              *)this_00,param_1);
  puVar2 = (undefined8 *)(ulong)_Var1;
  if (this_00 + 1 == puVar2) {
    return;
  }
  if ((long *)puVar2[8] != (long *)0x0) {
    (**(code **)(*(long *)puVar2[8] + 8))();
  }
  pp_Var4 = (__tree_node_base **)puVar2[1];
  if ((__tree_node_base **)puVar2[1] == (__tree_node_base **)0x0) {
    pp_Var4 = (__tree_node_base **)(puVar2 + 2);
    pp_Var3 = (__tree_node_base **)*pp_Var4;
    if ((undefined8 *)*pp_Var3 != puVar2) {
      do {
        p_Var5 = *pp_Var4;
        pp_Var4 = (__tree_node_base **)(p_Var5 + 0x10);
        pp_Var3 = (__tree_node_base **)*pp_Var4;
      } while (*pp_Var3 != p_Var5);
    }
  }
  else {
    do {
      pp_Var3 = pp_Var4;
      pp_Var4 = (__tree_node_base **)*pp_Var3;
    } while ((__tree_node_base **)*pp_Var3 != (__tree_node_base **)0x0);
  }
  if ((undefined8 *)*this_00 == puVar2) {
    *this_00 = pp_Var3;
  }
  this_00[3] = this_00[3] + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            ((__tree_node_base *)this_00[1],(__tree_node_base *)puVar2);
  return;
}


