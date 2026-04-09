// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: packPlatformServerId
// Entry Point: 00b4298c
// Size: 556 bytes
// Signature: undefined __cdecl packPlatformServerId(basic_string * param_1)


/* WARNING: Removing unreachable block (ram,0x00b42a0c) */
/* WARNING: Removing unreachable block (ram,0x00b429fc) */
/* WARNING: Removing unreachable block (ram,0x00b42a1c) */
/* WARNING: Removing unreachable block (ram,0x00b42a28) */
/* MasterServerUtil::packPlatformServerId(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void MasterServerUtil::packPlatformServerId(basic_string *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong *puVar4;
  char *__src;
  ulong *puVar5;
  bool bVar6;
  size_t __n;
  uchar *puVar7;
  ulong *puVar8;
  byte *__dest;
  ulong uVar9;
  char *local_78;
  ulong *local_70;
  ulong *local_68;
  ulong *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  local_60 = (ulong *)0x0;
                    /* try { // try from 00b429c4 to 00b429cb has its CatchHandler @ 00b42bc4 */
  local_70 = (ulong *)operator_new(0x30);
  local_60 = local_70 + 6;
  *(byte *)local_70 = 0;
  bVar2 = *(byte *)param_1;
  *(byte *)((long)local_70 + 1) = 0;
  puVar7 = *(uchar **)(param_1 + 4);
  local_68 = local_70 + 3;
  local_78 = (char *)0x0;
  bVar6 = (bVar2 & 1) == 0;
  if (bVar6) {
    puVar7 = (uchar *)((long)param_1 + 1);
  }
  uVar1 = (uint)(bVar2 >> 1);
  if (!bVar6) {
    uVar1 = param_1[2];
  }
                    /* try { // try from 00b42a70 to 00b42ae7 has its CatchHandler @ 00b42bc8 */
  StringUtil::base64Encode(puVar7,uVar1,false,&local_78);
  puVar5 = local_68;
  __src = local_78;
  if (local_60 <= local_68) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::__emplace_back_slow_path<char*&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)&local_70,&local_78);
    goto joined_r0x00b42acc;
  }
  __n = strlen(local_78);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b42bac to 00b42bb3 has its CatchHandler @ 00b42bb8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (byte *)((long)puVar5 + 1);
    *(byte *)puVar5 = (byte)((int)__n << 1);
    if (__n != 0) goto LAB_00b42b4c;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b42b34 to 00b42b3b has its CatchHandler @ 00b42bb8 */
    __dest = (byte *)operator_new(uVar9);
    puVar5[1] = __n;
    puVar5[2] = (ulong)__dest;
    *puVar5 = uVar9 | 1;
LAB_00b42b4c:
    memcpy(__dest,__src,__n);
  }
  local_68 = puVar5 + 3;
  __dest[__n] = 0;
joined_r0x00b42acc:
  if (local_78 != (char *)0x0) {
    operator_delete__(local_78);
  }
  StringUtil::join((vector *)&local_70,"|");
  puVar5 = local_70;
  puVar8 = local_68;
  if (local_70 != (ulong *)0x0) {
    while (puVar4 = puVar8, puVar4 != puVar5) {
      puVar8 = puVar4 + -3;
      if ((*(byte *)puVar8 & 1) != 0) {
        operator_delete((void *)puVar4[-1]);
      }
    }
    local_68 = puVar5;
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


