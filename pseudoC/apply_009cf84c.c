// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: apply
// Entry Point: 009cf84c
// Size: 1024 bytes
// Signature: undefined apply(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementManager::ClearAndScatterCallClearPPReference::apply() */

void ProceduralPlacementManager::ClearAndScatterCallClearPPReference::apply(void)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long in_x0;
  ulong *puVar4;
  basic_string local_88 [4];
  void *local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  ulong local_50;
  ulong uStack_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_02111d80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02111d80), iVar3 != 0)) {
    DAT_02111cc0 = 0;
    DAT_02111cb8 = 0;
    DAT_02111c18 = &PTR__ProceduralPlacementManager_00fe2310;
    DAT_02111cb0 = &DAT_02111cb8;
    DAT_02111d38 = 0;
    DAT_02111d40 = 0;
    uRam0000000002111c28 = 0;
    _DAT_02111c20 = 0;
    uRam0000000002111c38 = 0;
    _DAT_02111c30 = 0;
    DAT_02111d30 = &DAT_02111d38;
    uRam0000000002111c48 = 0;
    _DAT_02111c40 = 0;
    uRam0000000002111c58 = 0;
    _DAT_02111c50 = 0;
    uRam0000000002111c68 = 0;
    _DAT_02111c60 = 0;
    uRam0000000002111c78 = 0;
    _DAT_02111c70 = 0;
    uRam0000000002111c88 = 0;
    _DAT_02111c80 = 0;
    uRam0000000002111c98 = 0;
    _DAT_02111c90 = 0;
    uRam0000000002111ca8 = 0;
    _DAT_02111ca0 = 0;
    uRam0000000002111cd0 = 0;
    _DAT_02111cc8 = 0;
    uRam0000000002111ce0 = 0;
    _DAT_02111cd8 = 0;
    uRam0000000002111cf0 = 0;
    _DAT_02111ce8 = 0;
    DAT_02111d00 = 0;
    _DAT_02111cf8 = 0;
    uRam0000000002111d10 = 0;
    _DAT_02111d08 = 0;
    uRam0000000002111d1a = 0;
    _DAT_02111d12 = 0;
    uRam0000000002111d18 = 0;
    DAT_02111d48 = 0x7fffffff;
    DAT_02111d50 = 0x7fffffff;
    uRam0000000002111d5c = 0;
    _DAT_02111d54 = 0;
    uRam0000000002111d6c = 0;
    _DAT_02111d64 = 0;
    DAT_02111d73._0_1_ = 0;
    DAT_02111d73._1_7_ = 0;
    __cxa_atexit(~ProceduralPlacementManager,&DAT_02111c18,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02111d80);
  }
  local_40 = (undefined8 *)operator_new(0x20);
  *(undefined *)((long)local_40 + 0x1c) = 0;
  uStack_48 = 0x1c;
  local_50 = 0x21;
  local_40[1] = 0x2323232323232323;
  *local_40 = 0x2323232323232323;
  *(undefined8 *)((long)local_40 + 0x14) = 0x2323232323232323;
  *(undefined8 *)((long)local_40 + 0xc) = 0x2323232323232323;
                    /* try { // try from 009cf8b4 to 009cf8c7 has its CatchHandler @ 009cfcb4 */
  logPerformance((ProceduralPlacementManager *)&DAT_02111c18,(basic_string *)&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (((DAT_02111d80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02111d80), iVar3 != 0)) {
    DAT_02111cc0 = 0;
    DAT_02111cb8 = 0;
    DAT_02111cb0 = &DAT_02111cb8;
    DAT_02111c18 = &PTR__ProceduralPlacementManager_00fe2310;
    uRam0000000002111c28 = 0;
    _DAT_02111c20 = 0;
    uRam0000000002111c38 = 0;
    _DAT_02111c30 = 0;
    uRam0000000002111c48 = 0;
    _DAT_02111c40 = 0;
    uRam0000000002111c58 = 0;
    _DAT_02111c50 = 0;
    DAT_02111d30 = &DAT_02111d38;
    uRam0000000002111c68 = 0;
    _DAT_02111c60 = 0;
    uRam0000000002111c78 = 0;
    _DAT_02111c70 = 0;
    uRam0000000002111c88 = 0;
    _DAT_02111c80 = 0;
    uRam0000000002111c98 = 0;
    _DAT_02111c90 = 0;
    uRam0000000002111ca8 = 0;
    _DAT_02111ca0 = 0;
    DAT_02111d38 = 0;
    DAT_02111d40 = 0;
    uRam0000000002111cd0 = 0;
    _DAT_02111cc8 = 0;
    uRam0000000002111ce0 = 0;
    _DAT_02111cd8 = 0;
    uRam0000000002111cf0 = 0;
    _DAT_02111ce8 = 0;
    DAT_02111d00 = 0;
    _DAT_02111cf8 = 0;
    uRam0000000002111d10 = 0;
    _DAT_02111d08 = 0;
    uRam0000000002111d1a = 0;
    _DAT_02111d12 = 0;
    uRam0000000002111d18 = 0;
    DAT_02111d48 = 0x7fffffff;
    DAT_02111d50 = 0x7fffffff;
    uRam0000000002111d5c = 0;
    _DAT_02111d54 = 0;
    uRam0000000002111d6c = 0;
    _DAT_02111d64 = 0;
    DAT_02111d73._0_1_ = 0;
    DAT_02111d73._1_7_ = 0;
    __cxa_atexit(~ProceduralPlacementManager,&DAT_02111c18,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02111d80);
  }
  local_60 = (undefined8 *)operator_new(0x20);
  *(undefined *)((long)local_60 + 0x19) = 0;
  uStack_68 = 0x19;
  local_70 = 0x21;
  local_60[1] = 0x6572656665722064;
  *local_60 = 0x336920796c707061;
  *(undefined8 *)((long)local_60 + 0x11) = 0x206b73616d206563;
  *(undefined8 *)((long)local_60 + 9) = 0x6e65726566657220;
                    /* try { // try from 009cf920 to 009cf92b has its CatchHandler @ 009cfca0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_88);
  pvVar2 = (void *)((ulong)local_88 | 1);
  if (((byte)local_88[0] & 1) != 0) {
    pvVar2 = local_78;
  }
                    /* try { // try from 009cf948 to 009cf94f has its CatchHandler @ 009cfc80 */
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70,(ulong)pvVar2);
  local_40 = (undefined8 *)puVar4[2];
  uStack_48 = puVar4[1];
  local_50 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 009cf968 to 009cf97b has its CatchHandler @ 009cfc4c */
  logPerformance((ProceduralPlacementManager *)&DAT_02111c18,(basic_string *)&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (((DAT_02111d80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02111d80), iVar3 != 0)) {
    DAT_02111cc0 = 0;
    DAT_02111cb8 = 0;
    DAT_02111cb0 = &DAT_02111cb8;
    DAT_02111c18 = &PTR__ProceduralPlacementManager_00fe2310;
    uRam0000000002111c28 = 0;
    _DAT_02111c20 = 0;
    uRam0000000002111c38 = 0;
    _DAT_02111c30 = 0;
    uRam0000000002111c48 = 0;
    _DAT_02111c40 = 0;
    uRam0000000002111c58 = 0;
    _DAT_02111c50 = 0;
    DAT_02111d30 = &DAT_02111d38;
    uRam0000000002111c68 = 0;
    _DAT_02111c60 = 0;
    uRam0000000002111c78 = 0;
    _DAT_02111c70 = 0;
    uRam0000000002111c88 = 0;
    _DAT_02111c80 = 0;
    uRam0000000002111c98 = 0;
    _DAT_02111c90 = 0;
    uRam0000000002111ca8 = 0;
    _DAT_02111ca0 = 0;
    DAT_02111d38 = 0;
    DAT_02111d40 = 0;
    uRam0000000002111cd0 = 0;
    _DAT_02111cc8 = 0;
    uRam0000000002111ce0 = 0;
    _DAT_02111cd8 = 0;
    uRam0000000002111cf0 = 0;
    _DAT_02111ce8 = 0;
    DAT_02111d00 = 0;
    _DAT_02111cf8 = 0;
    uRam0000000002111d10 = 0;
    _DAT_02111d08 = 0;
    uRam0000000002111d1a = 0;
    _DAT_02111d12 = 0;
    uRam0000000002111d18 = 0;
    DAT_02111d48 = 0x7fffffff;
    DAT_02111d50 = 0x7fffffff;
    uRam0000000002111d5c = 0;
    _DAT_02111d54 = 0;
    uRam0000000002111d6c = 0;
    _DAT_02111d64 = 0;
    DAT_02111d73._0_1_ = 0;
    DAT_02111d73._1_7_ = 0;
    __cxa_atexit(~ProceduralPlacementManager,&DAT_02111c18,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02111d80);
  }
  clearPPReferences((ProceduralPlacementManager *)&DAT_02111c18,*(PPMask **)(in_x0 + 8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


