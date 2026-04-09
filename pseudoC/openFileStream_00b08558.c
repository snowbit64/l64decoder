// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: openFileStream
// Entry Point: 00b08558
// Size: 1168 bytes
// Signature: undefined __thiscall openFileStream(AudioLoaderOGG * this, char * param_1, AudioBufferDesc * param_2)


/* AudioLoaderOGG::openFileStream(char const*, AudioBufferDesc&) */

uint __thiscall
AudioLoaderOGG::openFileStream(AudioLoaderOGG *this,char *param_1,AudioBufferDesc *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *this_00;
  uint uVar12;
  char *pcVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  int local_48c;
  undefined8 local_488;
  undefined4 local_480;
  int local_474;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined **local_448;
  undefined8 uStack_440;
  long *local_438;
  undefined auStack_430 [944];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  local_448 = &PTR__VorbisFileWrap_00fe7268;
  uStack_440 = 0;
  local_438 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                       false);
  if (local_438 == (long *)0x0) {
    uVar12 = 0;
    goto LAB_00b089ac;
  }
                    /* try { // try from 00b085c8 to 00b085cb has its CatchHandler @ 00b08a14 */
  uVar6 = (**(code **)(*local_438 + 0x10))();
  if ((uVar6 & 1) == 0) {
LAB_00b0898c:
    uVar12 = 0;
  }
  else {
    uStack_468 = DAT_021157c8;
    local_470 = s_ovCallbacks;
    uStack_458 = DAT_021157d8;
    uStack_460 = DAT_021157d0;
                    /* try { // try from 00b085ec to 00b08603 has its CatchHandler @ 00b08a0c */
    iVar4 = (*fn_ov_open_callbacks)(&local_448,auStack_430,0,0,&local_470);
    if (iVar4 != 0) goto LAB_00b0898c;
                    /* try { // try from 00b08614 to 00b0861f has its CatchHandler @ 00b08a08 */
    lVar7 = (*fn_ov_info)(auStack_430,0xffffffff);
    uVar10 = *(undefined8 *)(lVar7 + 8);
    param_2[4] = (AudioBufferDesc)0x0;
    *(int *)(param_2 + 8) = (int)uVar10;
    iVar4 = *(int *)(lVar7 + 4);
    *(int *)(param_2 + 0xc) = iVar4;
    if (iVar4 == 1) {
      uVar9 = 4;
LAB_00b08658:
      *(undefined4 *)param_2 = uVar9;
    }
    else if (iVar4 == 2) {
      uVar9 = 5;
      goto LAB_00b08658;
    }
    param_2[4] = (AudioBufferDesc)0x0;
    *(AudioLoaderOGG **)(param_2 + 0x50) = this;
                    /* try { // try from 00b08664 to 00b0866f has its CatchHandler @ 00b08a04 */
    dVar15 = (double)ov_time_total(auStack_430,0xffffffff);
    fVar16 = *(float *)(param_2 + 0x4c);
    if (local_438 == (long *)0x0) {
      lVar7 = 0;
      fVar14 = fVar16;
    }
    else {
                    /* try { // try from 00b08688 to 00b0868b has its CatchHandler @ 00b089f0 */
      lVar7 = (**(code **)(*local_438 + 0x48))();
      fVar14 = *(float *)(param_2 + 0x4c);
    }
    iVar4 = *(int *)(param_2 + 0xc);
    uVar12 = iVar4 * 2;
    uVar2 = 0;
    if (uVar12 != 0) {
      uVar2 = (uint)(int)((double)lVar7 / (dVar15 / (double)fVar16)) / uVar12;
    }
    lVar7 = *(long *)(this + 0x18);
    *(uint *)(this + 0x58) = uVar2 * uVar12 * 4;
    uVar11 = *(long *)(this + 0x20) - lVar7 >> 2;
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 8));
    uVar6 = (ulong)(uint)(iVar4 * (int)(fVar14 * fVar16));
    *(int *)(this + 0x30) = (int)(fVar14 * fVar16);
    if (uVar11 < uVar6) {
                    /* try { // try from 00b086fc to 00b086ff has its CatchHandler @ 00b089ec */
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
                ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x18),uVar6 - uVar11);
      iVar4 = *(int *)(param_2 + 0xc);
    }
    else if (uVar6 < uVar11) {
      *(ulong *)(this + 0x20) = lVar7 + uVar6 * 4;
    }
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
    *(int *)(this + 0x3c) = iVar4;
                    /* try { // try from 00b08728 to 00b08733 has its CatchHandler @ 00b08a10 */
    plVar8 = (long *)(*fn_ov_comment)(auStack_430,0xffffffff);
    if (0 < *(int *)(plVar8 + 2)) {
      lVar7 = 0;
      do {
        pcVar13 = *(char **)(*plVar8 + lVar7 * 8);
                    /* try { // try from 00b08784 to 00b0880b has its CatchHandler @ 00b08a24 */
        uVar6 = StringUtil::iStartsWith(pcVar13,"ARTIST=");
        if ((uVar6 & 1) == 0) {
          uVar6 = StringUtil::iStartsWith(pcVar13,"ALBUM=");
          if ((uVar6 & 1) == 0) {
            uVar6 = StringUtil::iStartsWith(pcVar13,"TITLE=");
            if ((uVar6 & 1) != 0) {
              __strlen_chk("TITLE=",7);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)(this + 0xa0));
            }
          }
          else {
            __strlen_chk("ALBUM=",7);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)(this + 0x88));
          }
        }
        else {
          __strlen_chk("ARTIST=",8);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)(this + 0x70));
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(plVar8 + 2));
    }
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
                    /* try { // try from 00b08824 to 00b08833 has its CatchHandler @ 00b08a10 */
    plVar8 = (long *)operator_new(0x118);
                    /* try { // try from 00b0883c to 00b08847 has its CatchHandler @ 00b089f4 */
    ThreadedFileReader::ThreadedFileReader
              ((ThreadedFileReader *)plVar8,param_1,*(uint *)(this + 0x58),3);
    lVar7 = *plVar8;
    *(long **)(this + 0x10) = plVar8;
                    /* try { // try from 00b08854 to 00b0885b has its CatchHandler @ 00b08a10 */
    uVar6 = (**(code **)(lVar7 + 0x10))(plVar8);
    if ((uVar6 & 1) == 0) goto LAB_00b0898c;
    local_488 = 0;
    local_480 = 0;
    this_00 = (undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x48) = *this_00;
    if (*(uint *)(this + 0x58) == 0) {
      iVar4 = 0;
    }
    else {
                    /* try { // try from 00b0887c to 00b08883 has its CatchHandler @ 00b089e8 */
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)this_00,
                 (ulong)*(uint *)(this + 0x58));
      iVar4 = *(int *)(this + 0x58);
    }
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x60) = 0;
    do {
                    /* try { // try from 00b088b4 to 00b088b7 has its CatchHandler @ 00b08a1c */
      ThreadedFileReader::waitForData();
                    /* try { // try from 00b088dc to 00b088df has its CatchHandler @ 00b08a20 */
      iVar5 = (**(code **)(**(long **)(this + 0x10) + 0x28))
                        (*(long **)(this + 0x10),
                         *(long *)(this + 0x40) + (ulong)*(uint *)(this + 0x60),
                         (*(int *)(this + 0x48) - (int)*(long *)(this + 0x40)) -
                         *(uint *)(this + 0x60));
      if (iVar5 == 0) {
                    /* try { // try from 00b08954 to 00b08957 has its CatchHandler @ 00b08a20 */
        uVar6 = (**(code **)(**(long **)(this + 0x10) + 0x50))();
        if ((uVar6 & 1) != 0) goto LAB_00b0898c;
LAB_00b088a4:
        iVar5 = 7;
      }
      else {
        iVar1 = *(int *)(this + 0x60);
        *(int *)(this + 0x60) = iVar1 + iVar5;
                    /* try { // try from 00b088f4 to 00b08903 has its CatchHandler @ 00b08a18 */
        lVar7 = stb_vorbis_open_pushdata
                          (*(undefined8 *)(this + 0x40),iVar1 + iVar5,&local_48c,&local_474,
                           &local_488);
        *(long *)(this + 0x68) = lVar7;
        if ((lVar7 == 0) && (local_474 == 1)) {
          uVar6 = (ulong)(uint)(*(int *)(this + 0x58) + iVar4);
          uVar11 = *(long *)(this + 0x48) - *(long *)(this + 0x40);
          *(int *)(this + 0x58) = *(int *)(this + 0x58) + iVar4;
          if (uVar11 < uVar6) {
                    /* try { // try from 00b0889c to 00b088a3 has its CatchHandler @ 00b08a18 */
            std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                      ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)this_00,
                       uVar6 - uVar11);
          }
          else if (uVar6 < uVar11) {
            iVar5 = 7;
            *(ulong *)(this + 0x48) = *(long *)(this + 0x40) + uVar6;
            goto LAB_00b088a8;
          }
          goto LAB_00b088a4;
        }
        if (lVar7 == 0) {
          plVar8 = (long *)0x0;
          iVar5 = 1;
        }
        else {
          plVar8 = (long *)0x1;
          iVar5 = 1;
          *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + local_48c;
        }
      }
LAB_00b088a8:
      uVar12 = (uint)plVar8;
    } while (iVar5 == 7);
  }
  local_448 = &PTR__VorbisFileWrap_00fe7268;
  if (local_438 != (long *)0x0) {
    (**(code **)(*local_438 + 8))();
  }
LAB_00b089ac:
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12 & 1;
}


