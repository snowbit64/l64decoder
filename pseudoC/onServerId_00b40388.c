// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onServerId
// Entry Point: 00b40388
// Size: 264 bytes
// Signature: undefined __cdecl onServerId(GsBitStream * param_1, uint param_2)


/* MasterServerManager::onServerId(GsBitStream*, unsigned int) */

void MasterServerManager::onServerId(GsBitStream *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  GsBitStream *this;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  ulong local_58;
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_3c;
  long local_38;
  
  this = (GsBitStream *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0;
  GsBitStream::readBits(this,(uchar *)&local_3c,0x20,true);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
                    /* try { // try from 00b403d0 to 00b403db has its CatchHandler @ 00b40498 */
  MasterServerUtil::readString(this,(basic_string *)&local_58);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (void *)0x0;
                    /* try { // try from 00b403e4 to 00b403ef has its CatchHandler @ 00b40494 */
  MasterServerUtil::readString(this,(basic_string *)&local_70);
  local_74 = 0;
                    /* try { // try from 00b403f4 to 00b40423 has its CatchHandler @ 00b404a8 */
  GsBitStream::readBits(this,(uchar *)&local_74,4,true);
  if (param_1[0x38] != (GsBitStream)0x0) {
    *(undefined4 *)(param_1 + 0xcc) = local_3c;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 0xd0),(basic_string *)&local_58);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
                    /* try { // try from 00b4042c to 00b40437 has its CatchHandler @ 00b40490 */
    setServerPlatformSessionIds((MasterServerManager *)param_1,(vector *)&local_90);
                    /* try { // try from 00b40438 to 00b40447 has its CatchHandler @ 00b404a8 */
    uVar2 = GenericMpManager::getInstance();
    GenericMpManager::onServerId(uVar2,*(uint *)(param_1 + 0x18c));
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


