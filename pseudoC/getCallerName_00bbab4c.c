// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCallerName
// Entry Point: 00bbab4c
// Size: 276 bytes
// Signature: undefined getCallerName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::getCallerName() */

void LuauScriptSystem::getCallerName(void)

{
  char *__s;
  long lVar1;
  int iVar2;
  long in_x0;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar3;
  char *local_178;
  char *pcStack_170;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  checkYieldState();
  iVar2 = lua_getinfo(*(lua_State **)(in_x0 + 8),1,"sln",(lua_Debug *)&local_178);
  if (iVar2 == 0) {
    *(undefined *)in_x8 = 6;
    *(undefined4 *)((long)in_x8 + 1) = 0x3f3f3f;
    goto LAB_00bbac2c;
  }
  __s = local_178;
  if (local_178 == (char *)0x0 || *pcStack_170 == '\0') {
    __s = "???";
  }
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00bbac18;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar3);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar3 | 1;
LAB_00bbac18:
    memcpy(__dest,__s,__n);
  }
  __dest[__n] = 0;
LAB_00bbac2c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


