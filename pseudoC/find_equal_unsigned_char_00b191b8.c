// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __find_equal<unsigned_char>
// Entry Point: 00b191b8
// Size: 504 bytes
// Signature: __tree_node_base * * __thiscall __find_equal<unsigned_char>(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>> * this, __tree_const_iterator param_1, __tree_end_node * * param_2, __tree_node_base * * param_3, uchar * param_4)


/* std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<unsigned char,
   std::__ndk1::less<unsigned char>, std::__ndk1::allocator<unsigned char> >::__find_equal<unsigned
   char>(std::__ndk1::__tree_const_iterator<unsigned char, std::__ndk1::__tree_node<unsigned char,
   void*>*, long>, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   std::__ndk1::__tree_node_base<void*>*&, unsigned char const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
__find_equal<unsigned_char>
          (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           *this,__tree_const_iterator param_1,__tree_end_node **param_2,__tree_node_base **param_3,
          uchar *param_4)

{
  __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
  **pp_Var1;
  __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>> _Var2
  ;
  __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
  **pp_Var3;
  __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
  **pp_Var4;
  __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
  **pp_Var5;
  __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
  **pp_Var6;
  __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
  *p_Var7;
  
  pp_Var4 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
             **)(ulong)param_1;
  pp_Var1 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
             **)(this + 8);
  if (pp_Var1 != pp_Var4) {
    _Var2 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
             )*param_4;
    if ((byte)*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                *)((long)pp_Var4 + 0x19) <= (byte)_Var2) {
      if ((byte)_Var2 <=
          (byte)*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                  *)((long)pp_Var4 + 0x19)) {
        *param_2 = (__tree_end_node *)pp_Var4;
        *param_3 = (__tree_node_base *)pp_Var4;
        return param_3;
      }
      pp_Var6 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                 **)pp_Var4[1];
      if ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           **)pp_Var4[1] ==
          (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           **)0x0) {
        pp_Var6 = pp_Var4 + 2;
        pp_Var5 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                   **)*pp_Var6;
        if ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
             **)*pp_Var5 != pp_Var4) {
          do {
            p_Var7 = *pp_Var6;
            pp_Var6 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                       **)(p_Var7 + 0x10);
            pp_Var5 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                       **)*pp_Var6;
          } while (*pp_Var5 != p_Var7);
        }
      }
      else {
        do {
          pp_Var5 = pp_Var6;
          pp_Var6 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                     **)*pp_Var5;
        } while ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                  **)*pp_Var5 !=
                 (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                  **)0x0);
      }
      if ((pp_Var5 == pp_Var1) ||
         ((byte)_Var2 <
          (byte)*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                  *)((long)pp_Var5 + 0x19))) {
        if (pp_Var4[1] ==
            (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
             *)0x0) {
          *param_2 = (__tree_end_node *)pp_Var4;
          return (__tree_node_base **)(pp_Var4 + 1);
        }
        *param_2 = (__tree_end_node *)pp_Var5;
        return (__tree_node_base **)pp_Var5;
      }
      if ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           **)*pp_Var1 !=
          (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           **)0x0) {
        pp_Var4 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                   **)(this + 8);
        pp_Var1 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                   **)*pp_Var1;
        do {
          while (pp_Var6 = pp_Var1,
                (byte)_Var2 <
                (byte)*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                        *)((long)pp_Var6 + 0x19)) {
            pp_Var4 = pp_Var6;
            pp_Var1 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                       **)*pp_Var6;
            if ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                 **)*pp_Var6 ==
                (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                 **)0x0) {
              *param_2 = (__tree_end_node *)pp_Var6;
              return (__tree_node_base **)pp_Var6;
            }
          }
          if ((byte)_Var2 <=
              (byte)*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                      *)((long)pp_Var6 + 0x19)) break;
          pp_Var4 = pp_Var6 + 1;
          pp_Var1 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                     **)*pp_Var4;
        } while ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                  **)*pp_Var4 !=
                 (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                  **)0x0);
        *param_2 = (__tree_end_node *)pp_Var6;
        return (__tree_node_base **)pp_Var4;
      }
      goto LAB_00b19380;
    }
  }
  pp_Var5 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
             **)*pp_Var4;
  pp_Var6 = pp_Var4;
  if (*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
        ***)this != pp_Var4) {
    pp_Var3 = pp_Var5;
    if (pp_Var5 ==
        (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
         **)0x0) {
      pp_Var6 = pp_Var4 + 2;
      if (*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
            ***)*pp_Var6 == pp_Var4) {
        do {
          p_Var7 = *pp_Var6;
          pp_Var6 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                     **)(p_Var7 + 0x10);
        } while (*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                   **)*pp_Var6 == p_Var7);
      }
      pp_Var6 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                 **)*pp_Var6;
    }
    else {
      do {
        pp_Var6 = pp_Var3;
        pp_Var3 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                   **)pp_Var6[1];
      } while ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                **)pp_Var6[1] !=
               (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                **)0x0);
    }
    _Var2 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
             )*param_4;
    if ((byte)_Var2 <=
        (byte)*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                *)((long)pp_Var6 + 0x19)) {
      if ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           **)*pp_Var1 !=
          (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           **)0x0) {
        pp_Var4 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                   **)(this + 8);
        pp_Var1 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                   **)*pp_Var1;
        do {
          while (pp_Var6 = pp_Var1,
                (byte)_Var2 <
                (byte)*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                        *)((long)pp_Var6 + 0x19)) {
            pp_Var4 = pp_Var6;
            pp_Var1 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                       **)*pp_Var6;
            if ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                 **)*pp_Var6 ==
                (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                 **)0x0) {
              *param_2 = (__tree_end_node *)pp_Var6;
              return (__tree_node_base **)pp_Var6;
            }
          }
          if ((byte)_Var2 <=
              (byte)*(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                      *)((long)pp_Var6 + 0x19)) break;
          pp_Var4 = pp_Var6 + 1;
          pp_Var1 = (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                     **)*pp_Var4;
        } while ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                  **)*pp_Var4 !=
                 (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                  **)0x0);
        *param_2 = (__tree_end_node *)pp_Var6;
        return (__tree_node_base **)pp_Var4;
      }
LAB_00b19380:
      *param_2 = (__tree_end_node *)pp_Var1;
      return (__tree_node_base **)pp_Var1;
    }
  }
  if (pp_Var5 ==
      (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
       **)0x0) {
    *param_2 = (__tree_end_node *)pp_Var4;
    return (__tree_node_base **)pp_Var4;
  }
  *param_2 = (__tree_end_node *)pp_Var6;
  return (__tree_node_base **)(pp_Var6 + 1);
}


