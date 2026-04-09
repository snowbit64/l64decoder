// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: profilerTrigger
// Entry Point: 00bbd394
// Size: 492 bytes
// Signature: undefined __cdecl profilerTrigger(lua_State * param_1, int param_2)


/* LuaScriptProfiler::LuauProfilerCallback::profilerTrigger(lua_State*, int) */

void LuaScriptProfiler::LuauProfilerCallback::profilerTrigger(lua_State *param_1,int param_2)

{
  long **this;
  long lVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  __tree_node_base **pp_Var5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_2b8;
  size_t sStack_2b0;
  void *local_2a8;
  __tree_end_node *local_2a0;
  lua_Debug alStack_298 [35];
  undefined auStack_275 [269];
  char acStack_168 [256];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar10 = *(long *)(param_1 + 0x10);
  if ((lVar10 == *(long *)param_1) ||
     (iVar3 = lua_getinfo((lua_State *)(ulong)(uint)param_2,0,"sn",alStack_298), iVar3 == 0))
  goto LAB_00bbd538;
  __strrchr_chk(auStack_275,0x2f,0x100);
  FUN_00bbd59c(acStack_168);
  lVar2 = s_profilerInstance;
  sVar4 = strlen(acStack_168);
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  this = (long **)(lVar2 + 8);
  if (sVar4 < 0x17) {
    pvVar8 = (void *)((ulong)&local_2b8 | 1);
    local_2b8 = CONCAT71(local_2b8._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00bbd484;
  }
  else {
    uVar9 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = operator_new(uVar9);
    local_2b8 = uVar9 | 1;
    sStack_2b0 = sVar4;
    local_2a8 = pvVar8;
LAB_00bbd484:
    memcpy(pvVar8,acStack_168,sVar4);
  }
  *(undefined *)((long)pvVar8 + sVar4) = 0;
                    /* try { // try from 00bbd498 to 00bbd4bb has its CatchHandler @ 00bbd580 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                        *)this,&local_2a0,(basic_string *)&local_2b8);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    pvVar8 = local_2a8;
    sVar4 = sStack_2b0;
    uVar9 = local_2b8;
    *(undefined4 *)(puVar7 + 7) = 0;
    sStack_2b0 = 0;
    local_2a8 = (void *)0x0;
    local_2b8 = 0;
    puVar7[6] = pvVar8;
    puVar7[5] = sVar4;
    puVar7[4] = uVar9;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = local_2a0;
    *pp_Var5 = (__tree_node_base *)puVar7;
    puVar6 = puVar7;
    if ((long *)**this != (long *)0x0) {
      *this = (long *)**this;
      puVar6 = (undefined8 *)*pp_Var5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(lVar2 + 0x10),(__tree_node_base *)puVar6);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  }
  *(int *)(puVar7 + 7) = *(int *)(puVar7 + 7) + 1;
  if ((local_2b8 & 1) != 0) {
    operator_delete(local_2a8);
  }
LAB_00bbd538:
  *(long *)param_1 = lVar10;
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


