// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyUserAttributesFrom
// Entry Point: 00a5d4ac
// Size: 500 bytes
// Signature: undefined __thiscall copyUserAttributesFrom(UserAttributes * this, UserAttributes * param_1)


/* UserAttributes::copyUserAttributesFrom(UserAttributes&) */

void __thiscall UserAttributes::copyUserAttributesFrom(UserAttributes *this,UserAttributes *param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  bool bVar4;
  undefined8 uVar5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  UserAttributes **ppUVar8;
  UserAttributes *pUVar9;
  UserAttribute *this_00;
  UserAttributes **ppUVar10;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ppUVar10 = *(UserAttributes ***)this;
  while (ppUVar10 != (UserAttributes **)(this + 8)) {
    this_00 = (UserAttribute *)ppUVar10[7];
    if (this_00 != (UserAttribute *)0x0) {
      UserAttribute::~UserAttribute(this_00);
      operator_delete(this_00);
    }
    ppUVar8 = (UserAttributes **)ppUVar10[1];
    if ((UserAttributes **)ppUVar10[1] == (UserAttributes **)0x0) {
      ppUVar8 = ppUVar10 + 2;
      bVar4 = *(UserAttributes ***)*ppUVar8 != ppUVar10;
      ppUVar10 = (UserAttributes **)*ppUVar8;
      if (bVar4) {
        do {
          pUVar9 = *ppUVar8;
          ppUVar8 = (UserAttributes **)(pUVar9 + 0x10);
          ppUVar10 = (UserAttributes **)*ppUVar8;
        } while (*ppUVar10 != pUVar9);
      }
    }
    else {
      do {
        ppUVar10 = ppUVar8;
        ppUVar8 = (UserAttributes **)*ppUVar10;
      } while ((UserAttributes **)*ppUVar10 != (UserAttributes **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
             *)this,*(__tree_node **)(this + 8));
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(UserAttributes **)this = this + 8;
  ppUVar10 = *(UserAttributes ***)param_1;
  while (ppUVar10 != (UserAttributes **)(param_1 + 8)) {
    uVar5 = UserAttribute::clone();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_70);
                    /* try { // try from 00a5d598 to 00a5d5e7 has its CatchHandler @ 00a5d6a0 */
    local_58 = uVar5;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
                          *)this,&local_50,(basic_string *)&local_70);
    if (*pp_Var6 == (__tree_node_base *)0x0) {
      puVar7 = (undefined8 *)operator_new(0x40);
      pvVar3 = local_60;
      uVar5 = uStack_68;
      uVar2 = local_70;
      *puVar7 = 0;
      puVar7[1] = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = (void *)0x0;
      puVar7[6] = pvVar3;
      puVar7[7] = local_58;
      puVar7[5] = uVar5;
      puVar7[4] = uVar2;
      puVar7[2] = local_50;
      *pp_Var6 = (__tree_node_base *)puVar7;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar7 = (undefined8 *)*pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar7);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    ppUVar8 = (UserAttributes **)ppUVar10[1];
    if ((UserAttributes **)ppUVar10[1] == (UserAttributes **)0x0) {
      ppUVar8 = ppUVar10 + 2;
      bVar4 = *(UserAttributes ***)*ppUVar8 != ppUVar10;
      ppUVar10 = (UserAttributes **)*ppUVar8;
      if (bVar4) {
        do {
          pUVar9 = *ppUVar8;
          ppUVar8 = (UserAttributes **)(pUVar9 + 0x10);
          ppUVar10 = (UserAttributes **)*ppUVar8;
        } while (*ppUVar10 != pUVar9);
      }
    }
    else {
      do {
        ppUVar10 = ppUVar8;
        ppUVar8 = (UserAttributes **)*ppUVar10;
      } while ((UserAttributes **)*ppUVar10 != (UserAttributes **)0x0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


