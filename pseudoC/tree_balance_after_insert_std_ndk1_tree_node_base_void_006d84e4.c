// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
// Entry Point: 006d84e4
// Size: 416 bytes
// Signature: void __cdecl __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(__tree_node_base * param_1, __tree_node_base * param_2)


/* void 
   std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*,
   std::__ndk1::__tree_node_base<void*>*) */

void std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  __tree_node_base _Var1;
  __tree_node_base **pp_Var2;
  __tree_node_base **pp_Var3;
  __tree_node_base *p_Var4;
  __tree_node_base **pp_Var5;
  
  _Var1 = (__tree_node_base)(param_2 == param_1);
  param_2[0x18] = _Var1;
  do {
    if ((bool)_Var1) {
      return;
    }
    pp_Var3 = *(__tree_node_base ***)((long)param_2 + 0x10);
    if (*(char *)(pp_Var3 + 3) != '\0') {
      return;
    }
    pp_Var2 = (__tree_node_base **)pp_Var3[2];
    pp_Var5 = (__tree_node_base **)*pp_Var2;
    if (pp_Var5 == pp_Var3) {
      if ((pp_Var2[1] == (__tree_node_base *)0x0) ||
         (pp_Var5 = (__tree_node_base **)(pp_Var2[1] + 0x18),
         *(__tree_node_base *)pp_Var5 != (__tree_node_base)0x0)) {
        if (*pp_Var3 != param_2) {
          pp_Var5 = (__tree_node_base **)pp_Var3[1];
          p_Var4 = *pp_Var5;
          pp_Var3[1] = p_Var4;
          if (p_Var4 != (__tree_node_base *)0x0) {
            *(__tree_node_base ***)(p_Var4 + 0x10) = pp_Var3;
            pp_Var2 = (__tree_node_base **)pp_Var3[2];
          }
          pp_Var5[2] = (__tree_node_base *)pp_Var2;
          *(__tree_node_base ***)
           ((long)pp_Var3[2] + (ulong)(*(__tree_node_base ***)pp_Var3[2] != pp_Var3) * 8) = pp_Var5;
          pp_Var3[2] = (__tree_node_base *)pp_Var5;
          pp_Var2 = (__tree_node_base **)pp_Var5[2];
          *pp_Var5 = (__tree_node_base *)pp_Var3;
          pp_Var3 = pp_Var5;
        }
        pp_Var5 = (__tree_node_base **)*pp_Var2;
        p_Var4 = pp_Var5[1];
        *(undefined *)(pp_Var3 + 3) = 1;
        *(undefined *)(pp_Var2 + 3) = 0;
        *pp_Var2 = p_Var4;
        if (p_Var4 != (__tree_node_base *)0x0) {
          *(__tree_node_base ***)(p_Var4 + 0x10) = pp_Var2;
        }
        pp_Var3 = pp_Var2 + 2;
        pp_Var5[2] = *pp_Var3;
        *(__tree_node_base ***)
         ((long)*pp_Var3 + (ulong)(*(__tree_node_base ***)*pp_Var3 != pp_Var2) * 8) = pp_Var5;
        pp_Var5[1] = (__tree_node_base *)pp_Var2;
LAB_006d867c:
        *pp_Var3 = (__tree_node_base *)pp_Var5;
        return;
      }
    }
    else if ((pp_Var5 == (__tree_node_base **)0x0) ||
            (pp_Var5 = pp_Var5 + 3, *(__tree_node_base *)pp_Var5 != (__tree_node_base)0x0)) {
      if (*pp_Var3 == param_2) {
        p_Var4 = *(__tree_node_base **)((long)param_2 + 8);
        *pp_Var3 = p_Var4;
        if (p_Var4 != (__tree_node_base *)0x0) {
          *(__tree_node_base ***)(p_Var4 + 0x10) = pp_Var3;
          pp_Var2 = (__tree_node_base **)pp_Var3[2];
        }
        *(__tree_node_base ***)((long)param_2 + 0x10) = pp_Var2;
        *(__tree_node_base **)
         ((long)pp_Var3[2] + (ulong)(*(__tree_node_base ***)pp_Var3[2] != pp_Var3) * 8) = param_2;
        pp_Var3[2] = param_2;
        pp_Var2 = *(__tree_node_base ***)((long)param_2 + 0x10);
        *(__tree_node_base ***)((long)param_2 + 8) = pp_Var3;
        pp_Var3 = (__tree_node_base **)param_2;
      }
      pp_Var5 = (__tree_node_base **)pp_Var2[1];
      p_Var4 = *pp_Var5;
      *(undefined *)(pp_Var3 + 3) = 1;
      *(__tree_node_base *)(pp_Var2 + 3) = (__tree_node_base)0x0;
      pp_Var2[1] = p_Var4;
      if (p_Var4 != (__tree_node_base *)0x0) {
        *(__tree_node_base ***)(p_Var4 + 0x10) = pp_Var2;
      }
      pp_Var3 = pp_Var2 + 2;
      pp_Var5[2] = *pp_Var3;
      *(__tree_node_base ***)
       ((long)*pp_Var3 + (ulong)(*(__tree_node_base ***)*pp_Var3 != pp_Var2) * 8) = pp_Var5;
      *pp_Var5 = (__tree_node_base *)pp_Var2;
      goto LAB_006d867c;
    }
    _Var1 = (__tree_node_base)(pp_Var2 == (__tree_node_base **)param_1);
    *(undefined *)(pp_Var3 + 3) = 1;
    *(__tree_node_base *)(pp_Var2 + 3) = _Var1;
    *(__tree_node_base *)pp_Var5 = (__tree_node_base)0x1;
    param_2 = (__tree_node_base *)pp_Var2;
  } while( true );
}


