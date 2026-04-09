// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ArchiveFileLoader
// Entry Point: 00b2f524
// Size: 336 bytes
// Signature: undefined __thiscall ArchiveFileLoader(ArchiveFileLoader * this, char * param_1, char * param_2, uint param_3)


/* ArchiveFileLoader::ArchiveFileLoader(char const*, char const*, unsigned int) */

void __thiscall
ArchiveFileLoader::ArchiveFileLoader
          (ArchiveFileLoader *this,char *param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  ArchiveFileLoader *pAVar2;
  ulong uVar3;
  
  *(uint *)(this + 8) = param_3;
  *(undefined ***)this = &PTR__ArchiveFileLoader_00fe9490;
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pAVar2 = this + 0x11;
    this[0x10] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00b2f5b0;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pAVar2 = (ArchiveFileLoader *)operator_new(uVar3);
    *(size_t *)(this + 0x18) = sVar1;
    *(ArchiveFileLoader **)(this + 0x20) = pAVar2;
    *(ulong *)(this + 0x10) = uVar3 | 1;
LAB_00b2f5b0:
    memcpy(pAVar2,param_1,sVar1);
  }
  pAVar2[sVar1] = (ArchiveFileLoader)0x0;
  sVar1 = strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00b2f66c to 00b2f673 has its CatchHandler @ 00b2f6b0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pAVar2 = this + 0x29;
    this[0x28] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_00b2f628;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b2f600 to 00b2f607 has its CatchHandler @ 00b2f6b0 */
    pAVar2 = (ArchiveFileLoader *)operator_new(uVar3);
    *(size_t *)(this + 0x30) = sVar1;
    *(ArchiveFileLoader **)(this + 0x38) = pAVar2;
    *(ulong *)(this + 0x28) = uVar3 | 1;
  }
  memcpy(pAVar2,param_2,sVar1);
LAB_00b2f628:
  pAVar2[sVar1] = (ArchiveFileLoader)0x0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(ArchiveFileLoader **)(this + 0x40) = this + 0x48;
                    /* try { // try from 00b2f644 to 00b2f64b has its CatchHandler @ 00b2f674 */
  Mutex::Mutex((Mutex *)(this + 0x58),true);
  return;
}


