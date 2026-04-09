// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadDeviceMappings
// Entry Point: 00b1b350
// Size: 460 bytes
// Signature: undefined __thiscall loadDeviceMappings(DeviceMappingManager * this, char * param_1)


/* WARNING: Type propagation algorithm not settling */
/* DeviceMappingManager::loadDeviceMappings(char const*) */

undefined8 __thiscall
DeviceMappingManager::loadDeviceMappings(DeviceMappingManager *this,char *param_1)

{
  char *pcVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte local_c8 [16];
  char *local_b8;
  basic_string local_b0 [4];
  char *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  byte *local_80;
  byte *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = (byte *)0x0;
  local_78 = (byte *)0x0;
  local_70 = 0;
                    /* try { // try from 00b1b38c to 00b1b39b has its CatchHandler @ 00b1b51c */
  FileManager::getFiles
            ((FileManager *)FileManager::s_singletonFileManager,param_1,(vector *)&local_80);
  pbVar3 = local_78;
  if (local_78 != local_80) {
    uVar8 = 0;
    do {
      pbVar3 = local_80;
                    /* try { // try from 00b1b3fc to 00b1b403 has its CatchHandler @ 00b1b554 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_b0);
      local_88 = *(undefined8 *)(pbVar3 + uVar8 * 0x30 + 0x28);
      uStack_90 = *(undefined8 *)(pbVar3 + uVar8 * 0x30 + 0x20);
      local_98 = *(undefined8 *)(pbVar3 + uVar8 * 0x30 + 0x18);
      if ((int)local_98 == 1) {
        pcVar1 = (char *)((ulong)local_b0 | 1);
        if (((byte)local_b0[0] & 1) != 0) {
          pcVar1 = local_a0;
        }
                    /* try { // try from 00b1b434 to 00b1b43b has its CatchHandler @ 00b1b53c */
        uVar6 = StringUtil::iEndsWith(pcVar1,".xml");
        if ((uVar6 & 1) != 0) {
                    /* try { // try from 00b1b440 to 00b1b44f has its CatchHandler @ 00b1b538 */
          std::__ndk1::operator+(param_1,local_b0);
          pcVar1 = (char *)((ulong)local_c8 | 1);
          if ((local_c8[0] & 1) != 0) {
            pcVar1 = local_b8;
          }
                    /* try { // try from 00b1b460 to 00b1b467 has its CatchHandler @ 00b1b520 */
          loadDeviceMapping(this,pcVar1);
          if ((local_c8[0] & 1) != 0) {
            operator_delete(local_b8);
          }
        }
      }
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
      uVar6 = ((long)local_78 - (long)local_80 >> 4) * -0x5555555555555555;
      pbVar3 = local_80;
    } while (uVar8 <= uVar6 && uVar6 - uVar8 != 0);
  }
  pbVar4 = pbVar3;
  pbVar7 = local_78;
  if (pbVar3 != (byte *)0x0) {
    while (pbVar5 = pbVar7, pbVar5 != pbVar3) {
      pbVar7 = pbVar5 + -0x30;
      pbVar4 = local_80;
      if ((*pbVar7 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -0x20));
        pbVar4 = local_80;
      }
    }
    local_78 = pbVar3;
    operator_delete(pbVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


