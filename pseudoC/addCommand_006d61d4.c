// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCommand
// Entry Point: 006d61d4
// Size: 432 bytes
// Signature: undefined __thiscall addCommand(Console * this, IConsoleCommand * param_1)


/* Console::addCommand(IConsoleCommand*) */

void __thiscall Console::addCommand(Console *this,IConsoleCommand *param_1)

{
  long **this_00;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  int iVar5;
  __tree_node_base **pp_Var6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  __tree_node_base *p_Var10;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  IConsoleCommand *local_58;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (long **)(this + 0x28);
  (**(code **)(*(long *)param_1 + 0x10))(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_70);
                    /* try { // try from 006d6224 to 006d6233 has its CatchHandler @ 006d639c */
  local_58 = param_1;
  pp_Var6 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
                        *)this_00,&local_50,(basic_string *)&local_70);
  p_Var10 = *pp_Var6;
  if (p_Var10 == (__tree_node_base *)0x0) {
                    /* try { // try from 006d62d0 to 006d62db has its CatchHandler @ 006d639c */
    puVar8 = (undefined8 *)operator_new(0x40);
    pvVar4 = local_60;
    uVar3 = uStack_68;
    uVar2 = local_70;
    *puVar8 = 0;
    puVar8[1] = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    puVar8[6] = pvVar4;
    puVar8[7] = local_58;
    puVar8[5] = uVar3;
    puVar8[4] = uVar2;
    puVar8[2] = local_50;
    *pp_Var6 = (__tree_node_base *)puVar8;
    if ((long *)**this_00 != (long *)0x0) {
      *this_00 = (long *)**this_00;
      puVar8 = (undefined8 *)*pp_Var6;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),(__tree_node_base *)puVar8);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (p_Var10 != (__tree_node_base *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 006d6348 to 006d6353 has its CatchHandler @ 006d6384 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pbVar7 = (byte *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    pbVar9 = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      pbVar9 = pbVar7 + 1;
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Failed to add command %s . Another command with the same name already exists.\n"
                      ,pbVar9);
    (**(code **)(*(long *)param_1 + 8))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


