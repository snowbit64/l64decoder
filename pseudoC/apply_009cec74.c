// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: apply
// Entry Point: 009cec74
// Size: 1012 bytes
// Signature: undefined apply(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementManager::ClearAndScatterCallClearFoliage::apply() */

void ProceduralPlacementManager::ClearAndScatterCallClearFoliage::apply(void)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long in_x0;
  ulong *puVar4;
  basic_string local_80 [4];
  void *local_70;
  byte local_68;
  undefined8 local_67;
  undefined7 uStack_5f;
  undefined4 uStack_58;
  uint uStack_54;
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
                    /* try { // try from 009cecdc to 009cecef has its CatchHandler @ 009cf0d0 */
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
  uStack_54 = uStack_54 & 0xffffff00;
  local_68 = 0x26;
  uStack_5f = 0x6d20656761696c;
  uStack_58 = 0x206b7361;
  local_67._0_1_ = 'a';
  local_67._1_1_ = 'p';
  local_67._2_1_ = 'p';
  local_67._3_1_ = 'l';
  local_67._4_1_ = 'y';
  local_67._5_1_ = ' ';
  local_67._6_1_ = 'f';
  local_67._7_1_ = 'o';
                    /* try { // try from 009ced3c to 009ced47 has its CatchHandler @ 009cf0bc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_80);
  pvVar2 = (void *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    pvVar2 = local_70;
  }
                    /* try { // try from 009ced64 to 009ced6b has its CatchHandler @ 009cf09c */
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_68,(ulong)pvVar2);
  local_40 = (undefined8 *)puVar4[2];
  uStack_48 = puVar4[1];
  local_50 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 009ced84 to 009ced97 has its CatchHandler @ 009cf068 */
  logPerformance((ProceduralPlacementManager *)&DAT_02111c18,(basic_string *)&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_54,uStack_58));
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
  clearFoliageInMask((ProceduralPlacementManager *)&DAT_02111c18,*(PPMask **)(in_x0 + 8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


