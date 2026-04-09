// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImage
// Entry Point: 00a7b9e4
// Size: 308 bytes
// Signature: undefined __cdecl saveImage(char * param_1, ImageDesc * param_2)


/* DDSUtil::saveImage(char const*, ImageDesc const&) */

void DDSUtil::saveImage(char *param_1,ImageDesc *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  bool local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar2 != (long *)0x0) {
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    local_54 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_dc[0] = false;
    uVar3 = buildDDSHeader(param_2,(DDSHeader *)&local_c0,(DDSHeaderDX10 *)&local_d8,local_dc);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_004f514b,4);
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_c0,0x7c);
      if (local_dc[0] != false) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_d8,0x14);
      }
      (**(code **)(*plVar2 + 0x30))
                (plVar2,*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x20));
    }
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2 != (long *)0x0);
}


