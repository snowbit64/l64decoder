// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: utf8Substr
// Entry Point: 00b9fad0
// Size: 220 bytes
// Signature: undefined __cdecl utf8Substr(char * param_1, uint param_2, uint param_3)


/* StringUtil::utf8Substr(char const*, unsigned int, unsigned int) */

undefined * StringUtil::utf8Substr(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  undefined *puVar4;
  undefined *__dest;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  sVar3 = strlen(param_1);
  uVar7 = 0;
  uVar5 = (uint)sVar3;
  if (param_2 != 0) {
    do {
      iVar2 = utf8Next(param_1 + uVar7);
      if ((iVar2 == 0) || (uVar7 = iVar2 + uVar7, uVar5 <= uVar7)) {
        return (undefined *)0x0;
      }
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  uVar6 = uVar5;
  if (param_3 != 0xffffffff) {
    uVar1 = uVar7;
    if (param_3 == 0) {
      puVar4 = (undefined *)operator_new__(1);
      __dest = puVar4;
      goto LAB_00b9fb90;
    }
    do {
      iVar2 = utf8Next(param_1 + uVar1);
      uVar6 = uVar5;
      if ((iVar2 == 0) || (uVar1 = iVar2 + uVar1, uVar5 <= uVar1)) break;
      param_3 = param_3 - 1;
      uVar6 = uVar1;
    } while (param_3 != 0);
  }
  uVar6 = uVar6 - uVar7;
  __dest = (undefined *)operator_new__((ulong)(uVar6 + 1));
  memcpy(__dest,param_1 + uVar7,(ulong)uVar6);
  puVar4 = __dest + uVar6;
LAB_00b9fb90:
  *puVar4 = 0;
  return __dest;
}


