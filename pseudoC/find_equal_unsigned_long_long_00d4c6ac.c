// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __find_equal<unsigned_long_long>
// Entry Point: 00d4c6ac
// Size: 516 bytes
// Signature: __tree_node_base * * __thiscall __find_equal<unsigned_long_long>(__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>> * this, __tree_const_iterator param_1, __tree_end_node * * param_2, __tree_node_base * * param_3, ulonglong * param_4)


/* std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<unsigned long long,
   std::__ndk1::less<unsigned long long>, std::__ndk1::allocator<unsigned long long>
   >::__find_equal<unsigned long long>(std::__ndk1::__tree_const_iterator<unsigned long long,
   std::__ndk1::__tree_node<unsigned long long, void*>*, long>,
   std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   std::__ndk1::__tree_node_base<void*>*&, unsigned long long const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
::__find_equal<unsigned_long_long>
          (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
           *this,__tree_const_iterator param_1,__tree_end_node **param_2,__tree_node_base **param_3,
          ulonglong *param_4)

{
  __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
  **pp_Var1;
  __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
  **pp_Var2;
  __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
  **pp_Var3;
  __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
  *p_Var4;
  __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
  **pp_Var5;
  __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
  **pp_Var6;
  __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
  *p_Var7;
  
  pp_Var3 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
             **)(ulong)param_1;
  pp_Var1 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
             **)(this + 8);
  if (pp_Var1 != pp_Var3) {
    p_Var4 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
              *)*param_4;
    if (pp_Var3[4] <= p_Var4) {
      if (p_Var4 <= pp_Var3[4]) {
        *param_2 = (__tree_end_node *)pp_Var3;
        *param_3 = (__tree_node_base *)pp_Var3;
        return param_3;
      }
      pp_Var6 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                 **)pp_Var3[1];
      if ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
           **)pp_Var3[1] ==
          (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
           **)0x0) {
        pp_Var6 = pp_Var3 + 2;
        pp_Var5 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                   **)*pp_Var6;
        if ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
             **)*pp_Var5 != pp_Var3) {
          do {
            p_Var7 = *pp_Var6;
            pp_Var6 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                       **)(p_Var7 + 0x10);
            pp_Var5 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                       **)*pp_Var6;
          } while (*pp_Var5 != p_Var7);
        }
      }
      else {
        do {
          pp_Var5 = pp_Var6;
          pp_Var6 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                     **)*pp_Var5;
        } while ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                  **)*pp_Var5 !=
                 (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                  **)0x0);
      }
      if ((pp_Var5 == pp_Var1) || (p_Var4 < pp_Var5[4])) {
        if (pp_Var3[1] !=
            (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
             *)0x0) {
          *param_2 = (__tree_end_node *)pp_Var5;
          return (__tree_node_base **)pp_Var5;
        }
        *param_2 = (__tree_end_node *)pp_Var3;
        return (__tree_node_base **)(pp_Var3 + 1);
      }
      if ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
           **)*pp_Var1 !=
          (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
           **)0x0) {
        pp_Var3 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                   **)(this + 8);
        pp_Var1 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                   **)*pp_Var1;
        do {
          while (pp_Var6 = pp_Var1, p_Var4 < pp_Var6[4]) {
            pp_Var3 = pp_Var6;
            pp_Var1 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                       **)*pp_Var6;
            if ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                 **)*pp_Var6 ==
                (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                 **)0x0) {
              *param_2 = (__tree_end_node *)pp_Var6;
              return (__tree_node_base **)pp_Var6;
            }
          }
          if (p_Var4 <= pp_Var6[4]) break;
          pp_Var3 = pp_Var6 + 1;
          pp_Var1 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                     **)*pp_Var3;
        } while ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                  **)*pp_Var3 !=
                 (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                  **)0x0);
        *param_2 = (__tree_end_node *)pp_Var6;
        return (__tree_node_base **)pp_Var3;
      }
      goto LAB_00d4c880;
    }
  }
  pp_Var5 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
             **)*pp_Var3;
  pp_Var6 = pp_Var3;
  if (*(__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
        ***)this != pp_Var3) {
    pp_Var2 = pp_Var5;
    if (pp_Var5 ==
        (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
         **)0x0) {
      pp_Var6 = pp_Var3 + 2;
      if (*(__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
            ***)*pp_Var6 == pp_Var3) {
        do {
          p_Var4 = *pp_Var6;
          pp_Var6 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                     **)(p_Var4 + 0x10);
        } while (*(__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                   **)*pp_Var6 == p_Var4);
      }
      pp_Var6 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                 **)*pp_Var6;
      p_Var4 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                *)*param_4;
      if (pp_Var6[4] < p_Var4) goto joined_r0x00d4c730;
    }
    else {
      do {
        pp_Var6 = pp_Var2;
        pp_Var2 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                   **)pp_Var6[1];
      } while ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                **)pp_Var6[1] !=
               (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                **)0x0);
      p_Var4 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                *)*param_4;
      if (pp_Var6[4] < p_Var4) goto joined_r0x00d4c730;
    }
    if ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
         **)*pp_Var1 !=
        (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
         **)0x0) {
      pp_Var3 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                 **)(this + 8);
      pp_Var1 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                 **)*pp_Var1;
      do {
        while (pp_Var6 = pp_Var1, p_Var4 < pp_Var6[4]) {
          pp_Var3 = pp_Var6;
          pp_Var1 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                     **)*pp_Var6;
          if ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
               **)*pp_Var6 ==
              (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
               **)0x0) {
            *param_2 = (__tree_end_node *)pp_Var6;
            return (__tree_node_base **)pp_Var6;
          }
        }
        if (p_Var4 <= pp_Var6[4]) break;
        pp_Var3 = pp_Var6 + 1;
        pp_Var1 = (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                   **)*pp_Var3;
      } while ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                **)*pp_Var3 !=
               (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                **)0x0);
      *param_2 = (__tree_end_node *)pp_Var6;
      return (__tree_node_base **)pp_Var3;
    }
LAB_00d4c880:
    *param_2 = (__tree_end_node *)pp_Var1;
    return (__tree_node_base **)pp_Var1;
  }
joined_r0x00d4c730:
  if (pp_Var5 ==
      (__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
       **)0x0) {
    *param_2 = (__tree_end_node *)pp_Var3;
    return (__tree_node_base **)pp_Var3;
  }
  *param_2 = (__tree_end_node *)pp_Var6;
  return (__tree_node_base **)(pp_Var6 + 1);
}


