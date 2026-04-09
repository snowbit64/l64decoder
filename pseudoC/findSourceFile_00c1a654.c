// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findSourceFile
// Entry Point: 00c1a654
// Size: 264 bytes
// Signature: undefined __cdecl findSourceFile(char * param_1)


/* GISLParserContext::findSourceFile(char const*) */

void GISLParserContext::findSourceFile(char *param_1)

{
  int iVar1;
  ulong uVar2;
  size_t __n;
  char *pcVar3;
  char *in_x1;
  ulong *in_x8;
  undefined *__dest;
  
  if (in_x1 == (char *)0x0) {
    *(undefined *)((long)in_x8 + 0xf) = 0;
    *(undefined *)in_x8 = 0x1c;
    *(undefined8 *)((long)in_x8 + 1) = 0x6e776f6e6b6e753c;
    *(undefined8 *)((long)in_x8 + 7) = 0x3e656c6966206e77;
    return;
  }
  uVar2 = PathUtil::isAbsolutePath(in_x1);
  if ((uVar2 & 1) == 0) {
    iVar1 = strncasecmp(in_x1,"shared/shader/",0xe);
    if (iVar1 == 0) {
      pcVar3 = param_1 + 0x60;
    }
    else {
      pcVar3 = param_1 + 0x78;
    }
    FUN_006cadd8(pcVar3);
    return;
  }
  __n = strlen(in_x1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00c1a724;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,in_x1,__n);
LAB_00c1a724:
  __dest[__n] = 0;
  return;
}


