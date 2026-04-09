// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: apply
// Entry Point: 009d011c
// Size: 1004 bytes
// Signature: undefined apply(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementManager::ClearAndScatterCallScatterObjectsInMask::apply() */

void ProceduralPlacementManager::ClearAndScatterCallScatterObjectsInMask::apply(void)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long in_x0;
  ulong *puVar5;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  ulong local_60;
  ulong uStack_58;
  undefined8 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (((DAT_02111d80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_02111d80), iVar4 != 0)) {
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
  local_50 = (undefined8 *)operator_new(0x20);
  *(undefined *)((long)local_50 + 0x1c) = 0;
  uStack_58 = 0x1c;
  local_60 = 0x21;
  local_50[1] = 0x2323232323232323;
  *local_50 = 0x2323232323232323;
  *(undefined8 *)((long)local_50 + 0x14) = 0x2323232323232323;
  *(undefined8 *)((long)local_50 + 0xc) = 0x2323232323232323;
                    /* try { // try from 009d0188 to 009d019b has its CatchHandler @ 009d0534 */
  logPerformance((ProceduralPlacementManager *)&DAT_02111c18,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (((DAT_02111d80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_02111d80), iVar4 != 0)) {
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
  local_70 = (undefined8 *)operator_new(0x20);
  *(undefined *)((long)local_70 + 0x1d) = 0;
  bVar2 = *(byte *)(basic_string *)(in_x0 + 8);
  uVar1 = *(ulong *)(in_x0 + 0x18);
  uStack_78 = 0x1d;
  local_80 = 0x21;
  local_70[1] = 0x4d6e497265747461;
  *local_70 = 0x637320796c707061;
  if ((bVar2 & 1) == 0) {
    uVar1 = in_x0 + 9;
  }
  *(undefined8 *)((long)local_70 + 0x15) = 0x20656c757220726f;
  *(undefined8 *)((long)local_70 + 0xd) = 0x66206b73614d6e49;
                    /* try { // try from 009d0204 to 009d020b has its CatchHandler @ 009d0520 */
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_80,uVar1);
  local_50 = (undefined8 *)puVar5[2];
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 009d0224 to 009d0237 has its CatchHandler @ 009d0508 */
  logPerformance((ProceduralPlacementManager *)&DAT_02111c18,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (((DAT_02111d80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_02111d80), iVar4 != 0)) {
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
  scatterObjectsInMask
            ((ProceduralPlacementManager *)&DAT_02111c18,(basic_string *)(in_x0 + 8),
             *(uint *)(in_x0 + 0x20),*(int **)(in_x0 + 0x28),*(bool *)(in_x0 + 0x30),
             *(PPParentObjects **)(in_x0 + 0x38),*(PPMask **)(in_x0 + 0x40),
             (basic_string *)(in_x0 + 0x48));
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


