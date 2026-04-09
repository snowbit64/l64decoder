// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setServerInfo
// Entry Point: 00b3d7f4
// Size: 360 bytes
// Signature: undefined __thiscall setServerInfo(MasterServerManager * this, char * param_1, char * param_2, uint param_3, uint param_4, bool param_5)


/* MasterServerManager::setServerInfo(char const*, char const*, unsigned int, unsigned int, bool) */

void __thiscall
MasterServerManager::setServerInfo
          (MasterServerManager *this,char *param_1,char *param_2,uint param_3,uint param_4,
          bool param_5)

{
  long lVar1;
  ENetNetworkManager *pEVar2;
  GsBitStream *this_00;
  undefined8 uVar3;
  uchar local_60 [4];
  MasterServerManager local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x40));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x58));
  uVar3 = NEON_umin(CONCAT44(param_4,param_3),0x2000000020,4);
  *(undefined8 *)(this + 0x74) = uVar3;
  this[0x70] = (MasterServerManager)param_5;
  if (*(int *)(this + 0x178) == 7) {
    pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    this_00 = (GsBitStream *)ENetNetworkManager::createWriteStream(pEVar2,0,true);
    local_60[0] = '\t';
    GsBitStream::writeBits(this_00,local_60,8,true);
    MasterServerUtil::writeString(this_00,(basic_string *)(this + 0x40));
    MasterServerUtil::writeString(this_00,(basic_string *)(this + 0x58));
    GsBitStream::writeBits(this_00,(uchar *)(this + 0x74),5,true);
    GsBitStream::writeBits(this_00,(uchar *)(this + 0x78),5,true);
    local_5c[0] = this[0x70];
    GsBitStream::writeBits(this_00,(uchar *)local_5c,1,true);
    pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    ENetNetworkManager::send(pEVar2,this_00,2,3,'\0',(uint *)(this + 0x188),false);
    pEVar2 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    ENetNetworkManager::deleteWriteStream(pEVar2,this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


