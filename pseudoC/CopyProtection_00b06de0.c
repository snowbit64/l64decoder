// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyProtection
// Entry Point: 00b06de0
// Size: 300 bytes
// Signature: undefined __thiscall CopyProtection(CopyProtection * this, uint param_1, char * param_2, char * param_3)


/* CopyProtection::CopyProtection(unsigned int, char const*, char const*) */

void __thiscall
CopyProtection::CopyProtection(CopyProtection *this,uint param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  CopyProtection *pCVar2;
  ulong uVar3;
  
  sVar1 = strlen(param_3);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pCVar2 = this + 9;
    this[8] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00b06e5c;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pCVar2 = (CopyProtection *)operator_new(uVar3);
    *(size_t *)(this + 0x10) = sVar1;
    *(CopyProtection **)(this + 0x18) = pCVar2;
    *(ulong *)(this + 8) = uVar3 | 1;
LAB_00b06e5c:
    memcpy(pCVar2,param_3,sVar1);
  }
  pCVar2[sVar1] = (CopyProtection)0x0;
  sVar1 = strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00b06f04 to 00b06f0b has its CatchHandler @ 00b06f0c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pCVar2 = this + 0x21;
    this[0x20] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_00b06ed0;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b06ea8 to 00b06eaf has its CatchHandler @ 00b06f0c */
    pCVar2 = (CopyProtection *)operator_new(uVar3);
    *(size_t *)(this + 0x28) = sVar1;
    *(CopyProtection **)(this + 0x30) = pCVar2;
    *(ulong *)(this + 0x20) = uVar3 | 1;
  }
  memcpy(pCVar2,param_2,sVar1);
LAB_00b06ed0:
  pCVar2[sVar1] = (CopyProtection)0x0;
  *(uint *)(this + 4) = param_1;
  *this = (CopyProtection)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


