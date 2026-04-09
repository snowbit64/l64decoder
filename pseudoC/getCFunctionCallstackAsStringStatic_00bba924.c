// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCFunctionCallstackAsStringStatic
// Entry Point: 00bba924
// Size: 472 bytes
// Signature: undefined __thiscall getCFunctionCallstackAsStringStatic(LuauScriptSystem * this, lua_State * param_1, char * param_2, uint param_3)


/* LuauScriptSystem::getCFunctionCallstackAsStringStatic(lua_State*, char const*, unsigned int) */

void __thiscall
LuauScriptSystem::getCFunctionCallstackAsStringStatic
          (LuauScriptSystem *this,lua_State *param_1,char *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *in_x8;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 local_9b0;
  size_t local_9a8;
  void *local_9a0;
  undefined auStack_998 [2048];
  undefined8 local_198 [2];
  undefined8 local_188;
  undefined4 local_17c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = (ulong)param_2 & 0xffffffff;
  *in_x8 = ' ';
  *(undefined8 *)(in_x8 + 9) = 0xa3a6b6361747320;
  *(undefined8 *)(in_x8 + 1) = 0x6c6c61632041554c;
  in_x8[0x11] = '\0';
  sVar3 = strlen((char *)param_1);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 00bbaaf0 to 00bbaaf7 has its CatchHandler @ 00bbaafc */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_9b0 | 1);
    local_9b0 = CONCAT71(local_9b0._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 == 0) goto LAB_00bba9e0;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00bba9b8 to 00bba9bf has its CatchHandler @ 00bbaafc */
    pvVar5 = operator_new(uVar6);
    local_9b0 = uVar6 | 1;
    local_9a8 = sVar3;
    local_9a0 = pvVar5;
  }
  memcpy(pvVar5,param_1,sVar3);
LAB_00bba9e0:
  *(undefined *)((long)pvVar5 + sVar3) = 0;
  while( true ) {
                    /* try { // try from 00bbaa0c to 00bbaa1f has its CatchHandler @ 00bbab0c */
    iVar2 = lua_getinfo((lua_State *)this,(int)uVar4,"sln",(lua_Debug *)local_198);
    if (iVar2 == 0) break;
    sVar3 = local_9b0 >> 1 & 0x7f;
    if ((local_9b0 & 1) != 0) {
      sVar3 = local_9a8;
    }
    if (sVar3 == 0) {
      FUN_00bb6bf0(auStack_998,0x800,0x800,"  %s (%u)\n",local_188,local_17c);
    }
    else {
      pvVar5 = (void *)((ulong)&local_9b0 | 1);
      if ((local_9b0 & 1) != 0) {
        pvVar5 = local_9a0;
      }
                    /* try { // try from 00bbaa50 to 00bbaaa7 has its CatchHandler @ 00bbab10 */
      FUN_00bb6bf0(auStack_998,0x800,0x800,"  %s (%u) : %s\n",local_188,local_17c,pvVar5);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_9b0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
    uVar4 = (ulong)((int)uVar4 + 1);
  }
  if ((local_9b0 & 1) != 0) {
    operator_delete(local_9a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


