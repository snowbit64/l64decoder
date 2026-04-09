// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00c0f760
// Size: 348 bytes
// Signature: undefined __thiscall insert(GsTSymbolTableLevel * this, GsTSymbol * param_1)


/* GsTSymbolTableLevel::insert(GsTSymbol*) */

void __thiscall GsTSymbolTableLevel::insert(GsTSymbolTableLevel *this,GsTSymbol *param_1)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  ulong *puVar3;
  void *__dest;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  ulong uVar6;
  undefined8 local_90;
  ulong uStack_88;
  void *local_80;
  SHC_PoolAllocator *local_78;
  GsTSymbol *local_70;
  __tree_end_node *local_68;
  undefined8 *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (ulong *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
  local_78 = (SHC_PoolAllocator *)puVar3[3];
  if ((*(byte *)puVar3 & 1) == 0) {
    local_80 = (void *)puVar3[2];
    uStack_88 = puVar3[1];
    local_90 = *puVar3;
  }
  else {
    uVar1 = puVar3[1];
    __src = (void *)puVar3[2];
    if (uVar1 < 0x17) {
      __dest = (void *)((ulong)&local_90 | 1);
      local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar1 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)SHC_PoolAllocator::allocate(local_78,uVar6);
      local_90 = uVar6 | 1;
      uStack_88 = uVar1;
      local_80 = __dest;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  local_70 = param_1;
  pp_Var4 = std::__ndk1::
            __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
            ::__find_equal<SHC_String>
                      ((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                        *)this,&local_68,(SHC_String *)&local_90);
  p_Var5 = *pp_Var4;
  if (p_Var5 == (__tree_node_base *)0x0) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
    ::__construct_node<std::__ndk1::pair<SHC_String_const,GsTSymbol*>const&>((pair *)this);
    *local_60 = 0;
    local_60[1] = 0;
    local_60[2] = local_68;
    *pp_Var4 = (__tree_node_base *)local_60;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      local_60 = (undefined8 *)*pp_Var4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)local_60);
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(p_Var5 == (__tree_node_base *)0x0);
}


