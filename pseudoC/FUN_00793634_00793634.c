// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00793634
// Entry Point: 00793634
// Size: 368 bytes
// Signature: undefined FUN_00793634(void)


void FUN_00793634(char **param_1)

{
  long lVar1;
  size_t __n;
  long *this;
  ulong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *__dest;
  undefined8 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar4 = param_1[2];
  __n = strlen(pcVar4);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_007936c4;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar2);
    local_60 = uVar2 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,pcVar4,__n);
LAB_007936c4:
  __dest[__n] = '\0';
                    /* try { // try from 007936c8 to 007936cf has its CatchHandler @ 007937c4 */
  PathUtil::makeUnifiedPathInPlace((basic_string *)&local_60);
                    /* try { // try from 007936d0 to 007936d7 has its CatchHandler @ 007937c8 */
  this = (long *)operator_new(0xf8);
                    /* try { // try from 007936e0 to 007936e7 has its CatchHandler @ 007937b4 */
  Entity::Entity((Entity *)this,*param_1,true);
  *this = (long)&PTR__DomXMLFileEntity_00fdb840;
                    /* try { // try from 007936fc to 00793703 has its CatchHandler @ 007937a4 */
  DomXMLFile::DomXMLFile((DomXMLFile *)(this + 4));
  pcVar4 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar4 = local_50;
  }
  this[2] = this[2] | 0x400000000000;
                    /* try { // try from 00793728 to 00793733 has its CatchHandler @ 007937c8 */
  uVar2 = DomXMLFile::loadFromFile((DomXMLFile *)(this + 4),pcVar4,true);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*this + 8))(this);
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(this + 3);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar3;
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


