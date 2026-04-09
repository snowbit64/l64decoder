// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportFile
// Entry Point: 00918088
// Size: 868 bytes
// Signature: undefined __cdecl exportFile(uint param_1, basic_string * param_2, basic_string * param_3, bool param_4, COLOR_PROFILE param_5, FileOutputStream * param_6)


/* I3DSave::exportFile(unsigned int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   SceneSave::SerializeFile::COLOR_PROFILE, FileOutputStream&) */

void I3DSave::exportFile(uint param_1,basic_string *param_2,basic_string *param_3,bool param_4,
                        COLOR_PROFILE param_5,FileOutputStream *param_6)

{
  void *pvVar1;
  char *pcVar2;
  FileOutputStream FVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  char *pcVar10;
  long *plVar11;
  ulong local_a8;
  undefined8 local_a0;
  void *local_98;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined auStack_78 [32];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (char *)0x0;
  pcVar2 = FileManager::s_singletonFileManager + 0x49;
  if ((FileManager::s_singletonFileManager[72] & 1) != 0) {
    pcVar2 = (char *)FileManager::s_singletonFileManager._88_8_;
  }
  if ((param_4) && (*pcVar2 != '\0')) {
    pcVar10 = *(char **)(param_2 + 4);
    if ((*(byte *)param_2 & 1) == 0) {
      pcVar10 = (char *)((long)param_2 + 1);
    }
                    /* try { // try from 00918104 to 0091814b has its CatchHandler @ 009183ec */
    uVar8 = StringUtil::startsWith(pcVar10,pcVar2);
    if ((uVar8 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_90);
      __strlen_chk(pcVar2,0xffffffffffffffff);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_90);
      goto LAB_00918174;
    }
  }
                    /* try { // try from 00918150 to 00918173 has its CatchHandler @ 009183f0 */
  uVar8 = PathUtil::buildRelativePath(param_3,param_2,param_2,(basic_string *)&local_90);
  if ((uVar8 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_90,param_2);
  }
LAB_00918174:
  local_a8 = 0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  pcVar2 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pcVar2 = local_80;
  }
                    /* try { // try from 00918194 to 0091839b has its CatchHandler @ 00918400 */
  StringUtil::convertUtf8ToAscii(pcVar2,(basic_string *)&local_a8,false);
  FVar3 = param_6[0x10];
  plVar11 = *(long **)(param_6 + 8);
  uVar6 = __strlen_chk("    <File fileId=\"",0x13);
  if (FVar3 == (FileOutputStream)0x0) {
    (**(code **)(*plVar11 + 0x30))(plVar11,"    <File fileId=\"");
    uVar9 = extraout_x1_00;
  }
  else {
    File::writeDosEOLExpand((File *)plVar11,"    <File fileId=\"",uVar6);
    uVar9 = extraout_x1;
  }
  uVar7 = FUN_0091faa0(auStack_78,uVar9,&DAT_004cf2ba,param_1);
  (**(code **)(**(long **)(param_6 + 8) + 0x30))(*(long **)(param_6 + 8),auStack_78,uVar7);
  FVar3 = param_6[0x10];
  plVar11 = *(long **)(param_6 + 8);
  uVar6 = __strlen_chk("\" filename=\"",0xd);
  if (FVar3 == (FileOutputStream)0x0) {
    (**(code **)(*plVar11 + 0x30))(plVar11,"\" filename=\"");
  }
  else {
    File::writeDosEOLExpand((File *)plVar11,"\" filename=\"",uVar6);
  }
  bVar5 = (local_a8 & 1) != 0;
  pvVar1 = (void *)((ulong)&local_a8 | 1);
  if (bVar5) {
    pvVar1 = local_98;
  }
  uVar6 = (uint)((byte)local_a8 >> 1);
  if (bVar5) {
    uVar6 = (uint)local_a0;
  }
  if (param_6[0x10] == (FileOutputStream)0x0) {
    (**(code **)(**(long **)(param_6 + 8) + 0x30))();
  }
  else {
    File::writeDosEOLExpand((File *)*(long **)(param_6 + 8),pvVar1,uVar6);
  }
  if (param_5 != 0) {
    FVar3 = param_6[0x10];
    plVar11 = *(long **)(param_6 + 8);
    uVar6 = __strlen_chk("\" colorProfile=\"",0x11);
    if (FVar3 == (FileOutputStream)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,"\" colorProfile=\"");
    }
    else {
      File::writeDosEOLExpand((File *)plVar11,"\" colorProfile=\"",uVar6);
    }
    FVar3 = param_6[0x10];
    pcVar2 = "sRGB";
    if (param_5 != 1) {
      pcVar2 = "linearRGB";
    }
    plVar11 = *(long **)(param_6 + 8);
    uVar6 = __strlen_chk(pcVar2,10);
    if (FVar3 == (FileOutputStream)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,pcVar2);
    }
    else {
      File::writeDosEOLExpand((File *)plVar11,pcVar2,uVar6);
    }
  }
  FVar3 = param_6[0x10];
  plVar11 = *(long **)(param_6 + 8);
  uVar6 = __strlen_chk(&DAT_004ddf8b,5);
  if (FVar3 == (FileOutputStream)0x0) {
    (**(code **)(*plVar11 + 0x30))(plVar11,&DAT_004ddf8b);
  }
  else {
    File::writeDosEOLExpand((File *)plVar11,&DAT_004ddf8b,uVar6);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


