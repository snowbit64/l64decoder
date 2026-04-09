// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadHistoryFromDisk
// Entry Point: 006d430c
// Size: 620 bytes
// Signature: undefined loadHistoryFromDisk(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::loadHistoryFromDisk() */

void Console::loadHistoryFromDisk(void)

{
  ACCESS_MODE AVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long in_x0;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte **this;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint local_ac;
  long local_a8 [5];
  byte local_80 [16];
  void *local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
                    /* try { // try from 006d433c to 006d4353 has its CatchHandler @ 006d458c */
  uVar5 = PathUtil::getUserProfileAppPath
                    ("FarmingSimulator2023Mobile",(basic_string *)&local_68,false,true);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 006d4358 to 006d436b has its CatchHandler @ 006d4584 */
    FUN_006cadd8(local_80,&local_68,"consoleHistory.dat");
                    /* try { // try from 006d436c to 006d4373 has its CatchHandler @ 006d457c */
    NativeFile::NativeFile((NativeFile *)local_a8);
    AVar1 = (uint)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      AVar1 = (ACCESS_MODE)local_70;
    }
                    /* try { // try from 006d438c to 006d439b has its CatchHandler @ 006d4578 */
    uVar5 = NativeFile::open((char *)local_a8,AVar1,false);
    if ((uVar5 & 1) != 0) {
      local_ac = 0;
                    /* try { // try from 006d43ac to 006d4433 has its CatchHandler @ 006d4588 */
      (**(code **)(local_a8[0] + 0x28))(local_a8,&local_ac,4);
      if (local_ac < 0x33) {
        this = (byte **)(in_x0 + 0x40);
        pbVar10 = *this;
        pbVar7 = *(byte **)(in_x0 + 0x48);
        pbVar9 = pbVar10;
        if (pbVar7 != pbVar10) {
          do {
            pbVar9 = pbVar7 + -0x20;
            if ((*pbVar9 & 1) != 0) {
              operator_delete(*(void **)(pbVar7 + -0x10));
            }
            pbVar7 = pbVar9;
          } while (pbVar9 != pbVar10);
          pbVar9 = *this;
        }
        uVar5 = (ulong)local_ac;
        uVar6 = (long)pbVar10 - (long)pbVar9 >> 5;
        *(byte **)(in_x0 + 0x48) = pbVar10;
        if (uVar6 < uVar5) {
          std::__ndk1::vector<Console::HistoryEntry,std::__ndk1::allocator<Console::HistoryEntry>>::
          __append((vector<Console::HistoryEntry,std::__ndk1::allocator<Console::HistoryEntry>> *)
                   this,uVar5 - uVar6);
        }
        else if (uVar5 < uVar6) {
          while (pbVar7 = pbVar10, pbVar7 != pbVar9 + uVar5 * 0x20) {
            pbVar10 = pbVar7 + -0x20;
            if ((*pbVar10 & 1) != 0) {
              operator_delete(*(void **)(pbVar7 + -0x10));
            }
          }
          *(byte **)(in_x0 + 0x48) = pbVar9 + uVar5 * 0x20;
        }
        if (local_ac != 0) {
          lVar8 = 0;
          uVar5 = 0;
          pbVar10 = *this;
          do {
                    /* try { // try from 006d44c8 to 006d4517 has its CatchHandler @ 006d459c */
            iVar4 = (**(code **)(local_a8[0] + 0x28))(local_a8,local_50,8);
            if (iVar4 == 8) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                        ((ulong)(pbVar10 + lVar8),(char)local_50[0]);
              pbVar10 = pbVar10 + lVar8;
              pbVar7 = *(byte **)(pbVar10 + 0x10);
              if ((*pbVar10 & 1) == 0) {
                pbVar7 = pbVar10 + 1;
              }
              (**(code **)(local_a8[0] + 0x28))(local_a8,pbVar7,local_50[0]);
            }
            pbVar10 = *this;
            uVar5 = uVar5 + 1;
            pbVar7 = pbVar10 + lVar8;
            lVar8 = lVar8 + 0x20;
            uVar2 = (uint)(*pbVar7 >> 1);
            if ((*pbVar7 & 1) != 0) {
              uVar2 = (uint)*(undefined8 *)(pbVar7 + 8);
            }
            *(uint *)(pbVar7 + 0x18) = uVar2;
          } while (uVar5 < local_ac);
        }
      }
                    /* try { // try from 006d451c to 006d4523 has its CatchHandler @ 006d4588 */
      NativeFile::close();
    }
    NativeFile::~NativeFile((NativeFile *)local_a8);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


