// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: defaultLuaErrorHandler
// Entry Point: 00bb98c8
// Size: 556 bytes
// Signature: undefined __cdecl defaultLuaErrorHandler(lua_State * param_1)


/* LuauScriptSystem::defaultLuaErrorHandler(lua_State*) */

undefined8 LuauScriptSystem::defaultLuaErrorHandler(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined auVar6 [16];
  byte local_bb8;
  undefined8 local_bb7;
  undefined7 uStack_baf;
  undefined uStack_ba8;
  undefined uStack_ba7;
  undefined6 uStack_ba6;
  byte local_ba0 [16];
  void *local_b90;
  char acStack_3a0 [512];
  char *local_1a0;
  char *local_198;
  undefined4 local_188;
  int local_184;
  undefined auStack_17d [269];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_bb8 = 0x20;
  iVar4 = 1;
  uStack_baf = 0x3a6b6361747320;
  uStack_ba8 = 10;
  local_bb7._0_1_ = 'L';
  local_bb7._1_1_ = 'U';
  local_bb7._2_1_ = 'A';
  local_bb7._3_1_ = ' ';
  local_bb7._4_1_ = 'c';
  local_bb7._5_1_ = 'a';
  local_bb7._6_1_ = 'l';
  local_bb7._7_1_ = 'l';
  uStack_ba7 = 0;
                    /* try { // try from 00bb9964 to 00bb9973 has its CatchHandler @ 00bb9b30 */
  while (iVar3 = lua_getinfo(param_1,iVar4 + -1,"sln",(lua_Debug *)&local_1a0), iVar3 != 0) {
    if (((*local_198 == '\0') || (pcVar5 = local_1a0, local_1a0 == (char *)0x0)) &&
       (pcVar5 = "main chunk", *local_198 != 'm')) {
                    /* try { // try from 00bb9998 to 00bb99cb has its CatchHandler @ 00bb9b2c */
      iVar3 = lua_getinfo(param_1,iVar4,"sln",(lua_Debug *)&local_1a0);
      if (iVar3 == 0) {
        pcVar5 = "<invokedMethod>";
      }
      else {
        pcVar5 = acStack_3a0;
        FUN_00bb6bf0(acStack_3a0,0x200,0x200,"function@%d",local_188);
      }
    }
    if (local_184 < 1) {
      FUN_00bb6bf0(local_ba0,0x800,0x800,"  %s: %s\n",auStack_17d,pcVar5);
    }
    else {
                    /* try { // try from 00bb99e0 to 00bb9a27 has its CatchHandler @ 00bb9b34 */
      FUN_00bb6bf0(local_ba0,0x800,0x800,"  %s (%d): %s\n",auStack_17d,local_184,pcVar5);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_bb8);
    iVar4 = iVar4 + 1;
  }
                    /* try { // try from 00bb9a30 to 00bb9a3f has its CatchHandler @ 00bb9b28 */
  auVar6 = lua_tolstring(param_1,-1,(ulong *)0x0);
                    /* try { // try from 00bb9a40 to 00bb9a4b has its CatchHandler @ 00bb9b24 */
  reformatErrorMessage(auVar6._0_8_,auVar6._8_8_);
  pvVar2 = (void *)((ulong)local_ba0 | 1);
  if ((local_ba0[0] & 1) != 0) {
    pvVar2 = local_b90;
  }
                    /* try { // try from 00bb9a68 to 00bb9a6f has its CatchHandler @ 00bb9af4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_bb8,(ulong)pvVar2);
  if ((local_ba0[0] & 1) != 0) {
    operator_delete(local_b90);
  }
                    /* try { // try from 00bb9a80 to 00bb9aa7 has its CatchHandler @ 00bb9b28 */
  lua_settop(param_1,-2);
  pcVar5 = (char *)((ulong)&local_bb8 | 1);
  if ((local_bb8 & 1) != 0) {
    pcVar5 = (char *)CONCAT62(uStack_ba6,CONCAT11(uStack_ba7,uStack_ba8));
  }
  lua_pushstring(param_1,pcVar5);
  if ((local_bb8 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_ba6,CONCAT11(uStack_ba7,uStack_ba8)));
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


