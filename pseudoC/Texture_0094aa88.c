// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Texture
// Entry Point: 0094aa88
// Size: 380 bytes
// Signature: undefined __thiscall Texture(Texture * this, char * param_1, char * param_2, bool param_3, bool param_4, char * param_5, TEX_TYPE param_6)


/* CustomShader::Texture::Texture(char const*, char const*, bool, bool, char const*,
   ITextureObject::TEX_TYPE) */

void __thiscall
CustomShader::Texture::Texture
          (Texture *this,char *param_1,char *param_2,bool param_3,bool param_4,char *param_5,
          TEX_TYPE param_6)

{
  size_t sVar1;
  ulong uVar2;
  Texture *pTVar3;
  
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pTVar3 = this + 1;
    *this = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_0094ab18;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pTVar3 = (Texture *)operator_new(uVar2);
    *(size_t *)(this + 8) = sVar1;
    *(Texture **)(this + 0x10) = pTVar3;
    *(ulong *)this = uVar2 | 1;
LAB_0094ab18:
    memcpy(pTVar3,param_1,sVar1);
  }
  pTVar3[sVar1] = (Texture)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  sVar1 = strlen(param_5);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 0094abfc to 0094ac03 has its CatchHandler @ 0094ac3c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pTVar3 = this + 0x39;
    this[0x38] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) {
      *pTVar3 = (Texture)0x0;
      goto joined_r0x0094abac;
    }
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0094ab80 to 0094ab87 has its CatchHandler @ 0094ac3c */
    pTVar3 = (Texture *)operator_new(uVar2);
    *(size_t *)(this + 0x40) = sVar1;
    *(Texture **)(this + 0x48) = pTVar3;
    *(ulong *)(this + 0x38) = uVar2 | 1;
  }
  memcpy(pTVar3,param_5,sVar1);
  pTVar3[sVar1] = (Texture)0x0;
joined_r0x0094abac:
  if (param_2 != (char *)0x0) {
                    /* try { // try from 0094abb0 to 0094abbb has its CatchHandler @ 0094ac04 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x18));
  }
  *(TEX_TYPE *)(this + 0x50) = param_6;
  this[0x31] = (Texture)param_4;
  this[0x30] = (Texture)param_3;
  return;
}


