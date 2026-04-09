// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __erase_unique<DestructionShape::InterShapeJointToAdd>
// Entry Point: 00926a34
// Size: 348 bytes
// Signature: ulong __thiscall __erase_unique<DestructionShape::InterShapeJointToAdd>(__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>> * this, InterShapeJointToAdd * param_1)


/* unsigned long std::__ndk1::__tree<DestructionShape::InterShapeJointToAdd,
   std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,
   std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>
   >::__erase_unique<DestructionShape::InterShapeJointToAdd>(DestructionShape::InterShapeJointToAdd
   const&) */

ulong __thiscall
std::__ndk1::
__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
::__erase_unique<DestructionShape::InterShapeJointToAdd>
          (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
           *this,InterShapeJointToAdd *param_1)

{
  __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
  **pp_Var1;
  uint uVar2;
  __tree_node_base *p_Var3;
  __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
  **pp_Var4;
  __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
  **pp_Var5;
  __tree_node_base **pp_Var6;
  __tree_node_base *p_Var7;
  __tree_node_base **pp_Var8;
  __tree_node_base **pp_Var9;
  
  pp_Var8 = (__tree_node_base **)(this + 8);
  pp_Var5 = (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
             **)*pp_Var8;
  if (pp_Var5 !=
      (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
       **)0x0) {
    p_Var7 = *(__tree_node_base **)(param_1 + 8);
    p_Var3 = *(__tree_node_base **)(param_1 + 0x10);
    uVar2 = *(uint *)param_1;
    pp_Var4 = pp_Var5;
    pp_Var6 = pp_Var8;
    do {
      while ((pp_Var9 = (__tree_node_base **)pp_Var4,
             (__tree_node_base *)
             ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
               **)pp_Var9)[5] < p_Var7 ||
             (((__tree_node_base *)
               ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                 **)pp_Var9)[5] == p_Var7 &&
              (((__tree_node_base *)
                ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                  **)pp_Var9)[6] < p_Var3 ||
               (((__tree_node_base *)
                 ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                   **)pp_Var9)[6] == p_Var3 &&
                ((*(uint *)((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                             **)pp_Var9 + 4) < uVar2 ||
                 ((*(uint *)((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                              **)pp_Var9 + 4) == uVar2 &&
                  (*(uint *)((long)pp_Var9 + 0x24) < *(uint *)(param_1 + 4)))))))))))))) {
        pp_Var1 = (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                   **)pp_Var9 + 1;
        pp_Var4 = (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                   **)*pp_Var1;
        pp_Var9 = pp_Var6;
        if ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
             **)*pp_Var1 ==
            (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
             **)0x0) goto LAB_00926ac0;
      }
      pp_Var4 = (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                 **)*pp_Var9;
      pp_Var6 = pp_Var9;
    } while ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
              **)*pp_Var9 !=
             (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
              **)0x0);
LAB_00926ac0:
    if (((pp_Var9 == pp_Var8) || (p_Var7 < pp_Var9[5])) ||
       ((p_Var7 == pp_Var9[5] &&
        ((p_Var3 < pp_Var9[6] ||
         ((p_Var3 == pp_Var9[6] &&
          ((uVar2 < *(uint *)(pp_Var9 + 4) ||
           ((uVar2 == *(uint *)(pp_Var9 + 4) &&
            (*(uint *)(param_1 + 4) < *(uint *)((long)pp_Var9 + 0x24))))))))))))) {
      pp_Var5 = (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                 **)0x0;
    }
    else {
      pp_Var8 = (__tree_node_base **)pp_Var9[1];
      if ((__tree_node_base **)pp_Var9[1] == (__tree_node_base **)0x0) {
        pp_Var8 = pp_Var9 + 2;
        pp_Var6 = (__tree_node_base **)*pp_Var8;
        if ((__tree_node_base **)*pp_Var6 != pp_Var9) {
          do {
            p_Var7 = *pp_Var8;
            pp_Var8 = (__tree_node_base **)(p_Var7 + 0x10);
            pp_Var6 = (__tree_node_base **)*pp_Var8;
          } while (*pp_Var6 != p_Var7);
        }
      }
      else {
        do {
          pp_Var6 = pp_Var8;
          pp_Var8 = (__tree_node_base **)*pp_Var6;
        } while ((__tree_node_base **)*pp_Var6 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)this == pp_Var9) {
        *(__tree_node_base ***)this = pp_Var6;
      }
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      __tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)pp_Var5,(__tree_node_base *)pp_Var9);
      operator_delete(pp_Var9);
      pp_Var5 = (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                 **)0x1;
    }
  }
  return (ulong)pp_Var5;
}


