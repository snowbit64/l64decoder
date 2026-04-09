// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startFile
// Entry Point: 0090526c
// Size: 480 bytes
// Signature: undefined __cdecl startFile(void * param_1, char * param_2, char * * param_3)


/* I3DFilePoolFactory::startFile(void*, char const*, char const**) */

void I3DFilePoolFactory::startFile(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  pair pVar3;
  char *pcVar4;
  char *__nptr;
  ulong uVar5;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78;
  pair local_70 [2];
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar4 = (char *)ExpatUtil::getAttr("filename",param_3);
  __nptr = (char *)ExpatUtil::getAttr("fileId",param_3);
  if ((pcVar4 != (char *)0x0) && (__nptr != (char *)0x0)) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    if (*pcVar4 == '$') {
                    /* try { // try from 009052f8 to 00905343 has its CatchHandler @ 0090549c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_a8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_a8);
      FileManager::s_singletonFileManager[96] = 1;
    }
    else {
      uVar5 = PathUtil::isAbsolutePath(pcVar4);
      if ((uVar5 & 1) == 0) {
        PathUtil::buildAbsolutePath
                  ((basic_string *)((long)param_1 + 0x1f8),pcVar4,(basic_string *)&local_a8);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_a8);
      }
    }
                    /* try { // try from 00905344 to 00905353 has its CatchHandler @ 00905498 */
    pcVar4 = (char *)ExpatUtil::getAttr("colorProfile",param_3);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strcasecmp(pcVar4,"srgb");
      if (iVar2 == 0) {
        pcVar4 = (char *)0x1;
      }
      else {
        iVar2 = strcasecmp(pcVar4,"linearrgb");
        pcVar4 = (char *)((ulong)(iVar2 == 0) << 1);
      }
    }
    pVar3 = atoi(__nptr);
                    /* try { // try from 009053a0 to 009053ab has its CatchHandler @ 00905494 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_90);
    local_78 = SUB84(pcVar4,0);
    uStack_60 = uStack_88;
    local_68 = local_90;
    local_58 = local_80;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
                    /* try { // try from 009053d4 to 009053db has its CatchHandler @ 0090544c */
    local_70[0] = pVar3;
    local_50 = local_78;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>>>
    ::__emplace_unique_impl<std::__ndk1::pair<int,I3DLoad::FileData>>
              ((__tree<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>>>
                *)((long)param_1 + 0x88),local_70);
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


