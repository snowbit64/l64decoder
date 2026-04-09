// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShaderCapabilities
// Entry Point: 00aab894
// Size: 876 bytes
// Signature: undefined __thiscall ShaderCapabilities(ShaderCapabilities * this, ShaderLanguage param_1, VS_VERSION param_2, uint param_3, FS_VERSION param_4, uint param_5, char * param_6, char * param_7, uint param_8)


/* ShaderCapabilities::ShaderCapabilities(ShaderLanguage, ShaderCapabilities::VS_VERSION, unsigned
   int, ShaderCapabilities::FS_VERSION, unsigned int, char const*, char const*, unsigned int) */

void __thiscall
ShaderCapabilities::ShaderCapabilities
          (ShaderCapabilities *this,ShaderLanguage param_1,VS_VERSION param_2,uint param_3,
          FS_VERSION param_4,uint param_5,char *param_6,char *param_7,uint param_8)

{
  ShaderCapabilities *pSVar1;
  size_t sVar2;
  undefined8 *puVar3;
  ShaderCapabilities *pSVar4;
  ulong uVar5;
  
  *(uint *)(this + 8) = param_3;
  *(FS_VERSION *)(this + 0xc) = param_4;
  pSVar1 = this + 0x18;
  *(ShaderLanguage *)this = param_1;
  *(VS_VERSION *)(this + 4) = param_2;
  *(uint *)(this + 0x10) = param_5;
  *(uint *)(this + 0x14) = param_8;
  sVar2 = strlen(param_6);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pSVar4 = this + 0x19;
    *pSVar1 = SUB41((int)sVar2 << 1,0);
    if (sVar2 != 0) goto LAB_00aab94c;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pSVar4 = (ShaderCapabilities *)operator_new(uVar5);
    *(size_t *)(this + 0x20) = sVar2;
    *(ShaderCapabilities **)(this + 0x28) = pSVar4;
    *(ulong *)(this + 0x18) = uVar5 | 1;
LAB_00aab94c:
    memcpy(pSVar4,param_6,sVar2);
  }
  pSVar4[sVar2] = (ShaderCapabilities)0x0;
  sVar2 = strlen(param_7);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00aabbf8 to 00aabbff has its CatchHandler @ 00aabc00 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pSVar4 = this + 0x31;
    this[0x30] = SUB41((int)sVar2 << 1,0);
    if (sVar2 == 0) goto LAB_00aab9cc;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00aab9a0 to 00aab9a7 has its CatchHandler @ 00aabc00 */
    pSVar4 = (ShaderCapabilities *)operator_new(uVar5);
    *(size_t *)(this + 0x38) = sVar2;
    *(ShaderCapabilities **)(this + 0x40) = pSVar4;
    *(ulong *)(this + 0x30) = uVar5 | 1;
  }
  memcpy(pSVar4,param_7,sVar2);
LAB_00aab9cc:
  pSVar4[sVar2] = (ShaderCapabilities)0x0;
  puVar3 = (undefined8 *)(this + 0x48);
  *puVar3 = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  if ((param_1 < 7) && ((1 << (ulong)(param_1 & 0x1f) & 0x46U) != 0)) {
                    /* try { // try from 00aab9fc to 00aabbcf has its CatchHandler @ 00aabc10 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pSVar1);
  }
  if (param_1 - 3 < 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pSVar1);
  }
  if (((param_1 < 7) && ((1 << (ulong)(param_1 & 0x1f) & 0x46U) != 0)) || (param_1 - 3 < 2)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pSVar1);
  }
  if (param_1 == 5) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pSVar1);
  }
  else if (param_1 == 6) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pSVar1);
  }
  if (((int)param_2 < 5) || ((int)param_4 < 5)) {
    if (((int)param_2 < 4) || ((int)param_4 < 4)) {
      if (((int)param_2 < 3) || ((int)param_4 < 3)) {
        if (((int)param_2 < 2) || ((int)param_4 < 2)) {
          if (((int)param_2 < 1) || ((int)param_4 < 1)) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)pSVar1);
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)pSVar1);
          }
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)pSVar1);
        }
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)pSVar1);
      }
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)pSVar1);
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pSVar1);
  }
  if ((param_8 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pSVar1);
  }
  if ((param_8 >> 2 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pSVar1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)puVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar3);
  if ((param_8 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)puVar3);
  }
  if ((param_8 >> 2 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)puVar3);
  }
  return;
}


