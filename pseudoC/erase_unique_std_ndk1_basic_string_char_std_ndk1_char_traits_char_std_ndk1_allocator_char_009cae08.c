// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __erase_unique<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
// Entry Point: 009cae08
// Size: 188 bytes
// Signature: ulong __thiscall __erase_unique<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>>> * this, basic_string * param_1)


/* unsigned long std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   ProceduralPlacementDistanceMatrix::DistanceMatrixType*> >
   >::__erase_unique<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

ulong __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>>>
::
__erase_unique<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>>>
           *this,basic_string *param_1)

{
  __tree_iterator _Var1;
  ulong uVar3;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var2;
  
  _Var1 = find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (this,param_1);
  p_Var2 = (__tree_node_base *)(ulong)_Var1;
  if (this + 8 ==
      (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>>>
       *)p_Var2) {
    uVar3 = 0;
  }
  else {
    pp_Var5 = *(__tree_node_base ***)(p_Var2 + 8);
    if (*(__tree_node_base ***)(p_Var2 + 8) == (__tree_node_base **)0x0) {
      pp_Var5 = (__tree_node_base **)(p_Var2 + 0x10);
      pp_Var4 = (__tree_node_base **)*pp_Var5;
      if (*pp_Var4 != p_Var2) {
        do {
          p_Var6 = *pp_Var5;
          pp_Var5 = (__tree_node_base **)(p_Var6 + 0x10);
          pp_Var4 = (__tree_node_base **)*pp_Var5;
        } while (*pp_Var4 != p_Var6);
      }
    }
    else {
      do {
        pp_Var4 = pp_Var5;
        pp_Var5 = (__tree_node_base **)*pp_Var4;
      } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
    }
    if (*(__tree_node_base **)this == p_Var2) {
      *(__tree_node_base ***)this = pp_Var4;
    }
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
    __tree_remove<std::__ndk1::__tree_node_base<void*>*>(*(__tree_node_base **)(this + 8),p_Var2);
    if (((byte)p_Var2[0x20] & 1) != 0) {
      operator_delete(*(void **)(p_Var2 + 0x30));
    }
    operator_delete(p_Var2);
    uVar3 = 1;
  }
  return uVar3;
}


