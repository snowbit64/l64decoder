// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeUtf8StringAttribute
// Entry Point: 0090a580
// Size: 688 bytes
// Signature: undefined __thiscall writeUtf8StringAttribute(I3DWriter * this, char * param_1, char * param_2, bool param_3)


/* I3DWriter::writeUtf8StringAttribute(char const*, char const*, bool) */

void __thiscall
I3DWriter::writeUtf8StringAttribute(I3DWriter *this,char *param_1,char *param_2,bool param_3)

{
  void *pvVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  size_t __n;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 local_88;
  size_t local_80;
  char *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  if (!param_3) {
                    /* try { // try from 0090a5f4 to 0090a603 has its CatchHandler @ 0090a864 */
    StringUtil::convertUtf8ToAscii(param_2,(basic_string *)&local_70,false);
    goto LAB_0090a67c;
  }
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0090a824 to 0090a82b has its CatchHandler @ 0090a830 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar8 = (char *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0090a628;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0090a610 to 0090a617 has its CatchHandler @ 0090a830 */
    pcVar8 = (char *)operator_new(uVar9);
    local_88 = uVar9 | 1;
    local_80 = __n;
    local_78 = pcVar8;
LAB_0090a628:
    memcpy(pcVar8,param_2,__n);
  }
  pcVar8[__n] = '\0';
                    /* try { // try from 0090a63c to 0090a66b has its CatchHandler @ 0090a834 */
  StringUtil::encodeHtmlSpecialCharactersInPlace((basic_string *)&local_88,false);
  pcVar8 = (char *)((ulong)&local_88 | 1);
  if ((local_88 & 1) != 0) {
    pcVar8 = local_78;
  }
  StringUtil::convertUtf8ToAscii(pcVar8,(basic_string *)&local_70,false);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
LAB_0090a67c:
  lVar7 = *(long *)this;
  cVar2 = *(char *)(lVar7 + 0x10);
  plVar6 = *(long **)(lVar7 + 8);
                    /* try { // try from 0090a688 to 0090a7e7 has its CatchHandler @ 0090a864 */
  uVar5 = __strlen_chk(&DAT_004d3339,2);
  if (cVar2 == '\0') {
    (**(code **)(*plVar6 + 0x30))(plVar6,&DAT_004d3339);
  }
  else {
    File::writeDosEOLExpand((File *)plVar6,&DAT_004d3339,uVar5);
  }
  cVar2 = *(char *)(lVar7 + 0x10);
  plVar6 = *(long **)(lVar7 + 8);
  uVar5 = __strlen_chk(param_1,0xffffffffffffffff);
  if (cVar2 == '\0') {
    (**(code **)(*plVar6 + 0x30))(plVar6,param_1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar6,param_1,uVar5);
  }
  cVar2 = *(char *)(lVar7 + 0x10);
  plVar6 = *(long **)(lVar7 + 8);
  uVar5 = __strlen_chk(&DAT_004f4936,3);
  if (cVar2 == '\0') {
    (**(code **)(*plVar6 + 0x30))(plVar6,&DAT_004f4936);
  }
  else {
    File::writeDosEOLExpand((File *)plVar6,&DAT_004f4936,uVar5);
  }
  bVar4 = (local_70 & 1) != 0;
  pvVar1 = (void *)((ulong)&local_70 | 1);
  if (bVar4) {
    pvVar1 = local_60;
  }
  uVar5 = (uint)((byte)local_70 >> 1);
  if (bVar4) {
    uVar5 = (uint)local_68;
  }
  if (*(char *)(lVar7 + 0x10) == '\0') {
    (**(code **)(**(long **)(lVar7 + 8) + 0x30))();
  }
  else {
    File::writeDosEOLExpand((File *)*(long **)(lVar7 + 8),pvVar1,uVar5);
  }
  cVar2 = *(char *)(lVar7 + 0x10);
  plVar6 = *(long **)(lVar7 + 8);
  uVar5 = __strlen_chk(&DAT_004e56b4,2);
  if (cVar2 == '\0') {
    (**(code **)(*plVar6 + 0x30))(plVar6,&DAT_004e56b4);
  }
  else {
    File::writeDosEOLExpand((File *)plVar6,&DAT_004e56b4,uVar5);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


