// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateChunkName
// Entry Point: 00bb6b48
// Size: 168 bytes
// Signature: undefined __thiscall generateChunkName(LuauScriptSystem * this, uchar * param_1, uint param_2, char * param_3, char * param_4, uint param_5)


/* LuauScriptSystem::generateChunkName(unsigned char const*, unsigned int, char const*, char*,
   unsigned int) */

void __thiscall
LuauScriptSystem::generateChunkName
          (LuauScriptSystem *this,uchar *param_1,uint param_2,char *param_3,char *param_4,
          uint param_5)

{
  uint uVar1;
  
  if (param_3 != (char *)0x0) {
    FUN_00bb6bf0(param_4,0xffffffffffffffff,param_5,&DAT_00510d4c,param_3);
    return;
  }
  if (*param_1 == '=') {
    uVar1 = param_5 - 2;
    if (param_2 <= param_5 - 2) {
      uVar1 = param_2;
    }
    *param_4 = ' ';
    memcpy(param_4 + 1,param_1,(ulong)uVar1);
  }
  else {
    uVar1 = param_5 - 1;
    if (param_2 <= param_5 - 1) {
      uVar1 = param_2;
    }
    memcpy(param_4,param_1,(ulong)uVar1);
  }
  uVar1 = param_5 - 1;
  if (param_2 <= param_5 - 1) {
    uVar1 = param_2;
  }
  param_4[uVar1] = '\0';
  return;
}


