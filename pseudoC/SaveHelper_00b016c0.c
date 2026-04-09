// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SaveHelper
// Entry Point: 00b016c0
// Size: 312 bytes
// Signature: undefined __thiscall SaveHelper(SaveHelper * this, char * param_1, char * param_2)


/* SaveHelper::SaveHelper(char const*, char const*) */

void __thiscall SaveHelper::SaveHelper(SaveHelper *this,char *param_1,char *param_2)

{
  size_t sVar1;
  SaveHelper *pSVar2;
  ulong uVar3;
  
  *(undefined ***)this = &PTR__SaveHelper_00fe7110;
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pSVar2 = this + 9;
    this[8] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00b01748;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pSVar2 = (SaveHelper *)operator_new(uVar3);
    *(size_t *)(this + 0x10) = sVar1;
    *(SaveHelper **)(this + 0x18) = pSVar2;
    *(ulong *)(this + 8) = uVar3 | 1;
LAB_00b01748:
    memcpy(pSVar2,param_1,sVar1);
  }
  pSVar2[sVar1] = (SaveHelper)0x0;
  sVar1 = strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00b017f0 to 00b017f7 has its CatchHandler @ 00b017f8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pSVar2 = this + 0x21;
    this[0x20] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_00b017bc;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b01794 to 00b0179b has its CatchHandler @ 00b017f8 */
    pSVar2 = (SaveHelper *)operator_new(uVar3);
    *(size_t *)(this + 0x28) = sVar1;
    *(SaveHelper **)(this + 0x30) = pSVar2;
    *(ulong *)(this + 0x20) = uVar3 | 1;
  }
  memcpy(pSVar2,param_2,sVar1);
LAB_00b017bc:
  pSVar2[sVar1] = (SaveHelper)0x0;
  this[0x50] = (SaveHelper)0x0;
  this[0x51] = (SaveHelper)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}


