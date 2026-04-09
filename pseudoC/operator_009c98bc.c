// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 009c98bc
// Size: 240 bytes
// Signature: undefined __thiscall operator=(DistanceMatrixType * this, DistanceMatrixType * param_1)


/* ProceduralPlacementDistanceMatrix::DistanceMatrixType::TEMPNAMEPLACEHOLDERVALUE(ProceduralPlacementDistanceMatrix::DistanceMatrixType
   const&) */

DistanceMatrixType * __thiscall
ProceduralPlacementDistanceMatrix::DistanceMatrixType::operator=
          (DistanceMatrixType *this,DistanceMatrixType *param_1)

{
  __tree_node **pp_Var1;
  __tree_node **pp_Var2;
  __tree_node **pp_Var3;
  __tree_node *p_Var4;
  __tree_node **pp_Var5;
  float fVar6;
  float fVar7;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,
            (basic_string *)param_1);
  pp_Var5 = (__tree_node **)(this + 0x20);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
             *)(this + 0x18),*pp_Var5);
  *(__tree_node ***)(this + 0x18) = pp_Var5;
  *(undefined8 *)(this + 0x28) = 0;
  *pp_Var5 = (__tree_node *)0x0;
  if (this == param_1) {
    *(undefined4 *)(this + 0x30) = 0;
  }
  else {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,void*>*,long>>
              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                *)(this + 0x18),(__tree_const_iterator)*(undefined8 *)(param_1 + 0x18),
               (int)param_1 + 0x20);
    *(undefined4 *)(this + 0x30) = 0;
    if (*(__tree_node ***)(this + 0x18) != pp_Var5) {
      fVar6 = 0.0;
      pp_Var1 = *(__tree_node ***)(this + 0x18);
      do {
        fVar7 = (float)*(int *)(pp_Var1 + 7);
        if (fVar6 < fVar7) {
          *(float *)(this + 0x30) = fVar7;
          fVar6 = fVar7;
        }
        pp_Var2 = (__tree_node **)pp_Var1[1];
        if ((__tree_node **)pp_Var1[1] == (__tree_node **)0x0) {
          pp_Var2 = pp_Var1 + 2;
          pp_Var3 = (__tree_node **)*pp_Var2;
          if ((__tree_node **)*pp_Var3 != pp_Var1) {
            do {
              p_Var4 = *pp_Var2;
              pp_Var2 = (__tree_node **)(p_Var4 + 0x10);
              pp_Var3 = (__tree_node **)*pp_Var2;
            } while (*pp_Var3 != p_Var4);
          }
        }
        else {
          do {
            pp_Var3 = pp_Var2;
            pp_Var2 = (__tree_node **)*pp_Var3;
          } while ((__tree_node **)*pp_Var3 != (__tree_node **)0x0);
        }
        pp_Var1 = pp_Var3;
      } while (pp_Var3 != pp_Var5);
    }
  }
  return this;
}


