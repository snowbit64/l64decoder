// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createProgramFromFile
// Entry Point: 00bf05f8
// Size: 728 bytes
// Signature: undefined __thiscall createProgramFromFile(ShaderManager * this, char * param_1, char * param_2, uint param_3, map * param_4, IProgramObject * * param_5, uint * param_6, ShaderStructLayout * * param_7, uint * param_8)


/* ShaderManager::createProgramFromFile(char const*, char const*, unsigned int,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, ShaderStructLayout,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, ShaderStructLayout> > >
   const&, IProgramObject*&, unsigned int&, ShaderStructLayout*&, unsigned int&) */

uint __thiscall
ShaderManager::createProgramFromFile
          (ShaderManager *this,char *param_1,char *param_2,uint param_3,map *param_4,
          IProgramObject **param_5,uint *param_6,ShaderStructLayout **param_7,uint *param_8)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  ulong uVar7;
  undefined uVar8;
  uchar *puVar9;
  size_t sVar10;
  long lVar11;
  uchar *puVar12;
  char *pcVar13;
  uint local_2a8 [4];
  void *local_298;
  undefined8 local_290;
  size_t local_288;
  char *local_280;
  ulonglong uStack_278;
  uchar auStack_270 [512];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  *param_5 = (IProgramObject *)0x0;
  if (*(long *)this == 0) {
    uVar5 = 0;
    goto LAB_00bf06c4;
  }
  sVar6 = strlen(param_1);
  if (param_2 == (char *)0x0) {
    uVar4 = (uint)sVar6;
    puVar12 = (uchar *)param_1;
  }
  else {
    FUN_00bf09e0(auStack_270);
    uVar4 = __strlen_chk(auStack_270,0x200);
    puVar12 = auStack_270;
  }
  puVar9 = puVar12;
  uVar7 = CompiledShaderArchive::getProgram
                    (*(CompiledShaderArchive **)this,uVar4,puVar12,param_5,param_6,param_7,
                     &uStack_278);
  uVar8 = SUB81(puVar9,0);
  if ((uVar7 & 1) != 0) {
    uVar5 = 1;
    goto LAB_00bf06c4;
  }
  uVar5 = 0;
  if ((*(long *)(this + 0x10) == 0) || (uVar5 = 0, this[0x24] != (ShaderManager)0x0))
  goto LAB_00bf06c4;
  lVar11 = *(long *)(this + 0x18);
  pcVar1 = (char *)(lVar11 + 0x19);
  if ((*(byte *)(lVar11 + 0x18) & 1) != 0) {
    pcVar1 = *(char **)(lVar11 + 0x28);
  }
  sVar6 = strlen(pcVar1);
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar6 < 0x17) {
    pcVar13 = (char *)((ulong)&local_290 | 1);
    local_290 = CONCAT71(local_290._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00bf0790;
    *pcVar13 = '\0';
  }
  else {
    uVar7 = sVar6 + 0x10 & 0xfffffffffffffff0;
    pcVar13 = (char *)operator_new(uVar7);
    local_290 = uVar7 | 1;
    local_288 = sVar6;
    local_280 = pcVar13;
LAB_00bf0790:
    sVar10 = sVar6;
    memcpy(pcVar13,pcVar1,sVar6);
    uVar8 = (undefined)sVar10;
    pcVar13[sVar6] = '\0';
  }
  if (param_2 != (char *)0x0) {
                    /* try { // try from 00bf07a8 to 00bf07d3 has its CatchHandler @ 00bf090c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_290);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_290);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_290);
                    /* try { // try from 00bf07d4 to 00bf07e7 has its CatchHandler @ 00bf0904 */
  Preprocessor::formatIncludeDirective((Preprocessor *)param_1,(char *)0x0,(bool)uVar8);
  pvVar3 = (void *)((ulong)local_2a8 | 1);
  if ((local_2a8[0] & 1) != 0) {
    pvVar3 = local_298;
  }
                    /* try { // try from 00bf0808 to 00bf080f has its CatchHandler @ 00bf08d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_290,(ulong)pvVar3);
  if (((byte)local_2a8[0] & 1) != 0) {
    operator_delete(local_298);
  }
  uVar7 = local_290;
  uVar5 = (uint)((byte)local_290 >> 1);
  if ((local_290 & 1) != 0) {
    uVar5 = (uint)local_288;
  }
  local_2a8[0] = uVar5;
                    /* try { // try from 00bf083c to 00bf0873 has its CatchHandler @ 00bf0908 */
  pcVar13 = (char *)operator_new__((ulong)(uVar5 + 1));
  pcVar1 = (char *)((ulong)&local_290 | 1);
  if ((uVar7 & 1) != 0) {
    pcVar1 = local_280;
  }
  strcpy(pcVar13,pcVar1);
  StringUtil::remove('\r',uVar5,pcVar13,local_2a8,pcVar13);
                    /* try { // try from 00bf087c to 00bf08a3 has its CatchHandler @ 00bf08d0 */
  uVar5 = createProgram(this,uVar4,puVar12,local_2a8[0],pcVar13,param_4,param_5,param_6,param_7,
                        param_8,param_1);
  operator_delete__(pcVar13);
  if ((local_290 & 1) != 0) {
    operator_delete(local_280);
  }
LAB_00bf06c4:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}


