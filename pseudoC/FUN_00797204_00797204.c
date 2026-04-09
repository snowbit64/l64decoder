// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797204
// Entry Point: 00797204
// Size: 232 bytes
// Signature: undefined FUN_00797204(void)


void FUN_00797204(char **param_1)

{
  AndroidInAppPurchase *this;
  ulong *puVar1;
  size_t __n;
  char *__s;
  undefined *__dest;
  ulong uVar2;
  char *pcVar3;
  
  EngineManager::getInstance();
  this = (AndroidInAppPurchase *)EngineManager::getInAppPurchase();
  if (*(int *)(param_1 + 3) == 8) {
    pcVar3 = param_1[2];
  }
  else {
    pcVar3 = (char *)0x0;
  }
  puVar1 = (ulong *)operator_new(0x20);
  __s = *param_1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 007972e4 to 007972eb has its CatchHandler @ 007972ec */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007972b4;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0079728c to 00797293 has its CatchHandler @ 007972ec */
    __dest = (undefined *)operator_new(uVar2);
    puVar1[1] = __n;
    puVar1[2] = (ulong)__dest;
    *puVar1 = uVar2 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007972b4:
  __dest[__n] = 0;
  puVar1[3] = (ulong)pcVar3;
  AndroidInAppPurchase::restorePurchases(this,ScriptingInAppPurchaseRestore::StaticCallback,puVar1);
  return;
}


