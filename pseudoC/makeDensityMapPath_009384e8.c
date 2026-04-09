// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeDensityMapPath
// Entry Point: 009384e8
// Size: 644 bytes
// Signature: undefined __cdecl makeDensityMapPath(char * param_1, basic_string * param_2, basic_string * param_3)


/* I3DSceneGraphFactory::makeDensityMapPath(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void I3DSceneGraphFactory::makeDensityMapPath
               (char *param_1,basic_string *param_2,basic_string *param_3)

{
  byte bVar1;
  undefined uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  allocator *paVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  basic_string local_98 [4];
  void *local_88;
  undefined8 local_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  char *local_70;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  resize((ulong)param_3,'\0');
  EngineManager::getInstance();
  lVar5 = EngineManager::getTerrainLoadDirectory();
  if (lVar5 != 0) {
    EngineManager::getInstance();
    uVar4 = EngineManager::getTerrainLoadFlags();
    if ((uVar4 >> 4 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)param_2);
      strrchr(param_1,0x2f);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_2);
      paVar6 = (allocator *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                         ((char)param_2,0x2e);
      if (paVar6 != (allocator *)0xffffffffffffffff) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_98,(ulong)param_2,0,paVar6);
                    /* try { // try from 009385b0 to 009385bf has its CatchHandler @ 00938788 */
        puVar7 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 append((char *)local_98);
        local_70 = (char *)puVar7[2];
        uVar10 = *puVar7;
        uStack_78 = (undefined2)puVar7[1];
        uStack_76 = (undefined6)((ulong)puVar7[1] >> 0x10);
        local_80._0_1_ = (byte)uVar10;
        local_80._1_1_ = (undefined)((ulong)uVar10 >> 8);
        local_80._2_6_ = (undefined6)((ulong)uVar10 >> 0x10);
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        if (((byte)local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        pcVar9 = (char *)((ulong)&local_80 | 1);
        if (((byte)local_80 & 1) != 0) {
          pcVar9 = local_70;
        }
                    /* try { // try from 00938600 to 00938627 has its CatchHandler @ 0093879c */
        uVar8 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar9);
        if ((uVar8 & 1) == 0) {
                    /* try { // try from 0093862c to 00938643 has its CatchHandler @ 00938784 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_98,(ulong)param_2,0,paVar6);
                    /* try { // try from 00938644 to 00938653 has its CatchHandler @ 0093876c */
          puVar7 = (undefined8 *)
                   std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append((char *)local_98);
          uVar10 = puVar7[1];
          pcVar9 = (char *)puVar7[2];
          bVar1 = *(byte *)puVar7;
          uVar2 = *(undefined *)((long)puVar7 + 1);
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          local_68 = (undefined6)*(undefined8 *)((long)puVar7 + 2);
          uStack_62 = (undefined2)uVar10;
          uStack_60 = (undefined6)((ulong)uVar10 >> 0x10);
          if (((byte)local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          local_80._2_6_ = local_68;
          uStack_78 = uStack_62;
          uStack_76 = uStack_60;
          local_80._0_1_ = bVar1;
          local_80._1_1_ = uVar2;
          local_70 = pcVar9;
          if (((byte)local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
          pcVar9 = (char *)((ulong)&local_80 | 1);
          if (((byte)local_80 & 1) != 0) {
            pcVar9 = local_70;
          }
                    /* try { // try from 009386bc to 009386e3 has its CatchHandler @ 0093879c */
          uVar8 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar9);
          if ((uVar8 & 1) == 0) {
            if (((byte)local_80 & 1) != 0) {
              operator_delete(local_70);
            }
            goto LAB_00938708;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)param_2,(basic_string *)&local_80);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)param_3);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)param_3);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)param_2,(basic_string *)&local_80);
        }
        if (((byte)local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        goto LAB_0093873c;
      }
LAB_00938708:
      pcVar9 = *(char **)(param_2 + 4);
      if ((*(byte *)param_2 & 1) == 0) {
        pcVar9 = (char *)((long)param_2 + 1);
      }
      uVar8 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar9);
      if ((uVar8 & 1) != 0) {
        param_2 = param_3;
      }
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_2);
LAB_0093873c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


