// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: storeMask
// Entry Point: 009d506c
// Size: 192 bytes
// Signature: undefined __thiscall storeMask(ProceduralPlacementManager * this, basic_string * param_1, ProceduralPlacementMask * param_2)


/* ProceduralPlacementManager::storeMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, ProceduralPlacementMask*)
    */

void __thiscall
ProceduralPlacementManager::storeMask
          (ProceduralPlacementManager *this,basic_string *param_1,ProceduralPlacementMask *param_2)

{
  long lVar1;
  pair pVar2;
  undefined8 uVar3;
  basic_string *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)param_2 + 0x20))(param_2);
  local_40 = param_1;
  pVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x98),(piecewise_construct_t *)param_1,
                     (tuple *)&DAT_0051ac2c,(tuple *)&local_40);
  if (*(long **)((ulong)pVar2 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)((ulong)pVar2 + 0x38) + 8))();
  }
  local_40 = param_1;
  pVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x98),(piecewise_construct_t *)param_1,
                     (tuple *)&DAT_0051ac2c,(tuple *)&local_40);
  *(undefined8 *)((ulong)pVar2 + 0x38) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


