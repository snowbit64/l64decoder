// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCallerSite
// Entry Point: 00bbadc0
// Size: 384 bytes
// Signature: undefined __cdecl getCallerSite(basic_string * param_1)


/* LuauScriptSystem::getCallerSite(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*) */

void LuauScriptSystem::getCallerSite(basic_string *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  size_t __n;
  undefined8 *in_x1;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar4;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  char acStack_378 [512];
  lua_Debug alStack_178 [16];
  undefined8 local_168;
  undefined4 local_15c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  checkYieldState();
  iVar2 = lua_getinfo(*(lua_State **)(param_1 + 2),1,"sln",alStack_178);
  if (iVar2 == 0) {
    if (in_x1 != (undefined8 *)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)in_x1);
    }
    *(undefined *)((long)in_x8 + 0x14) = 0;
    *(undefined *)in_x8 = 0x26;
    *(undefined4 *)(in_x8 + 2) = 0x65746973;
    *(undefined8 *)((long)in_x8 + 9) = 0x732072656c6c6163;
    *(undefined8 *)((long)in_x8 + 1) = 0x206e776f6e6b6e55;
    goto LAB_00bbaf0c;
  }
  pcVar3 = (char *)FUN_00bb6bf0(acStack_378,0x200,0x200,"%.400s (%u)",local_168,local_15c);
  if (in_x1 != (undefined8 *)0x0) {
    readLineOfCode(pcVar3,(uint)local_168);
    if ((*(byte *)in_x1 & 1) != 0) {
      operator_delete((void *)in_x1[2]);
    }
    in_x1[1] = uStack_388;
    *in_x1 = local_390;
    in_x1[2] = local_380;
  }
  __n = strlen(acStack_378);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00bbaef8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar4);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar4 | 1;
LAB_00bbaef8:
    memcpy(__dest,acStack_378,__n);
  }
  __dest[__n] = 0;
LAB_00bbaf0c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


