// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCanonicalName
// Entry Point: 00b2b1ec
// Size: 276 bytes
// Signature: undefined __thiscall getCanonicalName(ResourceLoader * this, char * param_1, ResourceDesc * param_2, basic_string * param_3)


/* ResourceLoader::getCanonicalName(char const*, ResourceDesc*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
ResourceLoader::getCanonicalName
          (ResourceLoader *this,char *param_1,ResourceDesc *param_2,basic_string *param_3)

{
  long lVar1;
  char *pcVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar2 = strstr(param_1,"..");
  if ((pcVar2 == (char *)0x0) && (pcVar2 = strchr(param_1,0x5c), pcVar2 == (char *)0x0))
  goto LAB_00b2b2cc;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00b2b298;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_60 = uVar3 | 1;
    local_58 = __n;
    local_50 = __dest;
LAB_00b2b298:
    memcpy(__dest,param_1,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b2b2ac to 00b2b2b7 has its CatchHandler @ 00b2b300 */
  PathUtil::removeBackReferences((basic_string *)&local_60,param_3);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  pcVar2 = (char *)0x1;
LAB_00b2b2cc:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar2);
  }
  return;
}


