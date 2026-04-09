// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NativeFileLoader
// Entry Point: 00b34658
// Size: 416 bytes
// Signature: undefined __thiscall NativeFileLoader(NativeFileLoader * this, char * param_1, char * param_2, char * param_3, uint param_4)


/* NativeFileLoader::NativeFileLoader(char const*, char const*, char const*, unsigned int) */

void __thiscall
NativeFileLoader::NativeFileLoader
          (NativeFileLoader *this,char *param_1,char *param_2,char *param_3,uint param_4)

{
  size_t sVar1;
  NativeFileLoader *pNVar2;
  ulong uVar3;
  
  *(uint *)(this + 8) = param_4;
  *(undefined ***)this = &PTR__NativeFileLoader_00fe98d0;
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pNVar2 = this + 0x11;
    this[0x10] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00b346e8;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pNVar2 = (NativeFileLoader *)operator_new(uVar3);
    *(size_t *)(this + 0x18) = sVar1;
    *(NativeFileLoader **)(this + 0x20) = pNVar2;
    *(ulong *)(this + 0x10) = uVar3 | 1;
LAB_00b346e8:
    memcpy(pNVar2,param_1,sVar1);
  }
  pNVar2[sVar1] = (NativeFileLoader)0x0;
  sVar1 = strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00b347e8 to 00b347ef has its CatchHandler @ 00b34828 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pNVar2 = this + 0x29;
    this[0x28] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00b34750;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b34738 to 00b3473f has its CatchHandler @ 00b34828 */
    pNVar2 = (NativeFileLoader *)operator_new(uVar3);
    *(size_t *)(this + 0x30) = sVar1;
    *(NativeFileLoader **)(this + 0x38) = pNVar2;
    *(ulong *)(this + 0x28) = uVar3 | 1;
LAB_00b34750:
    memcpy(pNVar2,param_2,sVar1);
  }
  pNVar2[sVar1] = (NativeFileLoader)0x0;
  sVar1 = strlen(param_3);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00b347f0 to 00b347f7 has its CatchHandler @ 00b347f8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pNVar2 = this + 0x41;
    this[0x40] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_00b347c4;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b3479c to 00b347a3 has its CatchHandler @ 00b347f8 */
    pNVar2 = (NativeFileLoader *)operator_new(uVar3);
    *(size_t *)(this + 0x48) = sVar1;
    *(NativeFileLoader **)(this + 0x50) = pNVar2;
    *(ulong *)(this + 0x40) = uVar3 | 1;
  }
  memcpy(pNVar2,param_3,sVar1);
LAB_00b347c4:
  pNVar2[sVar1] = (NativeFileLoader)0x0;
  return;
}


