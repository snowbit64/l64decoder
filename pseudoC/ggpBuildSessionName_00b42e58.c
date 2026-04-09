// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ggpBuildSessionName
// Entry Point: 00b42e58
// Size: 468 bytes
// Signature: undefined __thiscall ggpBuildSessionName(MasterServerUtil * this, uint param_1, uint param_2)


/* MasterServerUtil::ggpBuildSessionName(unsigned int, unsigned int) */

void __thiscall
MasterServerUtil::ggpBuildSessionName(MasterServerUtil *this,uint param_1,uint param_2)

{
  uint uVar1;
  uchar *puVar2;
  long lVar3;
  void *pvVar4;
  char *__src;
  bool bVar5;
  char **ppcVar6;
  ulong *puVar7;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar8;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  char *local_80;
  char *pcStack_78;
  char *local_70;
  ulong local_60;
  ulong uStack_58;
  uchar *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  std::__ndk1::to_string((uint)this);
                    /* try { // try from 00b42e8c to 00b42e9b has its CatchHandler @ 00b43080 */
  ppcVar6 = (char **)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((char *)local_98);
  local_70 = ppcVar6[2];
  pcStack_78 = ppcVar6[1];
  local_80 = *ppcVar6;
  ppcVar6[1] = (char *)0x0;
  ppcVar6[2] = (char *)0x0;
  *ppcVar6 = (char *)0x0;
                    /* try { // try from 00b42eb4 to 00b42ec3 has its CatchHandler @ 00b43060 */
  std::__ndk1::to_string(param_1);
  pvVar4 = (void *)((ulong)local_b0 | 1);
  if ((local_b0[0] & 1) != 0) {
    pvVar4 = local_a0;
  }
                    /* try { // try from 00b42ee0 to 00b42ee7 has its CatchHandler @ 00b4302c */
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_80,(ulong)pvVar4);
  local_50 = (uchar *)puVar7[2];
  uStack_58 = puVar7[1];
  local_60 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  local_80 = (char *)0x0;
  bVar5 = (local_60 & 1) != 0;
  puVar2 = (uchar *)((ulong)&local_60 | 1);
  if (bVar5) {
    puVar2 = local_50;
  }
  uVar1 = (uint)((byte)local_60 >> 1);
  if (bVar5) {
    uVar1 = (uint)uStack_58;
  }
                    /* try { // try from 00b42f48 to 00b42fb7 has its CatchHandler @ 00b43094 */
  StringUtil::base64Encode(puVar2,uVar1,false,&local_80);
  __src = local_80;
  __n = strlen(local_80);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b43020 to 00b43027 has its CatchHandler @ 00b43094 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00b42fd8;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar8);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar8 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_00b42fd8:
  __dest[__n] = 0;
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


