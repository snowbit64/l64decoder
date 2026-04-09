// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShaderDefineString
// Entry Point: 009536d0
// Size: 848 bytes
// Signature: undefined __cdecl getShaderDefineString(ShaderCapabilities * param_1, bool param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* MaterialShaderManager::getShaderDefineString(ShaderCapabilities const*, bool, unsigned int,
   unsigned int, unsigned int, unsigned int) */

void MaterialShaderManager::getShaderDefineString
               (ShaderCapabilities *param_1,bool param_2,uint param_3,uint param_4,uint param_5,
               uint param_6)

{
  long lVar1;
  void *pvVar2;
  ulong *puVar3;
  uint in_w6;
  undefined8 *in_x8;
  long lVar4;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 0095372c to 00953773 has its CatchHandler @ 00953a54 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)in_x8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  lVar4 = 0;
  do {
                    /* try { // try from 009537a8 to 009537bf has its CatchHandler @ 00953a8c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
                    /* try { // try from 009537c0 to 009537cb has its CatchHandler @ 00953a88 */
    std::__ndk1::to_string((uint)lVar4);
                    /* try { // try from 009537cc to 009537db has its CatchHandler @ 00953a70 */
    puVar3 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::insert((ulong)local_98,(char *)0x0);
    local_70 = (void *)puVar3[2];
    uStack_78 = puVar3[1];
    local_80 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    pvVar2 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pvVar2 = local_70;
    }
                    /* try { // try from 0095380c to 00953813 has its CatchHandler @ 00953a58 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8,(ulong)pvVar2);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 6);
                    /* try { // try from 00953838 to 00953883 has its CatchHandler @ 00953a54 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  if ((param_3 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
  }
  if (param_4 != 0xffffffff) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
                    /* try { // try from 00953884 to 00953893 has its CatchHandler @ 00953a50 */
    std::__ndk1::to_string(param_4);
    pvVar2 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pvVar2 = local_70;
    }
                    /* try { // try from 009538b0 to 009538b7 has its CatchHandler @ 00953a38 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8,(ulong)pvVar2);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if (param_5 != 0xffffffff) {
                    /* try { // try from 009538d0 to 009538df has its CatchHandler @ 00953a54 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
                    /* try { // try from 009538e0 to 009538ef has its CatchHandler @ 00953a34 */
    std::__ndk1::to_string(param_5);
    pvVar2 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pvVar2 = local_70;
    }
                    /* try { // try from 0095390c to 00953913 has its CatchHandler @ 00953a30 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8,(ulong)pvVar2);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
                    /* try { // try from 00953924 to 00953933 has its CatchHandler @ 00953a54 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
                    /* try { // try from 00953934 to 00953943 has its CatchHandler @ 00953a2c */
    std::__ndk1::to_string(param_6);
    pvVar2 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pvVar2 = local_70;
    }
                    /* try { // try from 00953960 to 00953967 has its CatchHandler @ 00953a28 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8,(ulong)pvVar2);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
                    /* try { // try from 00953978 to 00953987 has its CatchHandler @ 00953a54 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
                    /* try { // try from 00953988 to 00953997 has its CatchHandler @ 00953a24 */
    std::__ndk1::to_string(in_w6);
    pvVar2 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pvVar2 = local_70;
    }
                    /* try { // try from 009539b4 to 009539bb has its CatchHandler @ 00953a20 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8,(ulong)pvVar2);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
                    /* try { // try from 009539cc to 009539eb has its CatchHandler @ 00953a54 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


