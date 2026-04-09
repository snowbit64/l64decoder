// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: error
// Entry Point: 00c19e94
// Size: 1012 bytes
// Signature: undefined __cdecl error(GsTSourceLoc param_1, char * param_2, char * param_3, char * param_4, ...)


/* GISLParserContext::error(GsTSourceLoc, char const*, char const*, char const*, ...) */

void GISLParserContext::error(GsTSourceLoc param_1,char *param_2,char *param_3,char *param_4,...)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  char *pcVar5;
  long lVar6;
  undefined8 in_x4;
  char *in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong *puVar7;
  undefined auStack_270 [8];
  undefined8 local_268;
  undefined8 uStack_260;
  byte local_238;
  void *local_228;
  undefined *local_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  char acStack_1f8 [400];
  long local_68;
  
  pcVar5 = (char *)(ulong)param_1;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_268 = in_x6;
  uStack_260 = in_x7;
  findSourceFile(pcVar5);
  puStack_210 = auStack_270;
  puStack_218 = &stack0xfffffffffffffda8;
  uStack_208 = 0xffffff80fffffff0;
  local_220 = (undefined *)register0x00000008;
  vsnprintf(acStack_1f8,400,in_x5,&local_220);
                    /* try { // try from 00c19f50 to 00c1a237 has its CatchHandler @ 00c1a288 */
  GsTInfoSinkBase::location((GsTSourceLoc)*(undefined8 *)(pcVar5 + 8));
  puVar7 = *(ulong **)(pcVar5 + 8);
  bVar4 = (*(byte *)puVar7 & 1) != 0;
  uVar1 = (ulong)(*(byte *)puVar7 >> 1);
  if (bVar4) {
    uVar1 = puVar7[1];
  }
  uVar2 = 0x16;
  if (bVar4) {
    uVar2 = (*puVar7 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < uVar1 + 9) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar7);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar7);
  puVar7 = *(ulong **)(pcVar5 + 8);
  lVar6 = __strlen_chk(&DAT_004e44bd,2);
  bVar4 = (*(byte *)puVar7 & 1) != 0;
  uVar1 = (ulong)(*(byte *)puVar7 >> 1);
  if (bVar4) {
    uVar1 = puVar7[1];
  }
  uVar2 = 0x16;
  if (bVar4) {
    uVar2 = (*puVar7 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < lVar6 + uVar1 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar7);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar7);
  lVar6 = __strlen_chk(in_x4,0xffffffffffffffff);
  bVar4 = (*(byte *)puVar7 & 1) != 0;
  uVar1 = (ulong)(*(byte *)puVar7 >> 1);
  if (bVar4) {
    uVar1 = puVar7[1];
  }
  uVar2 = 0x16;
  if (bVar4) {
    uVar2 = (*puVar7 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < lVar6 + uVar1 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar7);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar7);
  lVar6 = __strlen_chk(&DAT_004dc6c8,5);
  bVar4 = (*(byte *)puVar7 & 1) != 0;
  uVar1 = (ulong)(*(byte *)puVar7 >> 1);
  if (bVar4) {
    uVar1 = puVar7[1];
  }
  uVar2 = 0x16;
  if (bVar4) {
    uVar2 = (*puVar7 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < lVar6 + uVar1 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar7);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar7);
  lVar6 = __strlen_chk(param_4,0xffffffffffffffff);
  bVar4 = (*(byte *)puVar7 & 1) != 0;
  uVar1 = (ulong)(*(byte *)puVar7 >> 1);
  if (bVar4) {
    uVar1 = puVar7[1];
  }
  uVar2 = 0x16;
  if (bVar4) {
    uVar2 = (*puVar7 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < lVar6 + uVar1 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar7);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar7);
  lVar6 = __strlen_chk(&DAT_004d3339,2);
  bVar4 = (*(byte *)puVar7 & 1) != 0;
  uVar1 = (ulong)(*(byte *)puVar7 >> 1);
  if (bVar4) {
    uVar1 = puVar7[1];
  }
  uVar2 = 0x16;
  if (bVar4) {
    uVar2 = (*puVar7 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < lVar6 + uVar1 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar7);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar7);
  lVar6 = __strlen_chk(acStack_1f8,400);
  bVar4 = (*(byte *)puVar7 & 1) != 0;
  uVar1 = (ulong)(*(byte *)puVar7 >> 1);
  if (bVar4) {
    uVar1 = puVar7[1];
  }
  uVar2 = 0x16;
  if (bVar4) {
    uVar2 = (*puVar7 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < lVar6 + uVar1 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar7);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar7);
  lVar6 = __strlen_chk(&DAT_004fddf9,2);
  bVar4 = (*(byte *)puVar7 & 1) != 0;
  uVar1 = (ulong)(*(byte *)puVar7 >> 1);
  if (bVar4) {
    uVar1 = puVar7[1];
  }
  uVar2 = 0x16;
  if (bVar4) {
    uVar2 = (*puVar7 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < lVar6 + uVar1 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar7);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar7);
  *(int *)(pcVar5 + 0x1c) = *(int *)(pcVar5 + 0x1c) + 1;
  if ((local_238 & 1) != 0) {
    operator_delete(local_228);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


