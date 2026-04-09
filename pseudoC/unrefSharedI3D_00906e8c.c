// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unrefSharedI3D
// Entry Point: 00906e8c
// Size: 852 bytes
// Signature: undefined __thiscall unrefSharedI3D(I3DManager * this, SharedI3D * param_1)


/* I3DManager::unrefSharedI3D(I3DManager::SharedI3D*) */

void __thiscall I3DManager::unrefSharedI3D(I3DManager *this,SharedI3D *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  __tree_iterator _Var6;
  I3DStreamingManager *this_00;
  size_t __n;
  __tree_node_base **pp_Var7;
  SharedI3D *__s;
  __tree_node_base *p_Var8;
  __tree_node_base **pp_Var9;
  __tree_node_base *p_Var10;
  long lVar11;
  __tree_node_base **pp_Var12;
  __tree_node_base **pp_Var13;
  void *__dest;
  ulong uVar14;
  undefined8 local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar3 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar3 + -1;
  if (iVar3 + -1 != 0) goto LAB_00906ec8;
  if (param_1[8] == (SharedI3D)0x0) {
    this_00 = (I3DStreamingManager *)I3DStreamingManager::getInstance();
    I3DStreamingManager::cancelI3DLoadTask(this_00,*(uint *)(param_1 + 0x14),true);
  }
  else if (*(long **)param_1 != (long *)0x0) {
    (**(code **)(**(long **)param_1 + 8))();
  }
  __s = *(SharedI3D **)(param_1 + 0x28);
  if (((byte)param_1[0x18] & 1) == 0) {
    __s = param_1 + 0x19;
  }
  __n = strlen((char *)__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pp_Var12 = (__tree_node_base **)(this + 0x30);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00906f9c;
  }
  else {
    uVar14 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar14);
    local_80 = uVar14 | 1;
    local_78 = __n;
    local_70 = __dest;
LAB_00906f9c:
    memcpy(__dest,__s,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00906fb0 to 00906fbb has its CatchHandler @ 009071e0 */
  _Var6 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
                      *)pp_Var12,(basic_string *)&local_80);
  p_Var8 = (__tree_node_base *)(ulong)_Var6;
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  pp_Var7 = *(__tree_node_base ***)(p_Var8 + 8);
  if (*(__tree_node_base ***)(p_Var8 + 8) == (__tree_node_base **)0x0) {
    pp_Var7 = (__tree_node_base **)(p_Var8 + 0x10);
    pp_Var9 = (__tree_node_base **)*pp_Var7;
    if (*pp_Var9 != p_Var8) {
      do {
        p_Var10 = *pp_Var7;
        pp_Var7 = (__tree_node_base **)(p_Var10 + 0x10);
        pp_Var9 = (__tree_node_base **)*pp_Var7;
      } while (*pp_Var9 != p_Var10);
    }
  }
  else {
    do {
      pp_Var9 = pp_Var7;
      pp_Var7 = (__tree_node_base **)*pp_Var9;
    } while ((__tree_node_base **)*pp_Var9 != (__tree_node_base **)0x0);
  }
  if (*pp_Var12 == p_Var8) {
    *pp_Var12 = (__tree_node_base *)pp_Var9;
  }
  *(long *)(this + 0x40) = *(long *)(this + 0x40) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x38),p_Var8);
  if (((byte)p_Var8[0x20] & 1) != 0) {
    operator_delete(*(void **)(p_Var8 + 0x30));
  }
  operator_delete(p_Var8);
  if (param_1 != (SharedI3D *)0x0) {
    if (((byte)param_1[0x18] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
    operator_delete(param_1);
  }
  pp_Var12 = *(__tree_node_base ***)(this + 0x18);
  while (pp_Var12 != (__tree_node_base **)(this + 0x20)) {
    pp_Var7 = (__tree_node_base **)pp_Var12[1];
    if (pp_Var12[5] == (__tree_node_base *)param_1) {
      pp_Var9 = pp_Var7;
      if (pp_Var7 == (__tree_node_base **)0x0) {
        pp_Var9 = pp_Var12 + 2;
        pp_Var13 = (__tree_node_base **)*pp_Var9;
        if ((__tree_node_base **)*pp_Var13 != pp_Var12) {
          do {
            p_Var8 = *pp_Var9;
            pp_Var9 = (__tree_node_base **)(p_Var8 + 0x10);
            pp_Var13 = (__tree_node_base **)*pp_Var9;
          } while (*pp_Var13 != p_Var8);
          goto LAB_00907180;
        }
LAB_00907194:
        pp_Var7 = pp_Var12 + 2;
        pp_Var9 = (__tree_node_base **)*pp_Var7;
        if ((__tree_node_base **)*pp_Var9 != pp_Var12) {
          do {
            p_Var8 = *pp_Var7;
            pp_Var7 = (__tree_node_base **)(p_Var8 + 0x10);
            pp_Var9 = (__tree_node_base **)*pp_Var7;
          } while (*pp_Var9 != p_Var8);
        }
      }
      else {
        do {
          pp_Var13 = pp_Var9;
          pp_Var9 = (__tree_node_base **)*pp_Var13;
        } while ((__tree_node_base **)*pp_Var13 != (__tree_node_base **)0x0);
LAB_00907180:
        if (pp_Var7 == (__tree_node_base **)0x0) goto LAB_00907194;
        do {
          pp_Var9 = pp_Var7;
          pp_Var7 = (__tree_node_base **)*pp_Var9;
        } while ((__tree_node_base **)*pp_Var9 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)(this + 0x18) == pp_Var12) {
        *(__tree_node_base ***)(this + 0x18) = pp_Var9;
      }
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x20),(__tree_node_base *)pp_Var12);
      operator_delete(pp_Var12);
      pp_Var12 = pp_Var13;
    }
    else if (pp_Var7 == (__tree_node_base **)0x0) {
      pp_Var7 = pp_Var12 + 2;
      bVar5 = (__tree_node_base **)*(__tree_node_base **)*pp_Var7 != pp_Var12;
      pp_Var12 = (__tree_node_base **)*pp_Var7;
      if (bVar5) {
        do {
          p_Var8 = *pp_Var7;
          pp_Var7 = (__tree_node_base **)(p_Var8 + 0x10);
          pp_Var12 = (__tree_node_base **)*pp_Var7;
        } while (*pp_Var12 != p_Var8);
      }
    }
    else {
      do {
        pp_Var12 = pp_Var7;
        pp_Var7 = (__tree_node_base **)*pp_Var12;
      } while ((__tree_node_base **)*pp_Var12 != (__tree_node_base **)0x0);
    }
  }
  plVar2 = *(long **)(this + 8);
  for (plVar1 = *(long **)this; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar11 = *plVar1;
    if (*(SharedI3D **)(lVar11 + 8) == param_1) {
      *(undefined8 *)(lVar11 + 8) = 0;
      *(undefined *)(lVar11 + 0x30) = 1;
      *(undefined4 *)(lVar11 + 0x34) = 0;
      *(undefined4 *)(lVar11 + 0x3c) = 1;
    }
  }
LAB_00906ec8:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


