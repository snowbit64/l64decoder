// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMD5asBase64
// Entry Point: 00bf19c8
// Size: 376 bytes
// Signature: undefined __thiscall getMD5asBase64(ShaderManager * this, uchar * param_1, uint param_2)


/* ShaderManager::getMD5asBase64(unsigned char const*, unsigned int) */

void __thiscall ShaderManager::getMD5asBase64(ShaderManager *this,uchar *param_1,uint param_2)

{
  long lVar1;
  char *__src;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar2;
  char *local_130;
  MD5Hash aMStack_128 [16];
  undefined auStack_118 [72];
  ulong local_d0;
  ulong uStack_c8;
  undefined *local_c0;
  undefined auStack_b8 [72];
  ulong local_70;
  ulong uStack_68;
  undefined *local_60;
  uchar auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  MD5Hash::MD5Hash(aMStack_128);
                    /* try { // try from 00bf1a00 to 00bf1a1b has its CatchHandler @ 00bf1b40 */
  MD5Hash::add(aMStack_128,(uchar *)this,(uint)param_1);
  MD5Hash::getMD5Hash(aMStack_128,auStack_58);
                    /* try { // try from 00bf1a1c to 00bf1a6f has its CatchHandler @ 00bf1b44 */
  StringUtil::base64Encode(auStack_58,0x10,false,&local_130);
  __src = local_130;
  __n = strlen(local_130);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00bf1b34 to 00bf1b3b has its CatchHandler @ 00bf1b44 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00bf1a90;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_00bf1a90:
  __dest[__n] = 0;
  if (local_130 != (char *)0x0) {
    operator_delete__(local_130);
  }
  if (uStack_68 <= local_70) {
    local_70 = uStack_68;
  }
  if (local_60 == auStack_b8) {
    for (; local_70 != 0; local_70 = local_70 - 1) {
      *(undefined4 *)(local_60 + local_70 * 4 + -4) = 0;
    }
  }
  if (uStack_c8 <= local_d0) {
    local_d0 = uStack_c8;
  }
  if (local_c0 == auStack_118) {
    for (; local_d0 != 0; local_d0 = local_d0 - 1) {
      *(undefined4 *)(local_c0 + local_d0 * 4 + -4) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


