// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAllFiles
// Entry Point: 00b37794
// Size: 460 bytes
// Signature: undefined __thiscall getAllFiles(ZIPFileArchive * this, vector * param_1)


/* ZIPFileArchive::getAllFiles(std::__ndk1::vector<GsFileInfo, std::__ndk1::allocator<GsFileInfo>
   >&) */

void __thiscall ZIPFileArchive::getAllFiles(ZIPFileArchive *this,vector *param_1)

{
  long *plVar1;
  ACCESS_MODE AVar2;
  basic_string *pbVar3;
  long lVar4;
  void *pvVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong local_910;
  ulong local_908;
  void *local_900;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined auStack_8e0 [64];
  ulong local_8a0;
  undefined auStack_858 [2048];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar1 = (long *)(this + 0x80b0);
  if (*plVar1 == 0) goto LAB_00b37834;
  plVar8 = *(long **)(this + 0x10);
  if (plVar8 == (long *)(this + 0x18)) {
    if (*(long *)(this + 0x20) == 0) {
      AVar2 = (int)this + 0x41;
      if (((byte)this[0x40] & 1) != 0) {
        AVar2 = (ACCESS_MODE)*(undefined8 *)(this + 0x50);
      }
      uVar7 = NativeFile::open((char *)(this + 0x18),AVar2,false);
      goto joined_r0x00b37824;
    }
  }
  else {
    uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
joined_r0x00b37824:
    if ((uVar7 & 1) == 0) goto LAB_00b37834;
  }
  iVar6 = unzGoToFirstFile(*plVar1);
  if (iVar6 == 0) {
    do {
      iVar6 = unzOpenCurrentFile(*plVar1);
      if (iVar6 == 0) {
        iVar6 = unzGetCurrentFileInfo64(*plVar1,auStack_8e0,auStack_858,0x800,0,0,0,0);
        if ((iVar6 == 0) && (local_8a0 < 0x800)) {
          local_910 = 0;
          local_908 = 0;
          local_900 = (void *)0x0;
                    /* try { // try from 00b378d0 to 00b378db has its CatchHandler @ 00b3796c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_910,(ulong)auStack_858);
          uVar7 = local_910 >> 1 & 0x7f;
          pvVar5 = (void *)((ulong)&local_910 | 1);
          if ((local_910 & 1) != 0) {
            uVar7 = local_908;
            pvVar5 = local_900;
          }
          pbVar3 = *(basic_string **)(param_1 + 8);
          local_8f8 = 1;
          if (*(char *)((long)pvVar5 + (uVar7 - 1)) == '/') {
            local_8f8 = 2;
          }
          if (pbVar3 == *(basic_string **)(param_1 + 0x10)) {
                    /* try { // try from 00b3793c to 00b37947 has its CatchHandler @ 00b3796c */
            std::__ndk1::vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>>::
            __push_back_slow_path<GsFileInfo_const&>
                      ((vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>> *)param_1,
                       (GsFileInfo *)&local_910);
          }
          else {
                    /* try { // try from 00b37914 to 00b3791f has its CatchHandler @ 00b37960 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(pbVar3);
            *(undefined8 *)(pbVar3 + 10) = local_8e8;
            *(undefined8 *)(pbVar3 + 8) = uStack_8f0;
            *(ulong *)(pbVar3 + 6) = CONCAT44(uStack_8f4,local_8f8);
            *(basic_string **)(param_1 + 8) = pbVar3 + 0xc;
          }
          if ((local_910 & 1) != 0) {
            operator_delete(local_900);
          }
        }
        unzCloseCurrentFile(*plVar1);
      }
      iVar6 = unzGoToNextFile(*plVar1);
    } while (iVar6 == 0);
  }
LAB_00b37834:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


