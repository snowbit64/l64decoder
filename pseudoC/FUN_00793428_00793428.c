// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00793428
// Entry Point: 00793428
// Size: 344 bytes
// Signature: undefined FUN_00793428(void)


void FUN_00793428(char **param_1)

{
  long lVar1;
  size_t __n;
  undefined8 *this;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar2 = param_1[2];
  __n = strlen(pcVar2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar3 = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_007934b8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar3 = (char *)operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = pcVar3;
  }
  memcpy(pcVar3,pcVar2,__n);
LAB_007934b8:
  pcVar3[__n] = '\0';
                    /* try { // try from 007934bc to 007934c3 has its CatchHandler @ 007935a8 */
  PathUtil::makeUnifiedPathInPlace((basic_string *)&local_60);
                    /* try { // try from 007934c4 to 007934cb has its CatchHandler @ 007935a4 */
  this = (undefined8 *)operator_new(0xf8);
                    /* try { // try from 007934d4 to 007934db has its CatchHandler @ 00793594 */
  Entity::Entity((Entity *)this,*param_1,true);
  *this = &PTR__DomXMLFileEntity_00fdb840;
                    /* try { // try from 007934f0 to 007934f7 has its CatchHandler @ 00793584 */
  DomXMLFile::DomXMLFile((DomXMLFile *)(this + 4));
  pcVar3 = param_1[4];
  pcVar2 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar2 = local_50;
  }
  this[2] = this[2] | 0x400000000000;
                    /* try { // try from 00793520 to 00793527 has its CatchHandler @ 00793580 */
  DomXMLFile::create((DomXMLFile *)(this + 4),pcVar2,pcVar3);
  *(undefined *)(this + 10) = 1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 3);
  *(undefined4 *)(param_1 + 0x21) = 1;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


