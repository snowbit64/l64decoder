// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __erase_unique<unsigned_char>
// Entry Point: 00b19478
// Size: 220 bytes
// Signature: ulong __thiscall __erase_unique<unsigned_char>(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>> * this, uchar * param_1)


/* unsigned long std::__ndk1::__tree<unsigned char, std::__ndk1::less<unsigned char>,
   std::__ndk1::allocator<unsigned char> >::__erase_unique<unsigned char>(unsigned char const&) */

ulong __thiscall
std::__ndk1::
__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
__erase_unique<unsigned_char>
          (__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           *this,uchar *param_1)

{
  __tree_node_base _Var1;
  bool bVar2;
  __tree_node_base **pp_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  __tree_node_base *p_Var6;
  __tree_node_base **pp_Var7;
  
  pp_Var4 = (__tree_node_base **)(this + 8);
  pp_Var3 = (__tree_node_base **)*pp_Var4;
  if (pp_Var3 != (__tree_node_base **)0x0) {
    _Var1 = (__tree_node_base)*param_1;
    pp_Var5 = pp_Var3;
    pp_Var7 = pp_Var4;
    do {
      bVar2 = (byte)*(__tree_node_base *)((long)pp_Var5 + 0x19) < (byte)_Var1;
      if (!bVar2) {
        pp_Var7 = pp_Var5;
      }
      pp_Var5 = (__tree_node_base **)pp_Var5[bVar2];
    } while (pp_Var5 != (__tree_node_base **)0x0);
    if ((pp_Var7 == pp_Var4) || ((byte)_Var1 < (byte)*(__tree_node_base *)((long)pp_Var7 + 0x19))) {
      pp_Var3 = (__tree_node_base **)0x0;
    }
    else {
      pp_Var4 = (__tree_node_base **)pp_Var7[1];
      if ((__tree_node_base **)pp_Var7[1] == (__tree_node_base **)0x0) {
        pp_Var4 = pp_Var7 + 2;
        pp_Var5 = (__tree_node_base **)*pp_Var4;
        if ((__tree_node_base **)*pp_Var5 != pp_Var7) {
          do {
            p_Var6 = *pp_Var4;
            pp_Var4 = (__tree_node_base **)(p_Var6 + 0x10);
            pp_Var5 = (__tree_node_base **)*pp_Var4;
          } while (*pp_Var5 != p_Var6);
        }
      }
      else {
        do {
          pp_Var5 = pp_Var4;
          pp_Var4 = (__tree_node_base **)*pp_Var5;
        } while ((__tree_node_base **)*pp_Var5 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)this == pp_Var7) {
        *(__tree_node_base ***)this = pp_Var5;
      }
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      __tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)pp_Var3,(__tree_node_base *)pp_Var7);
      operator_delete(pp_Var7);
      pp_Var3 = (__tree_node_base **)0x1;
    }
  }
  return (ulong)pp_Var3;
}


