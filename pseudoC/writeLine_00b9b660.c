// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeLine
// Entry Point: 00b9b660
// Size: 380 bytes
// Signature: undefined __cdecl writeLine(char * param_1, ...)


/* CodeStringStream::writeLine(char const*, ...) */

void CodeStringStream::writeLine(char *param_1,...)

{
  long lVar1;
  uint uVar2;
  size_t sVar3;
  char *pcVar4;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined *puVar5;
  undefined *local_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar4 = param_1 + 0x19;
  if ((param_1[0x18] & 1U) != 0) {
    pcVar4 = *(char **)(param_1 + 0x28);
  }
  local_1c0 = in_x2;
  local_1b8 = in_x3;
  uStack_1b0 = in_x4;
  local_1a8 = in_x5;
  uStack_1a0 = in_x6;
  local_198 = in_x7;
  sVar3 = strlen(pcVar4);
  StringStream::pushString((StringStream *)param_1,pcVar4,(uint)sVar3);
  puStack_168 = &stack0xfffffffffffffe70;
  puStack_160 = &local_1c0;
  uStack_158 = 0xffffff80ffffffd0;
  local_170 = (undefined *)register0x00000008;
  uVar2 = vsnprintf(acStack_148,0x100,in_x1,&local_170);
  if (-1 < (int)uVar2) {
    if (uVar2 < 0x100) {
      uVar2 = __strlen_chk(acStack_148,0x100);
      StringStream::pushString((StringStream *)param_1,acStack_148,uVar2);
    }
    else {
      puVar5 = (undefined *)register0x00000008;
      pcVar4 = (char *)operator_new__((ulong)(uVar2 + 1));
      uStack_158 = 0xffffff80ffffffd0;
      local_170 = puVar5;
      puStack_168 = &stack0xfffffffffffffe70;
      puStack_160 = &local_1c0;
      vsnprintf(pcVar4,(ulong)(uVar2 + 1),in_x1,&local_170);
      sVar3 = strlen(pcVar4);
      StringStream::pushString((StringStream *)param_1,pcVar4,(uint)sVar3);
      operator_delete__(pcVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


