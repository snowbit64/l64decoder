// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addServerMod
// Entry Point: 00b3d468
// Size: 104 bytes
// Signature: undefined __thiscall addServerMod(MasterServerManager * this, ServerModInfo * param_1)


/* MasterServerManager::addServerMod(MasterServerManager::ServerModInfo const&) */

void __thiscall MasterServerManager::addServerMod(MasterServerManager *this,ServerModInfo *param_1)

{
  basic_string *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = *(basic_string **)(this + 0x88);
  if (pbVar1 != *(basic_string **)(this + 0x90)) {
                    /* try { // try from 00b3d48c to 00b3d497 has its CatchHandler @ 00b3d4d0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(pbVar1 + 8) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(pbVar1 + 6) = uVar2;
    *(basic_string **)(this + 0x88) = pbVar1 + 10;
    return;
  }
  std::__ndk1::
  vector<MasterServerManager::ServerModInfo,std::__ndk1::allocator<MasterServerManager::ServerModInfo>>
  ::__push_back_slow_path<MasterServerManager::ServerModInfo_const&>
            ((vector<MasterServerManager::ServerModInfo,std::__ndk1::allocator<MasterServerManager::ServerModInfo>>
              *)(this + 0x80),param_1);
  return;
}


