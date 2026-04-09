// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCloudErrorReport
// Entry Point: 0078947c
// Size: 228 bytes
// Signature: undefined __cdecl setCloudErrorReport(char * param_1, void * param_2)


/* ScriptingSavegameReport::setCloudErrorReport(char const*, void*) */

void ScriptingSavegameReport::setCloudErrorReport(char *param_1,void *param_2)

{
  ScriptingSavegameReport *pSVar1;
  ulong *puVar2;
  size_t __n;
  undefined *__dest;
  ulong uVar3;
  
  pSVar1 = (ScriptingSavegameReport *)s_cloudErrorReport;
  if (s_cloudErrorReport != (ulong *)0x0) {
    ~ScriptingSavegameReport((ScriptingSavegameReport *)s_cloudErrorReport);
    operator_delete(pSVar1);
  }
  if (param_1 == (char *)0x0) {
    s_cloudErrorReport = (ulong *)0x0;
    return;
  }
  puVar2 = (ulong *)operator_new(0x20);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00789558 to 0078955f has its CatchHandler @ 00789560 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar2 + 1);
    *(char *)puVar2 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00789534;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0078950c to 00789513 has its CatchHandler @ 00789560 */
    __dest = (undefined *)operator_new(uVar3);
    puVar2[1] = __n;
    puVar2[2] = (ulong)__dest;
    *puVar2 = uVar3 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_00789534:
  __dest[__n] = 0;
  puVar2[3] = (ulong)param_2;
  s_cloudErrorReport = puVar2;
  return;
}


